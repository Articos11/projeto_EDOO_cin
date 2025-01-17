#include <iostream>
#include <string>
#include <vector>
#include "pessoa.h"
#include "aluno.h"
using namespace std;


int main() {
    // Criando um objeto da classe Aluno
    Aluno aluno1("Joao da Silva", 20);

    // Imprimindo os dados do aluno
    cout << "Matricula: " << aluno1.getMatricula() << endl;
    cout << "Nome: " << aluno1.getNome() << endl;
    cout << "Idade: " << aluno1.getIdade() << endl;
    return 0;
}
