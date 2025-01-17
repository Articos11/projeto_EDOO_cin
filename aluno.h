#include <string>
#include <vector>
#include "pessoa.h"
#include <time.h>
#include <stdlib.h>
#include <set>
using namespace std;
#ifndef PROJETOEDO_ALUNO_H
#define PROJETOEDO_ALUNO_H

long long sec;


class Aluno : public Pessoa {
private:
    string curso;
    int matricula;
    vector<double> notas;
    static set<int> matriculasGeradas; // set vai garantir que os elementos armazenados sejam únicos. Utilizando vector eles podem se repetir.
public:
    Aluno(const string& novoNome = "", int novaIdade = 0, const string& novoCurso = "")
            : Pessoa(novoNome, novaIdade), curso(novoCurso) {
        setMatricula();
    }

    // Gera uma matricula aleatoria para cada aluno no momento que ele e cadastrado.
    void setMatricula(){
        time(&sec);   // Gerar tempo "aleatório" para não repetir a mesma semente
        srand((unsigned) sec); // Inicializa o gerador de números aleatórios  com uma semente diferente no rand
        int novaMatricula;
        do{
            novaMatricula = rand() % 900000 + 100000; //rand() %900000 vai garantir que o número esteja entre 0 e 899999 e quando acrescenta 100000 vai garantir os 6 dígitos
        } while (matriculasGeradas.count(novaMatricula) > 0); //vai continuar percorrendo até a nova matricula ser inédita
        matriculasGeradas.insert(novaMatricula);
        matricula = novaMatricula;
    }

    // Recebe a nota dada pelo professor. Caso o aluno tenha mais que 4 notas, a ultima nota sera descartada.
    void setNota(double novaNota) {
        if (notas.size() < 4) {
            notas.push_back(novaNota);
        } else {
            cout << "O aluno ja possui todas as notas possiveis para a disciplina.";
        }
    }

    // Calculo da média do aluno.
    double calculaMedia() {
        if (notas.size() < 4) {
            cout << "Ainda faltam atividades para serem realizadas pelo aluno." << endl;
            return 0.0;
        }else{
            double soma = 0.0;
            for (int i = 0; i < 4; i++) {
                soma += notas[i];
            }
            return (soma / 4);
        }
    }

    int getMatricula() const {return matricula;}
    string getCurso() const {return curso;}
    vector<double> getNotas() const {return notas;}
};
set<int> Aluno::matriculasGeradas; //Ele serve como um registro de todas as matrículas já atribuídas a alunos, garantindo que cada aluno tenha uma matrícula única.
#endif //PROJETOEDO_ALUNO_H