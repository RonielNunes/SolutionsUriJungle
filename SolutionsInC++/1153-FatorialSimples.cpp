#include <iostream>
//g++ <come arquivo>.c -o <nome do arquivo que vai gerar>
using namespace std;

void solver(){
    int fat =1;
    int n;
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        fat *= i;
    }
    cout << fat;
}

int main(){
    int n;
    solver();
    return 0;
}