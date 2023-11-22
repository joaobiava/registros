#include <iostream>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

struct Curso {
    Aluno estudante;
};

void aluno1();
void vetorAlunos();
void ponteiroAluno();
void cursoAluno();

int main() {
    aluno1();
    vetorAlunos();
    ponteiroAluno();
    cursoAluno();
}

void aluno1(){
    Aluno aluno1 = {"Joao", 18, 8.5};

    cout << aluno1.nome << endl;
    cout << aluno1.idade << endl;
    cout << aluno1.nota << endl;
    cout << endl;
}

void vetorAlunos(){
    Aluno alunos[3];
    alunos[0] = {"Joao", 18, 8.5};
    alunos[1] = {"Maria", 19, 9.0};
    alunos[2] = {"Pedro", 20, 7.8};

    for (int i = 0; i < 3; ++i) {
        cout << alunos[i].nome << endl;
        cout << alunos[i].idade << endl;
        cout << alunos[i].nota << endl;
        cout << endl;
    }
    cout << endl;
}

void ponteiroAluno() {
    Aluno* ponteiroAluno;

    ponteiroAluno = new Aluno;

    ponteiroAluno->nome = "Carlos";
    ponteiroAluno->idade = 18;
    ponteiroAluno->nota = 7.2;

    cout << "Nome: " << ponteiroAluno->nome << endl;
    cout << "Idade: " << ponteiroAluno->idade << " anos" << endl;
    cout << "Nota: " << ponteiroAluno->nota << endl;

    ponteiroAluno->nota = 8.0;

    cout << "Nome: " << ponteiroAluno->nome << endl;
    cout << "Idade: " << ponteiroAluno->idade << " anos" << endl;
    cout << "Nota: " << ponteiroAluno->nota << endl;
    cout << endl;
}

void cursoAluno(){
    Curso curso;

    curso.estudante.nome = "Maria";
    curso.estudante.idade = 18;
    curso.estudante.nota = 9.5;

    cout << curso.estudante.nome << endl;
    cout << curso.estudante.idade << endl;
    cout << curso.estudante.nota << endl;
}