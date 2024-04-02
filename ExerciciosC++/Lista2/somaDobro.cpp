#include <iostream>
using namespace std;

int somaDobro(int &a, int &b) {
    a *= 2;
    b *= 2;
    return a + b;
}

int main()
{
    int valorA, valorB;

    cout << "Digite o valor inteiro para A: ";
    cin >> valorA;
    cout << "Digite o valor inteiro para B: ";
    cin >> valorB;

    // Chamar a função para calcular a soma do dobro e atualizar os valores originais
    int resultado = somaDobro(valorA, valorB);

    cout << "A soma do dobro de A e B é: " << resultado << std::endl;
    cout << "Novo valor de A: " << valorA << std::endl;
    cout << "Novo valor de B: " << valorB << std::endl;

    return 0;
}