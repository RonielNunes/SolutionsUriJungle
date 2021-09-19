#include <iostream>
#include <math.h>

using namespace std;

void solver(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << (i+1) << " " << pow((i+1), 2) << " " << pow((i+1), 3) << endl;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


