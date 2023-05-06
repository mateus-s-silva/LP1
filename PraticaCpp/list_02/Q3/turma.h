/**
 * @file turma.cpp
 * @brief Implementação de métodos da classe Turma.
 */



#ifndef TURMA_H
#define TURMA_H

#include <vector>
#include <string>
#include "aluno.h"

class Turma {
private:
    int capacidade;                  // Capacidade total da turma
    int vagas;                       // Quantidade de vagas disponíveis
    std::vector<Aluno*> alunos;      // Vetor de ponteiros para objetos Aluno

public:
    /**
     * @brief Construtor da classe Turma.
     * @param capacidade A capacidade total da turma.
     */
    Turma(int capacidade);

    /**
     * @brief Destrutor da classe Turma.
     */
    ~Turma();

    /**
     * @brief Obtém a capacidade total da turma.
     * @return A capacidade total da turma.
     */
    int getCapacidade() const;

    /**
     * @brief Obtém a quantidade de vagas disponíveis na turma.
     * @return A quantidade de vagas disponíveis na turma.
     */
    int getVagas() const;

    /**
     * @brief Define a capacidade total da turma.
     * @param capacidade A capacidade total da turma.
     */
    void setCapacidade(int capacidade);

    /**
     * @brief Define a quantidade de vagas disponíveis na turma.
     * @param vagas A quantidade de vagas disponíveis na turma.
     */
    void setVagas(int vagas);

    /**
     * @brief Aloca a quantidade de alunos especificada pela capacidade da turma.
     *        Cada aluno é representado por um objeto Aluno alocado dinamicamente.
     */
    void alocaAlunos();

    /**
     * @brief Imprime os dados dos alunos da turma.
     */
    void imprimeAlunos() const;

    /**
     * @brief Ordena os alunos da turma com base no campo especificado.
     *        O campo pode ser "matricula", "nome" ou "nota".
     * @param campo O campo pelo qual os alunos devem ser ordenados.
     */
    void ordenaCampo(std::string campo);
};

#endif
