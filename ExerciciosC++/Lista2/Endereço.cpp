#include <iostream>
using namespace std;

int main()
{
    
    float array[10];

    for (int i = 0; i < 10; i++) {
        array[i] = i * 2;
    }
    
    // Imprimir o endereço de cada posição do array
    cout << "Endereços das posições do array:" << std::endl;
    for (int i = 0; i < 10; i++) {
        cout << "Posição " << i << ": " << &array[i] << std::endl;
    }

    return 0;
}