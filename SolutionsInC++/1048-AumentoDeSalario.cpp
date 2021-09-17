#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1048-AumentoDeSalario.cpp -o exec

using namespace std;

void solver(){
    float s;
    float ns, rg,p;

    cin >> s;
    if(s >= 0 && s <= 400){
        p = 15; 
    }else if(s >= 400.01 && s <= 800){
        p = 12;
    }else if(s >= 800.01 && s <= 1200){
        p = 10;
    }else if(s >= 1200.01 && s <= 2000){
        p = 7;
    }else if(s >2000){
        p = 4;
    }
    ns = s + s*(p/100);
    rg = ns - s;
    
    cout << "Novo salario: " << fixed << setprecision(2) << ns << endl << "Reajuste ganho: "<<rg<< endl;
    cout << "Em percentual: "<<(int)p <<" %" << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


