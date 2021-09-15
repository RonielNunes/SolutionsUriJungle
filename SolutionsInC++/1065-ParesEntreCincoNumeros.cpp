#include <iostream>
//g++ 1065-ParesEntreCincoNumeros.cpp -o exec
using namespace std;

void solver(){
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        int aux;
        cin >> aux;
        if(aux % 2 == 0){
            count++;
        }
    }
    cout << count <<" valores pares"<< endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
