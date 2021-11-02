#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    // cout << fixed <<setprecision(1)<< endl;
    double n = 2;
    double m = 3;
    for (double i = 0; i < n; i +=0.2)
    {
        for (double j = 1; j < m+1; j++)
        {
            cout << "I="<< i << " J="<< j+i << endl;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
