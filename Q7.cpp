#include <iostream>
#include <fstream>

using namespace std;
float somaDeFloats (float a, float b){
    float res =0;
    if ( a != b){
        res = a+b;
    } else {
        res = (a+b)*2;
    }
    return res;
}

int main(){
    float a,b;
     float res;
     cout << "digite o valor de a e b\n";
     cin >> a >> b;
     res = somaDeFloats(a,b);
     cout << "a soma entre eles eh "<< res;
    
    return 0;
}
