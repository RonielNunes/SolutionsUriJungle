#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1048-AumentoDeSalario.cpp -o exec

using namespace std;

void solver(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int res;
        cin >> res;
        cout << "resposta "<< i + 1<<": "<<res<<endl;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
