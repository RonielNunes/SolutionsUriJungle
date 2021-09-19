#include <iostream>

using namespace std;

void solver(){
    int x, y;
    cin >> x >> y;
    while (x != y)
    {
        if (x < y)
        {
            cout << "Crescente" << endl;
        }else{
            cout << "Decrescente" << endl;
        }
        cin >> x >> y;
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
