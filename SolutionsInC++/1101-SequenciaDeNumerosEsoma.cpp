#include <iostream>

using namespace std;

void solver(){
    int n,m;
    cin >> n >> m;
    while (n >0 && m > 0){
        int inicio = min(n,m);
        int final = max(n,m);
        int sum = 0;
        for (int i = inicio; i < final+1; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout <<"Sum="<< sum << endl;
        cin >> n >> m;
    }

    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}

