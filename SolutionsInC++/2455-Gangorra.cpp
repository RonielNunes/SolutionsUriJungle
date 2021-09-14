#include <iostream>
//g++ 2455-Gangorra.cpp -o exec
using namespace std;

void solver(){
    int n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    if(n1*n2 == n3*n4){
        cout << "0" << endl;
    }else if(n1*n2 < n3*n4){
        cout << "1" << endl;
    }else {
        cout << "-1" << endl;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
