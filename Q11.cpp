#include <iostream>

using namespace std;

void quadrado(int &valor){

  valor *= valor;
 
}

int main(){
  
    int numero;
    cin >> numero;
    quadrado(numero);
    cout << numero << endl;
    
    return 0;
}
