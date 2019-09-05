#include <iostream>

using namespace std;
int soma = 0;

bool soma28(int tam, int vetor[]){
    for(int i = 0; i < tam; i++){
        soma += vetor[i];
    }
    if(soma == 8){
    return 1;
    } 
    else{
    return 0;
    }
}

int main() {
  
    int tam;
    int vetor[tam];

    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
  
    for(int i = 0; i < tam; i++){
        cout << "Digite um valor inteiro: " << endl;
        cin >> vetor[i];
    }

    if(soma28(tam, vetor)){
        cout << endl << "true" << endl;
    }
    else{
        cout << endl << "false" << endl;
    }
    return 0;
}
