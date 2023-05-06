#include "turma.h"
#include <iostream>

/**
 * @brief Função principal.
 * @return O código de saída do programa.
 */
int main() {
    Turma turma(5);
    turma.alocaAlunos();

    std::cout << "Antes de ordenar:" << std::endl;
    turma.imprimeAlunos();

    std::cout << "Ordenando por matricula:" << std::endl;
    turma.ordenaCampo("matricula");
    turma.imprimeAlunos();

    std::cout << "Ordenando por nome:" << std::endl;
    turma.ordenaCampo("nome");
    turma.imprimeAlunos();

    std::cout << "Ordenando por nota:" << std::endl;
    turma.ordenaCampo("nota");
    turma.imprimeAlunos();

    return 0;
}
