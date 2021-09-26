#include <iostream>

using namespace std;

void solver(){
    int n, soma = 0;
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        int c, l;
        cin  >> c >> l;
        if (c > l)
        {
            soma +=l;
        }
    }
    cout << soma << endl;
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
