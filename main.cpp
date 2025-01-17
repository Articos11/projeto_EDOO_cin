#include <iostream>
#include <string>
#include <vector>
#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
using namespace std;

// Função para dar as notas aos alunos.
void darNotas(Professor &professor, double nota, Aluno &aluno) {
    professor.darNota(aluno, nota);
}

int main() {
    double notaAtividade;
    // Criando um objeto da classe Aluno
    Aluno aluno1("Joao da Silva", 20, "Ciencia da computacao");
    Professor professor1("Chico", 40, "Professor Auxiliar", "Doutor em visão computacional");

    // Imprimindo os dados do aluno
    cout << "Matricula: " << aluno1.getMatricula() << endl;
    cout << "Curso: " << aluno1.getCurso() << endl;
    cout << "Nome: " << aluno1.getNome() << endl;
    cout << "Idade: " << aluno1.getIdade() << endl;


    for (int i = 0; i < 4; i++) {
        cin >> notaAtividade;
        darNotas(professor1, notaAtividade, aluno1);
    }

    // Depois temos que jogar isso numa função pra "limpar" o código.
    vector<double> notas = aluno1.getNotas();

    for (double nota : notas) {
        cout << nota << " ";
    }
    cout << "Media do aluno: " << aluno1.calculaMedia();

    return 0;
}