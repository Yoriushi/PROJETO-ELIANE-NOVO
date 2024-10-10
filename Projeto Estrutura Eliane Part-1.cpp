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