CC = g++
CFLAGS = -Wall -Wextra -std=c++11 -O2
TARGET = libbetterarray.a
INCLUDE_DIR = include
SRCS_DIR = src
OBJS_DIR = objs
SRCS = $(SRCS_DIR)/BetterArray.cpp $(SRCS_DIR)/Iterator.cpp
OBJS = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))
DEPS = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.d,$(SRCS))

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	$(CC) $(CFLAGS) -c -MMD -MP -MF $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.d,$<) -o $@ $< -I$(INCLUDE_DIR)

-include $(DEPS)

check: $(TARGET)
    ./tests/run_tests.sh

distcheck: $(TARGET)
    $(MAKE) -j$(nproc) check
    tar -czvf $(TARGET)-$(VERSION).tar.gz $(SRCS) $(INCLUDE_DIR) Makefile
    rm -rf $(TARGET) $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR) $(TARGET)

$(shell mkdir -p $(OBJS_DIR))
