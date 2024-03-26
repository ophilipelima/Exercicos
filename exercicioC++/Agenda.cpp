#include <iostream>
#include <string>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    string descricao;
    Data data;
};

int main() {
     int tamanho = 5;
    Compromisso compromissos[tamanho];

    cout << "Digite os compromissos:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Compromisso " << i + 1 << ":\n";
        cout << "Descricao: ";
        getline(cin, compromissos[i].descricao);

        cout << "Data:\n";
        cout << "Dia: ";
        cin >> compromissos[i].data.dia;
        cout << "Mes: ";
        cin >> compromissos[i].data.mes;
        cout << "Ano: ";
        cin >> compromissos[i].data.ano;
    }

    int mes, ano;
    do {
        cout << "\nDigite o mes (ou 0 para sair): ";
        cin >> mes;
        if (mes == 0)
            break;
        cout << "Digite o ano: ";
        cin >> ano;

        cout << "\nCompromissos para o mes " << mes << " do ano " << ano << ":\n";
        bool encontrou = false;
        for (int i = 0; i < tamanho; ++i) {
            if (compromissos[i].data.mes == mes && compromissos[i].data.ano == ano) {
                cout << "Descricao: " << compromissos[i].descricao << endl;
                cout << "Data: " << compromissos[i].data.dia << "/" << compromissos[i].data.mes << "/" << compromissos[i].data.ano << endl;
                encontrou = true;
            }
        }
        if (!encontrou)
            cout << "Nenhum compromisso encontrado no mês " << mes << " do ano " << ano << endl;
    } while (mes != 0);

    return 0;
}