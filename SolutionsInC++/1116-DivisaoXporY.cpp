#include <iostream>
#include <iomanip>
using namespace std;

void solver(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float x, y;
        cin >> x >> y;

        if(y == 0){
            cout << "divisao impossivel" << endl;
        }else{
            cout << fixed << setprecision(1) << x/y << endl;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
