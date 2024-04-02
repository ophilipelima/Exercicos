#include <iostream>
#include <string>
using namespace std;

struct Funcionario {
    string nome;
    int idade;
    char sexo;
    string cpf;
    string dataNascimento;
    int codigoSetor;
    string cargo;
    float salario;
};
int main()
{
    Funcionario funcionario;

    cout << "Digite o nome do funcionario: ";
    getline(cin, funcionario.nome);

    cout << "Digite a idade do funcionario: ";
    cin >> funcionario.idade;

    cout << "Digite o sexo do funcionario (M/F): ";
    cin >> funcionario.sexo;

    cout << "Digite o CPF do funcionario: ";
    cin >> funcionario.cpf;

    cout << "Digite a data de nascimento do funcionario: ";
    cin.ignore();
    getline(cin, funcionario.dataNascimento);

    cout << "Digite o codigo do setor onde trabalha (0-99): ";
    cin >> funcionario.codigoSetor;

    cout << "Digite o cargo que ocupa: ";
    cin >> funcionario.cargo;
    
    cout << "Digite o salario do funcionario: ";
    cin >> funcionario.salario;

    cout << "\nFuncionario:\n";
    cout << "Nome: " << funcionario.nome << endl;
    cout << "Idade: " << funcionario.idade << endl;
    cout << "Sexo: " << funcionario.sexo << endl;
    cout << "CPF: " << funcionario.cpf << endl;
    cout << "Data de Nascimento: " << funcionario.dataNascimento << endl;
    cout << "Codigo do Setor: " << funcionario.codigoSetor << endl;
    cout << "Cargo: " << funcionario.cargo << endl;
    cout << "Salario: " << funcionario.salario << endl;
    
    return 0;
}