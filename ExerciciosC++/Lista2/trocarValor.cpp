#include <iostream>
using namespace std;

void trocarValores(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int valor1, valor2;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;
    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Valores antes da troca: " << std::endl;
    cout << "Valor 1: " << valor1 << std::endl;
    cout << "Valor 2: " << valor2 << std::endl;

 
    trocarValores(valor1, valor2);

    cout << "\nValores depois da troca: " << std::endl;
    cout << "Valor 1: " << valor1 << std::endl;
    cout << "Valor 2: " << valor2 << std::endl;

    return 0;
}