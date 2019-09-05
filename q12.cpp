#include <iostream>
#include <fstream>

using namespace std;

int contador = 0;

int contadorPares(int tam, int vetor[]){

    for(int j=0;j<tam;j++){
        if(vetor[j]%2 == 0 && vetor[j] >= 2){
            contador++;
        }
    }
    return contador;
}

int main(){
    int tam;
    int vetor[tam];
    
    cout << "Tamanho do vetor: " << endl;
    cin >> tam;
    
    for(int i=0;i<tam;i++){
        cout << "Digite um valor inteiro: " << endl;
        cin >> vetor[i];
    }
    cout << endl << "Quantidade de pares: " << contadorPares(tam, vetor);
    return 0;
}
