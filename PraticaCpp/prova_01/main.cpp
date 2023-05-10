#include <iostream>
#include <algorithm>
#include <ctime>
#include "funcionario.h"

int main() {
    int N = 1; // tamanho inicial do vetor
    int qtdFuncionarios = 0; // quantidade de funcionários adicionados
    Funcionario* funcionarios = new Funcionario[N]; // alocação inicial do vetor

    std::string nome;
    double salario;

    std::srand(std::time(0));
    int numeroAleatorio = rand() % 11;
    numeroAleatorio *= 10;

    // leitura dos dados dos funcionários
    while (std::cin >> nome >> salario) {
        funcionarios[qtdFuncionarios] = Funcionario(nome, salario);
        funcionarios[qtdFuncionarios].aumentarSalario(numeroAleatorio);
        qtdFuncionarios++;


        if (qtdFuncionarios == N) {
            // vetor está cheio, aumenta seu tamanho em 1
            N++;
            Funcionario* novoVetor = new Funcionario[N];

            // copia valores do vetor antigo para o novo vetor
            for (int i = 0; i < qtdFuncionarios; i++) {
                novoVetor[i] = funcionarios[i];
            }

            // libera memória do vetor antigo
            delete[] funcionarios;

            // atualiza o ponteiro para o novo vetor
            funcionarios = novoVetor;
        }
    }

    // ordenação dos funcionários por salário em ordem decrescente
    std::sort(funcionarios, funcionarios+qtdFuncionarios, [](Funcionario f1, Funcionario f2) {
        return f1.getSalario() > f2.getSalario();
    });

    std::cout << "\nFuncionarios com maior salario:\n";
    for (int i = 0; i < 3 && i < qtdFuncionarios; i++) {
        std::cout << funcionarios[i] << std::endl;
    }

    std::cout << "\nFuncionarios com menor salario:\n";
    for (int i = qtdFuncionarios-1; i >= 0 && i >= qtdFuncionarios-3; i--) {
        std::cout << funcionarios[i] << std::endl;
    }

    // incremento de 10% no salário de todos os funcionários
    for (int i = 0; i < qtdFuncionarios; i++) {
        ++funcionarios[i];
    }

    std::cout << "\nFuncionarios apos incremento de 10%:\n";
    for (int i = 0; i < qtdFuncionarios; i++) {
        std::cout << funcionarios[i] << std::endl;
    }

    // libera memória do vetor de funcionários
    delete[] funcionarios;

    return 0;
}