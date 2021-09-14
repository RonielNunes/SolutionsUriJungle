#include <iostream>
#include <math.h>
//g++ 2232-TrianguloDePascal.cpp -o exec
using namespace std;

void solver(){
    int t; //Número de casos de testes
    int n; //Números de linhas do triângulo de pascal
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int result = 0;
        for (int j = 0; j < n; j++)
        {
            result +=pow(2,j);
        }
        cout << result << endl;
        
        
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
