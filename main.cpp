#include <iostream>
#include <string>
#include "professor.h"
#include "aluno.h"
using namespace std;


int main() {
    Aluno aluno1("Joao", 15, "1A");
    Professor professor1("Maria");

    professor1.darNota(aluno1, 9.5);

    cout << "A nota do aluno " << aluno1.getNome() << " e: " << aluno1.getNota() << endl;

    return 0;
}
