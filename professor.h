#include <string>
#include "aluno.h"
using namespace std;

#ifndef PROJETOEDO_PROFESSOR_H
#define PROJETOEDO_PROFESSOR_H

class Professor{
private:
    string nomeP;
public:
    // construtor do professor esqueci tbm
    Professor(const string& novoNomeP = "") : nomeP(novoNomeP){}

    void darNota(Aluno &aluno,double nota){
        aluno.setNota(nota);
    }
};

#endif //PROJETOEDO_PROFESSOR_H
