#include <string>
#include "aluno.h"
#include "professor.h"

#ifndef PROJETOEDO_TURMA_H
#define PROJETOEDO_TURMA_H

class Turma {
private:
    int qtdVagas;
    int qtdMatriculados;
    string disciplina;
public:
    Turma(const string& novaDisciplina = "", int novasVagas = 20, int novosMatriculados = 0)
    : disciplina(novaDisciplina), qtdVagas(novasVagas), qtdMatriculados(novosMatriculados){}

// Turma vai ter que herdar aluno e professor, além de ser o banco de dados do projeto, tendo UM professor e X alunos.
// Turma vai ter que contar com um destrutor no main.cpp
// Vetor de alunos (?), média personalizada pra cada turma? Odeio minha vida. 
};

#endif //PROJETOEDO_TURMA_H
