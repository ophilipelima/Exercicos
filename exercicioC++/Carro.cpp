#include <iostream>
#include <string>
using namespace std;

struct Carro {
    string marca;
    int ano;
    double preco;
};

int main() {
    const int numCarros = 5;
    Carro carros[numCarros];

    for (int i = 0; i < numCarros; ++i) {
        cout << "Carro " << i + 1 << ":\n";
        cout << "Marca: ";
        cin >> carros[i].marca;
        cout << "Ano: ";
        cin >> carros[i].ano;
        cout << "Preço: ";
        cin >> carros[i].preco;
    }

    double p;
     do {
        cout << "\nDigite um valor p (ou 0 para sair): ";
        cin >> p;

        if (p != 0) {
            cout << "\nCarros com preço menor que " << p << ":\n";
            for (int i = 0; i < numCarros; ++i) {
                if (carros[i].preco < p) {
                    cout << "Marca: " << carros[i].marca << "\n";
                    cout << "Ano: " << carros[i].ano << "\n";
                    cout << "Preço: " << carros[i].preco << "\n\n";
                }
            }
        }
    } while (p != 0);


    return 0;
}

