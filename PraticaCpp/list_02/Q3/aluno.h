/**
 * @file aluno.h
 * @brief Declaração da classe Aluno.
 */


#ifndef ALUNO_H
#define ALUNO_H

#include <string>

/**
 * @brief Classe Aluno representa um aluno com matrícula, nome e notas.
 */ 

class Aluno {
private:
    int matricula;
    std::string nome;
    float nota1;
    float nota2;
    float nota3;

public:
 /**
     * @brief Construtor da classe Aluno.
     * @param matricula A matrícula do aluno.
     * @param nome O nome do aluno.
     * @param nota1 A primeira nota do aluno.
     * @param nota2 A segunda nota do aluno.
     * @param nota3 A terceira nota do aluno.
     */
    Aluno(int matricula, std::string nome, float nota1, float nota2, float nota3);

    /**
     * @brief Destrutor da classe Aluno.
    */

    ~Aluno();

    // Métodos getters e setters
    int getMatricula() const;
    std::string getNome() const;
    float getNota1() const;
    float getNota2() const;
    float getNota3() const;

    void setMatricula(int matricula);
    void setNome(std::string nome);
    void setNota1(float nota1);
    void setNota2(float nota2);
    void setNota3(float nota3);

    float calculaMedia() const;
};

#endif