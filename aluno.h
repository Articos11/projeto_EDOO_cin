#include <string>
using namespace std;


#ifndef ALUNO_H
#define ALUNO_H

class Aluno {
private:
    string nome;
    int idade;
    double nota;
    string turma;
public:
    // esqueci do construtorrr aaaa
    Aluno(const string& novoNome = "", int novaIdade = 0,const string& novaTurma = "")
            :nome(novoNome), idade(novaIdade), turma(novaTurma){}


    void setNome(const string &novoNome){
        nome = novoNome;
    }
    string getNome()const{
        return nome;
    }

    void setIdade(const int &novaIdade){
        idade = novaIdade;
    }
    int getIdade()const{
        return idade;
    }

    void setTurma(const string &novaTurma){
        turma = novaTurma;
    }
    string getTurma()const{
        return turma;
    }

    void setNota(double &novaNota){
        nota = novaNota;
    }
    double getNota()const{
        return nota;
    }
};
#endif
