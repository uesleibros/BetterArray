FROM ubuntu:latest

RUN apt-get update && \
    apt-get install -y build-essential && \
    apt-get clean

COPY . /include
WORKDIR /include

RUN g++ -o programa tests/test.cpp

CMD ["./programa"]
