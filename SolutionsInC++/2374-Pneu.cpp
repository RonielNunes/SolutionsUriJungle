#include <iostream>
//g++ 2374-Pneu.cpp -o exec
using namespace std;

void solver();

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}

void solver(){
    int n,m;

    cin >> n;
    cin >> m;

    //|variável| = `if`(condição) ? <valor1> : <valor2>;
    (n >= m)? cout << n-m << endl : cout <<"-"<<(m-n) << endl;
}