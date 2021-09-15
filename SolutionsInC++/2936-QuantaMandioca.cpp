#include <iostream>
//g++ 2936-QuantaMandioca.cpp -o exec
using namespace std;

void solver(){
    int n1, n2, n3, n4, n5;
    cin >> n1>> n2>> n3>> n4>> n5;
    cout <<225+ n1*300 + n2*1500 + n3*600+ n4*1000+n5*150 << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
