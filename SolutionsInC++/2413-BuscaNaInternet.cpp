#include <iostream>
//g++ 2413-BuscaNaInternet.cpp -o exec
using namespace std;

void solver(){
    //o numero de pessoas que clina no segundo link é o dobre de pessoa que clina no terceiro
    //s = 2t
    //o número de pessoas que clica no segundo link é a metade que clica no primeiro
    //s = 1/2p
    //2t = 1/2p
    // p = 4t
    int t;
    cin >> t;
    cout << 4*t << endl;

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
