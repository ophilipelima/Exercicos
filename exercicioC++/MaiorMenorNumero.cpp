/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

double primeiroNumero; 
double segundoNumero;
double terceiroNumero;

void maiorNumero(){
    if(primeiroNumero > segundoNumero && primeiroNumero > terceiroNumero){
        cout << "O maior numero é: " << primeiroNumero;
    }
    else if(segundoNumero > primeiroNumero && segundoNumero > terceiroNumero){
        cout << "O maior numero é: " << segundoNumero;
    }
    else if(terceiroNumero > primeiroNumero && terceiroNumero > segundoNumero){
        cout << "O maior numero é: " << terceiroNumero;
    }
}
void menorNumero(){
    if(primeiroNumero < segundoNumero && primeiroNumero < terceiroNumero){
        cout << " O menor numero é: " << primeiroNumero;
    }
    else if(segundoNumero < primeiroNumero && segundoNumero < terceiroNumero){
        cout << " O menor numero é: " << segundoNumero;
    }
    else if(terceiroNumero < primeiroNumero && terceiroNumero < segundoNumero){
        cout << " O menor numero é: " << terceiroNumero;
    }
}
int main()
{
    cout << "Digite o primeiro numero: ";
    cin >> primeiroNumero;
    
    cout << "Digite o segundo numero: ";
    cin >> segundoNumero;
    
    cout << "Digite o terceiro numero: ";
    cin >> terceiroNumero;
    
    maiorNumero();
    menorNumero();
}