#include <string>
using namespace std;

#ifndef PROJETOEDO_PESSOA_H
#define PROJETOEDO_PESSOA_H

// A classe pessoa é o que irá ser herdado futuramente pelas classes aluno e professor.
// Ela é bastante simples e possui apenas o necessário para demonstrar os funcionamentos de herança.
// Dentro da classe pessoa não temos muitas características. Apenas um construtor e duas funções get()
// Para retornamos os valores dos nomes e idade, além de um destrutor a fim de liberar memória.

class Pessoa {
private:
    string nome;
    int idade;
public:
    Pessoa(const string& novoNome = "", int novaIdade = 0)
        : nome(novoNome), idade(novaIdade) {}

        //
        string getNome() const {return nome;}
        int getIdade() const {return idade;}



};

#endif //PROJETOEDO_PESSOA_H
