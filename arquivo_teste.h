#include <iostream>
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


#ifndef PROFESSOR_H
#define PROFESSOR_H
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
#endif 

// JÁ FUNCIONA SE EU CHAMAR O ARQUIVO DE .CPP MAS N TÔ CONSEGUINDO FAZER O #INCLUDE ALUNO.H E PROFESSOR.H NO ARQUIVO CPP AINDA  
/*
int main() {
    Aluno aluno1("João", 15, "1A"); 
    Professor professor1("Maria");

    professor1.darNota(aluno1, 9.5);

    cout << "A nota do aluno " << aluno1.getNome() << " e: " << aluno1.getNota() << endl;

    return 0;
}   
*/

