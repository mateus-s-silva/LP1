// Arquivo Turma.cpp

#include "turma.h"
#include <iostream>
#include <algorithm>

/**
 * @brief Construtor da classe Turma.
 * @param capacidade A capacidade máxima da turma.
 */
Turma::Turma(int capacidade) {
    this->capacidade = capacidade;
    this->vagas = capacidade;
}

/**
 * @brief Destrutor da classe Turma.
 * Libera a memória alocada para os objetos Aluno.
 */
Turma::~Turma() {
    for (Aluno* aluno : alunos) {
        delete aluno;
    }
}

/**
 * @brief Obtém a capacidade máxima da turma.
 * @return A capacidade máxima da turma.
 */
int Turma::getCapacidade() const {
    return capacidade;
}

/**
 * @brief Obtém a quantidade de vagas disponíveis na turma.
 * @return A quantidade de vagas disponíveis na turma.
 */
int Turma::getVagas() const {
    return vagas;
}

/**
 * @brief Define a capacidade máxima da turma.
 * @param capacidade A capacidade máxima da turma.
 */
void Turma::setCapacidade(int capacidade) {
    this->capacidade = capacidade;
}

/**
 * @brief Define a quantidade de vagas disponíveis na turma.
 * @param vagas A quantidade de vagas disponíveis na turma.
 */
void Turma::setVagas(int vagas) {
    this->vagas = vagas;
}

/**
 * @brief Aloca os alunos na turma.
 * Solicita informações sobre cada aluno e os adiciona na turma.
 */
void Turma::alocaAlunos() {
    for (int i = 0; i < capacidade; i++) {
        int matricula;
        std::string nome;
        float nota1, nota2, nota3;

        std::cout << "Aluno " << i + 1 << std::endl;
        std::cout << "Matricula: ";
        std::cin >> matricula;
        std::cout << "Nome: ";
        std::cin.ignore();
        std::getline(std::cin, nome);
        std::cout << "Nota 1: ";
        std::cin >> nota1;
        std::cout << "Nota 2: ";
        std::cin >> nota2;
        std::cout << "Nota 3: ";
        std::cin >> nota3;

        Aluno* aluno = new Aluno(matricula, nome, nota1, nota2, nota3);
        alunos.push_back(aluno);
        vagas--;
    }
}

/**
 * @brief Imprime os dados dos alunos da turma.
 */
void Turma::imprimeAlunos() const {
    for (const Aluno* aluno : alunos) {
        std::cout << "Matricula: " << aluno->getMatricula() << std::endl;
        std::cout << "Nome: " << aluno->getNome() << std::endl;
        std::cout << "Nota 1: " << aluno->getNota1() << std::endl;
        std::cout << "Nota 2: " << aluno->getNota2() << std::endl;
        std::cout << "Nota 3: " << aluno->getNota3() << std::endl;
        std::cout << "Media: " << aluno->calculaMedia() << std::endl;
        std::cout << "--------------------------" << std::endl;
    }
}

/**
 * @brief Ordena os alunos da turma com base em um campo específico.
 * @param campo O campo pelo qual os alunos devem ser ordenados ("matricula", "nome" ou "nota").
 */
void Turma::ordenaCampo(std::string campo) {
    if (campo == "matricula") {
        for (int i = 0; i < alunos.size() - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < alunos.size(); j++) {
                if (alunos[j]->getMatricula() < alunos[minIndex]->getMatricula()) {
                    minIndex = j;
                }
            }
            std::swap(alunos[i], alunos[minIndex]);
        }
    }
    else if (campo == "nome") {
        for (int i = 0; i < alunos.size() - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < alunos.size(); j++) {
                if (alunos[j]->getNome() < alunos[minIndex]->getNome()) {
                    minIndex = j;
                }
            }
            std::swap(alunos[i], alunos[minIndex]);
        }
    }
    else if (campo == "nota") {
        for (int i = 0; i < alunos.size() - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < alunos.size(); j++) {
                if (alunos[j]->calculaMedia() < alunos[minIndex]->calculaMedia()) {
                    minIndex = j;
                }
            }
            std::swap(alunos[i], alunos[minIndex]);
        }
    }
    else {
        std::cout << "Campo inválido" << std::endl;
    }
}
