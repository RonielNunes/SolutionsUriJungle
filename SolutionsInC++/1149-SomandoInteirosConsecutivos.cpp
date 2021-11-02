#include <iostream>

using namespace std;

void solver(){
    int a, n, result = 0;
    cin >> a;
    do
    {
        cin >> n;
    } while (n <=0);
    
    for (int i = 0; i < n; i++)
    {
        result += a+i; 
    }
    cout << result << endl;    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
