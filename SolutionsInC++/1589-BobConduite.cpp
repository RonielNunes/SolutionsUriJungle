#include <iostream>
//g++ 1589-BobConduite.cpp -o exec

using namespace std;

void solver(){
    int t,r1, r2;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> r1 >> r2;
        cout << r1+ r2 << endl;
    }
}


int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
