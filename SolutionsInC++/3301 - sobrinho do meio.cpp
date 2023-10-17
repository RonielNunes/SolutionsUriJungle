#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1048-AumentoDeSalario.cpp -o exec

using namespace std;

void solver(){
    unsigned short int h, z, l;
    cin >> h >> z >> l;

    if ((z > h && h > l) || (z < h && h < l))
        cout << "huguinho"<<endl;
    else if ((h > z && z > l) || (h < z && z < l))
        cout << "zezinho"<<endl;
    else
        cout << "luisinho"<<endl;
}

int main(int argc, char const *argv[]){
    solver();
    return 0;
}
