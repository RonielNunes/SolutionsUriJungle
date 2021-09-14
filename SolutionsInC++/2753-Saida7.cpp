#include <iostream>
//g++ 2753-Saida7.cpp -o exec

using namespace std;

void solver(){
    for (int i = 0; i < 26; i++)
    {
        int v = 97;
        cout << v+i << " e " << (char)(v+i)<< endl; 
    }    
}


int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
