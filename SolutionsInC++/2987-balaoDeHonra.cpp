#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1048-AumentoDeSalario.cpp -o exec

using namespace std;

void solver(){
    char n; 
    int ASCII = 64;

    cin >> n;
    int result = ((int)n) - ASCII;
    cout << result << endl;

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
