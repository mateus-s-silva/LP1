/**
 * @file aluno.cpp
 * @brief Implementação de métodos da classe Aluno.
 */


#include "aluno.h"

/**
 * @brief Construtor da classe Aluno.
 * @param matricula A matrícula do aluno.
 * @param nome O nome do aluno.
 * @param nota1 A primeira nota do aluno.
 * @param nota2 A segunda nota do aluno.
 * @param nota3 A terceira nota do aluno.
 */

Aluno::Aluno(int matricula, std::string nome, float nota1, float nota2, float nota3) {
    this->matricula = matricula;
    this->nome = nome;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

/**
 * @brief Destrutor da classe Aluno.
 */

Aluno::~Aluno() {}

/**
 * @brief Obtém a matrícula do aluno.
 * @return A matrícula do aluno.
 */

int Aluno::getMatricula() const {
    return matricula;
}

/**
 * @brief Obtém o nome do aluno.
 * @return O nome do aluno.
 */

std::string Aluno::getNome() const {
    return nome;
}

/**
 * @brief Obtém a primeira nota do aluno.
 * @return A primeira nota do aluno.
 */

float Aluno::getNota1() const {
    return nota1;
}

/**
 * @brief Obtém a segunda nota do aluno.
 * @return A segunda nota do aluno.
 */

float Aluno::getNota2() const {
    return nota2;
}

/**
 * @brief Obtém a terceira nota do aluno.
 * @return A terceira nota do aluno.
 */

float Aluno::getNota3() const {
    return nota3;
}

/**
 * @brief Define a matrícula do aluno.
 * @param matricula A matrícula do aluno.
 */

void Aluno::setMatricula(int matricula) {
    this->matricula = matricula;
}

/**
 * @brief Define o nome do aluno.
 * @param nome O nome do aluno.
 */

void Aluno::setNome(std::string nome) {
    this->nome = nome;
}

/**
 * @brief Define a primeira nota do aluno.
 * @param nota1 A primeira nota do aluno.
 */

void Aluno::setNota1(float nota1) {
    this->nota1 = nota1;
}

/**
 * @brief Define a segunda nota do aluno.
 * @param nota2 A segunda nota do aluno.
 */

void Aluno::setNota2(float nota2) {
    this->nota2 = nota2;
}

/**
 * @brief Define a terceira nota do aluno.
 * @param nota3 A terceira nota do aluno.
 */

void Aluno::setNota3(float nota3) {
    this->nota3 = nota3;
}

/**
 * @brief Calcula a média das notas do aluno.
 * @return A média das notas do aluno.
 */

float Aluno::calculaMedia() const {
    return (nota1 + nota2 + nota3) / 3.0;
}