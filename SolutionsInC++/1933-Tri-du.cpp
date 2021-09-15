#include <iostream>
#include <list>
// g++ 1933-Tri-du.cpp -o exec
using namespace std;

void solver(){
    list <int> lista;
    list <int> :: iterator it;
    int array[2];
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        int aux;
        cin >> aux;
        lista.push_back(aux);
    }

    lista.sort();
    i = 0;
    for (it = lista.begin(); it != lista.end(); it++)
    {   
        int aux;
        //cout << '\t' << *it << endl;
        aux = *it;
        array[i] = aux;
        i++;
    }

    if(array[0] == array[1]){
        cout << array[0] << endl;
    }else if(array[0] > array[1]){
        cout << array[0] << endl;
    }else if(array[1] > array[0]){
        cout << array[1] << endl;
    }else{    
        cout << "13" << endl;
    }
    
    
    // (1 1 1) ganha de 1 (2 3)
    // (4 2 6) ganha (1 2 4)
    // (1 2) 3 ganha (1 1) 4
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
