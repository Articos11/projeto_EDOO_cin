#include <string>
#include <vector>
#include "aluno.h"
#include "professor.h"
#include <set>

#ifndef PROJETOEDO_TURMA_H
#define PROJETOEDO_TURMA_H

class Turma {
private:
    string nomeDisciplina;
    int capacidade;
    int matriculados;
    // Aqui trabalhamos com ponteiros.
    // O vetor <aluno*> está apontando para a classe aluno, indicando que está recebendo os valores de lá.
    // O ponteiro que aponta para a classe professor também está pegando os valores de lá.
    vector<Aluno*> alunos;
    Professor* professor;
    set<int> matriculas;
public:
    Turma(const string& novaDisciplina, int novaCapacidade)
            : nomeDisciplina(novaDisciplina), capacidade(novaCapacidade), matriculados(0){}

    // Destrutor
    ~Turma() {
        cout << "Turma liberada! Boas férias.";
    }

    void matricularAluno(Aluno* aluno){
        // Ponteiros é loucura, mas vou tentar explicar o que tá acontecendo aqui. Com a ajuda de um set, garantimos que
        // As matriculas de cada aluno serão únicas, isso foi feito em aluno.h
        // matriculas.find() é utilizado para procurar dentro do set o seguinte dado:
        // aluno->getMatricula(), ou seja, estamos procurando o valor da matricula do aluno, caso não ache nada, ele retornará um
        // resultado vazio, ou seja, o .end(). Não sei se deu pra explicar, mas tá ai.
        if (matriculados < capacidade && matriculas.find(aluno->getMatricula()) == matriculas.end()) {  // matriculas.end certifica de que percorreu todo o meu set e não encontrou essa matricula
            alunos.push_back(aluno);
            matriculas.insert(aluno->getMatricula());
            matriculados++;
            cout << "Aluno matriculado com sucesso." << endl;
        } else {
            cout << "O Aluno ja esta matriculado ou esta turma ja esta cheia" << endl;
        }
    }

    void setProfessor(Professor* novoProfessor) {
        professor = novoProfessor;
        cout << "O professor: " << professor->getNome() << "Esta responsavel pela disciplina de " << nomeDisciplina << endl;
    }

    string getTurma() const {return nomeDisciplina;}
    int getCapacidade() const {return capacidade;}
    int getMatriculados() const{return matriculados;}
    // Não sei por que isso aqui não funciona -> string getProfessor() const {return professor;}
};



#endif //PROJETOEDO_TURMA_H