#include <string>
#include <vector>
#include "pessoa.h"
using namespace std;

#ifndef PROJETOEDO_ALUNO_H
#define PROJETOEDO_ALUNO_H


class Aluno : public Pessoa {
private:
    int matricula;
    vector<double> notas;
public:
    Aluno(const string& novoNome = "", int novaIdade = 0 , int novaMatricula = 0000)
    : Pessoa(novoNome, novaIdade), matricula(novaMatricula) {}

    int setMatricula(int novaMatricula) {
        if (novaMatricula > 0) {
            matricula = novaMatricula;
        } else {
            cout << "Essa matrícula é inválida." << endl;
        }
    }

    int getMatricula() const {return matricula;}

    vector<double> getNotas() const {return notas;}

    // Adicionamos um método para que o professor possa adicionar as notas do aluno.
    void adicionarNota(double novaNota) {
        notas.push_back(novaNota);
    }
    // Calculo da média do aluno.
    double calculaMedia() {
        if (notas.size() < 4) {
            cout << "Ainda faltam atividades para serem realizadas pelo aluno." << endl;
            return 0.0;
        }
        double soma = 0.0;
        for (int i = 0; i < 4; i++) {
            soma += notas[i];
        }
        return (soma / 4);
    }

};

#endif //PROJETOEDO_ALUNO_H
