#!/bin/bash

# Compile a biblioteca e o arquivo de teste
g++ -std=c++11 -Iinclude -L. -lbetterarray tests/test.cpp -o test

# Execute o teste e salve o resultado
./test > test_output.txt

# Verifique se o resultado do teste está correto
if diff test_output.txt expected_output.txt; then
    echo "Teste passou com sucesso!"
    exit 0
else
    echo "Teste falhou."
    exit 1
fi
