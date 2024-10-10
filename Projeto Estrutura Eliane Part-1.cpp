#include <iostream>
#include <string>
#include <vector>

struct Professor {
    std::string nome;
    std::string departamento;
};

struct Aluno {
    std::string nome;
    std::string departamento;
};

struct TC {
    std::string aluno;
    std::string orientador;
};

struct MembroComissao {
    std::string nome;
    std::string cpf;
};

struct Resultado {
    std::string tc;
    int votos;
};

std::vector<Professor> professores = {
    {"João Silva", "Matemática"},
    {"Maria Souza", "Física"}
};

std::vector<Aluno> alunos = {
    {"Ana Lima", "Matemática"},
    {"Carlos Pereira", "Física"}
};

std::vector<TC> tcs = {
    {"Ana Lima", "João Silva"},
    {"Carlos Pereira", "Maria Souza"}
};

std::vector<MembroComissao> membros = {
    {"Laura Costa", "12345678901"},
    {"Pedro Santos", "98765432100"}
};

std::vector<Resultado> votos;
