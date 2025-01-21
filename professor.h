#include <string>
#include <vector>
#include "pessoa.h"
#include "aluno.h"
using namespace std;
#ifndef PROJETOEDO_PROFESSOR_H
#define PROJETOEDO_PROFESSOR_H

class Professor : public Pessoa {
private:
    string cargo;
    string formacao;
public:
    // Construtor do professor.
    Professor(const string& novoNome = "", int novaIdade = 0, const string& novoCargo = "", const string& novaFormacao = "")
            : Pessoa(novoNome, novaIdade), cargo(novoCargo), formacao(novaFormacao){}

            ~Professor() {
        cout << "Vagabundo de merda.";
    }

    // Pegamos a classe aluno e o aluno referenciado (aluno1, aluno2, ..., alunoN)
    // Passamos a nota como um valor de double, enviando para a classe aluno.
    void darNota(Aluno &aluno, double nota){
        aluno.setNota(nota);
    }

};

#endif //PROJETOEDO_PROFESSOR_H