#include <iostream>
#include <fstream>

using namespace std;

string hello(string nome){
    string name;
    cout << "Olá " << nome << endl;
    return name;
}

int main(){
    string nome;
    cout << "Digite seu nome:" << endl;
    cin >> nome;
    nome = hello(nome);
    
    return 0;
}
