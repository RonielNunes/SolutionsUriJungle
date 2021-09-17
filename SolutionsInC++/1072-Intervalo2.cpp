#include <iostream>

using namespace std;

void solver(){
    int n,x;
    int out = 0, in = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if(x >= 10 && x <= 20){
            in++;
        }else{
            out++;
        }
    }
    cout << in << " in" << endl << out << " out" << endl;   
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
