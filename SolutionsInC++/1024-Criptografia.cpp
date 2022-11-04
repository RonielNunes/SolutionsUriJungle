#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1024-Criptografia.cpp -o exec

using namespace std;

void solver(){
    int n = 1;
    cin >> n;
    cin.get();

    for(int i = 0; i < n; i++){

        string text; 
        getline(cin,text);
        //letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita
        string output = text;
        for(int j = 0; j < text.length(); j++){
            if ( ((int)text[j] >= 65 && (int)text[j] <= 90) || ((int)text[j] >= 97 && (int)text[j] <= 122) ){
                output[j] = (char)((int)text[j] + 3);
            }else{
                output[j] = text[j];
            }
        }

        //Na segunda passada, a linha deverá ser invertida
        reverse(output.begin(),output.end());
        
        //Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII.
        
        for(int j = text.length()/2; j < text.length(); j++){
            output[j] = (char)((int)output[j] - 1);
        }
        cout << output << endl;

    }
    // cout << fixed << setprecision(2) <<endl;

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
