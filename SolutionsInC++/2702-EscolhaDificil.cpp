#include <iostream>
#include <list>
using namespace std;

void solver();

int main(int args, char *argvs[]){
    solver();    
    return 0;
}

void solver(){
    list<int> lista1;
    list<int> lista2;
    int count = 0;

    for(int i = 0; i < 3; i++){
        int value;
        cin >> value;
        cin.get();
        lista1.push_front(value);
    }

    for(int i = 0; i < 3; i++){
        int value;
        cin >> value;
        cin.get();
        lista2.push_front(value);
    }
    
    int tam = lista1.size();
    for(int i = 0; i< tam; i++){
        int n1 = lista1.front();
        int n2 = lista2.front();
        if(n1 < n2){
            count += n2-n1;
        }
        lista1.pop_front();
        lista2.pop_front();
    }
    cout << count << endl;
}