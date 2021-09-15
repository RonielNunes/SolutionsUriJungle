#include <iostream>
#include <list>
// g++ 1930-Tomadas.cpp -o exec
using namespace std;
void solver(){
    list<int> lista;
    
    int s = 0;

    for (int i = 0; i < 4; i++)
    {
        int aux;
        cin >> aux;
        lista.push_front(aux);
    }
    lista.sort();
    
    for (int i = 0; i < 4; i++)
    {
        int aux = lista.front();
        if(i!=3){
            aux--;
            s+=aux;
        }else{
            s+=aux;
        }
        lista.pop_front();
    }
    cout << s << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
