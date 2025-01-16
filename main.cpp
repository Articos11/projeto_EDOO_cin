#include <iostream>
#include <string>
#include <vector>
#include "pessoa.h"
#include "aluno.h"
using namespace std;


int main() {
    double Nota;
    // O construtor só funciona de maneira "geral" para o código quando está fora de um {}.
    // Caso contrário, o destrutor será imediatamente chamado, destruindo aquela classe.
    Pessoa pessoa1("Joao", 30);
    Aluno aluno1("Pedro", 30, 2504);

    cout << aluno1.getNome() << " tem " << aluno1.getIdade() << " anos, portador da matricula " << aluno1.getMatricula() << endl;

    // Aqui adicionamos as notas.
    for (int i = 0; i < 4; i++) {
        cout << "Adicione a nota " << i + 1 << " do aluno:";
        cin >> Nota;
        aluno1.adicionarNota(Nota);
    }

    vector<double> notas = aluno1.getNotas();
    for (double nota : notas) {
        cout << nota << " ";
    }

    cout << aluno1.calculaMedia();

    return 0;
}
