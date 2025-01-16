#include <iostream>
#include <string>
#include "pessoa.h"
#include "aluno.h"
using namespace std;


int main() {

    // O construtor só funciona de maneira "geral" para o código quando está fora de um {}.
    // Caso contrário, o destrutor será imediatamente chamado, destruindo aquela classe.
    Pessoa pessoa1("Joao", 30);
    Aluno aluno1("Pedro", 30, 2504, 9.0);

    cout << aluno1.getNome() << " tem " << aluno1.getIdade() << "anos, portador da matricula ";



    return 0;
}
