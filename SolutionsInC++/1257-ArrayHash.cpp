#include <iostream>

using namespace std;

void solver(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) //quantidade de testes
    {
        int p;
        int valor = 0;
        cin >> p; // quantidade de palavras
        for (int j = 0; j < p; j++)
        {
            string line;
            cin >> line;
            for (int w = 0; w < line.size(); w++)
            {
                //Valor = (Posição no alfabeto) + (Elemento de entrada) + (Posição do elemento)
                valor += ((int(line[w]) - 65) + (j) + (w));
                // cout << (int(line[w]) - 65) << " " << j << " " << w << endl;
                // cout << valor << endl;
            }            
        }
        cout << valor << endl; 
    }
 
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
