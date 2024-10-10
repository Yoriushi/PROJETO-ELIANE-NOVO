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
void contabilizarVotos(const std::string& tc) {
    for (auto& resultado : votos) {
        if (resultado.tc == tc) {
            resultado.votos++;
            return;
        }
    }
    votos.push_back({tc, 1});
}

void gerarResultado() {
    std::cout << "Resultados da votação:\n";
    for (const auto& resultado : votos) {
        std::cout << resultado.tc << ": " << resultado.votos << " votos" << std::endl;
    }
}

void mostrarMenu1() {
    std::cout << "\nMenu Principal:\n";
    std::cout << "1. Iniciar nova votação\n";
    std::cout << "2. Finalizar votação\n";
    std::cout << "3. Continuar votação\n";
    std::cout << "4. Encerrar programa\n";
}

void mostrarMenu2() {
    std::cout << "Opções de votação:\n";
    for (const auto& tc : tcs) {
        std::cout << "Votar em: " << tc.aluno << " (Orientador: " << tc.orientador << ")\n";
    }
}
