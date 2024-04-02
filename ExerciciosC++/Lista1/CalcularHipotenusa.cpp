#include <iostream>
using namespace std;

double valorHipotenusa(double cateto1, double cateto2){
    double hipotenusa = (cateto1 * cateto1) + (cateto2 * cateto2);
    return hipotenusa;
}

int main()
{
    double cateto1;
    double cateto2;
    
    cout << "Digite o valor do menor lado do triângulo: ";
    cin >> cateto1;
    
    cout << "Digite o segundo menor valor de um lado do triângulo: ";
    cin >> cateto1;
    
    cout << valorHipotenusa(cateto1,cateto2);

    return 0;
}