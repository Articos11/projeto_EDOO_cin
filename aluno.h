#include <string>
#include "pessoa.h"
using namespace std;

#ifndef PROJETOEDO_ALUNO_H
#define PROJETOEDO_ALUNO_H

// Pra matriculas e pra notas, vai precisar de um setMatricula
class Aluno : public Pessoa {
private:
    int matricula;
    double notas;

public:
    Aluno(const string& novoNome = "", int novaIdade = 0 , int novaMatricula = 0000, double novasNotas = 0.0)
    : Pessoa(novoNome, novaIdade), matricula(novaMatricula), notas(novasNotas) {}



};

#endif //PROJETOEDO_ALUNO_H
