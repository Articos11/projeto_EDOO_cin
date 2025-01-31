#include "aluno.h" 
#include "professor.h" 
#include "turma.h" 
#include <iostream>
#include <vector>



#ifndef PROJETOEDO_BANCODEDADOS_H
#define PROJETOEDO_BANCODEDADOS_H 



class BancoDeDados {
private:
    std::vector<Turma*> turmas;
    static BancoDeDados* instancia; // Ponteiro para a única instância

    // Construtor privado para evitar a criação de objetos diretamente
    BancoDeDados() {}

public:
    // Método estático para obter a instância única
    static BancoDeDados* obterInstancia() {
        if (instancia == nullptr) {
            instancia = new BancoDeDados();
        }
        return instancia;
    }

    // Destrutor
    ~BancoDeDados() {
        for (Turma* turma : turmas) {
            delete turma;
        }
    }

    // Adiciona uma turma ao banco de dados
    void adicionarTurma(Turma* turma) {
        turmas.push_back(turma);
    }

    // Lista as informações de todas as turmas
    void listarTurmas() const {
        for (const Turma* turma : turmas) {
            std::cout << "Disciplina: " << turma->getTurma() << std::endl;

            // Acessa o professor da turma (se existir)
            Professor* professor = professor->getNome(); // Adapte conforme a implementação da classe Turma
            if (professor != nullptr) {
                std::cout << "Professor: " << professor->getNome() << std::endl;
            } else {
                std::cout << "Professor: Não atribuído" << std::endl;
            }

            std::cout << "Alunos:" << std::endl;
            for (Aluno* aluno : aluno->getNome()) { // Adapte conforme a implementação da classe Turma
                std::cout << "- " << aluno->getNome() << std::endl;
            }

            std::cout << std::endl;
        }
    }
};
























#endif