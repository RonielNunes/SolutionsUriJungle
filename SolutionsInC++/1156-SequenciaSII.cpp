#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

void solver(){
    //S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
    // n = 1 + 2 + 2
    float s = 0;
    for (int i = 0; i < 20; i++)
    {
        s += (2*i + 1)/pow(2,i);
       //cout << (2*i + 1) << " /" << pow(2,i) << endl;
    }
    cout << fixed << setprecision(2) << s << endl;

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
