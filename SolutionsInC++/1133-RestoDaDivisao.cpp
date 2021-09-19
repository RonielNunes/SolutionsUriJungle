#include <iostream>
#include <algorithm>
using namespace std;

void solver(){
    int x,y;

    cin >> x;
    cin >> y;
    int inicio = min(x,y);
    int final = max(x,y);

    for (int i = inicio+1; i <final; i++)
    {
        if( i % 5 == 2 || i % 5 ==3 ){
            cout << i << endl;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
