#include <iostream>
#include <string>
#include <vector>
#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include "turma.h"
using namespace std;

// Função para dar as notas aos alunos.
void darNotas(Professor &professor, double nota, Aluno &aluno) {
    professor.darNota(aluno, nota);
}

int main() {
    double notaAtividade;
    // Aqui estamos utilizando os construtores padrões de cada classe.
    // Ideia para o futuro: Adicionar iteratividade: cin e cout para que o usuário possa manualmente cadastrar os valores.
    Aluno aluno1("Joao da Silva", 20, "Ciencia da computacao");
    Professor professor1("Chico", 40, "Professor Auxiliar", "Doutor em visão computacional");
    Turma turmaIP("Introducao a programacao", 20);

    cout << "Bem-Vindo a turma de: " << turmaIP.getTurma() << endl;
    cout << "Aluno : " << aluno1.getNome() << ", Portador da matricula " << aluno1.getMatricula() << ", Possui " << aluno1.getIdade()
    << " e esta cursando: " << aluno1.getCurso() << endl;

    // Os valores relacionados a matricula de aluno e alocação de professor devem ser passados como referência
    // Já que no código em si de turma.h, estamos trabalhando com ponteiros para as outras classes.
    turmaIP.setProfessor(&professor1);
    turmaIP.matricularAluno(&aluno1);
    // Caso tentemos matricular o mesmo aluno duas vezes, isso não acontecerá.
    turmaIP.matricularAluno(&aluno1);
    ;

// Função para adicionar a nota do professor
   for (int i = 0; i < 4; i++) {
       cin >> notaAtividade;
        darNotas(professor1, notaAtividade, aluno1);
   }

    // Copiamos o vetor das notas do aluno para um vetor no .cpp para que possamos iterar sobre ele.
    vector<double> notas = aluno1.getNotas();

    for (double nota : notas) {
       cout << nota << " ";
  }
    cout << "Media do aluno: " << aluno1.calculaMedia();


    return 0;
}