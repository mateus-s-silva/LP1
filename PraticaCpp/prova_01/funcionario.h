#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario {
    private:
        std::string nome;
        double salario;

    public:

        Funcionario();
        Funcionario(std::string nome, double salario);

        std::string getNome();
        double getSalario();

        void aumentarSalario(int percAumento);
        Funcionario& operator++();
        friend std::ostream& operator<<(std::ostream& os, Funcionario& f);
};

#endif // FUNCIONARIO_H
