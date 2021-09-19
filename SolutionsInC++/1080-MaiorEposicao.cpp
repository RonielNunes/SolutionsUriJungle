#include <iostream>

using namespace std;

void solver(){
    int n, m, p;

    cin >> n;
    m = n;
    p = 1;
    
    for (int i = 2; i < 101; i++)
    {
        cin >> n;
        if(n > m){
            m = n;
            p = i;
        }
    }
    cout << m <<endl <<  p << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
