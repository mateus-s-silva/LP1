#include "funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(std::string nome, double salario) {
    this->nome = nome;
    this->salario = salario;
}

std::string Funcionario::getNome() {
    return nome;
}

double Funcionario::getSalario() {
    return salario;
}

void Funcionario::aumentarSalario(int percAumento) {
    double aumento = salario * (double)(percAumento/100.0);
    salario += aumento;
}

Funcionario& Funcionario::operator++() {
    salario += salario * 0.1; 
    return *this; 
}

std::ostream& operator<<(std::ostream& os, Funcionario& f) {
    os << "Nome: " << f.nome << "\nSalario: R$" << f.salario;
    return os;
}
