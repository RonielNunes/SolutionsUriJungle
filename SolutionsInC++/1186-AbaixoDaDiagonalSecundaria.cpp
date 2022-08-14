#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    int M = 12;
    char caractere;
    cin >> caractere; // S OU M
    int i, j;
    int total = 0;
    float var = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            float valor = 0;
            cin >> valor;
            if(i + j >= M){
 
                var += valor;
                total +=1;
            }
        }
    }
    if (caractere == 'S'){
        cout << fixed <<setprecision(1) << var << endl;
    }else{
        cout << fixed << setprecision(1) << var/total << endl; 
    }
}

int main(int argc, char const *argv[]){
    solver();
    return 0;
}