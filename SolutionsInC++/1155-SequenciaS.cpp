#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    double s;
    s = 1;
    for (double i = 1; i < 100; i++)
    {
        s += 1/(i+1);
    }
    cout << fixed << setprecision(2) << s << endl;
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
