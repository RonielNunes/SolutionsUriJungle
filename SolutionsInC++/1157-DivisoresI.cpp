#include <iostream>
//g++ 1157-DivisoresI.cpp -o exec
using namespace std;

void solver();

int main(int argc, char const *argv[])
{
    solver();    
    return 0;
}
void solver(){
    int n;

    cin >> n;

    for (int i = 1; i < n+1; i++)
    {
        if(n%i == 0){
            cout << i << endl;
        }
    }
    
}
