#include <iostream>

using namespace std;

void solver(){
    int n;
    cin >> n;
    int a = 1, p = 0;
    int t;
    for (int i = 0; i < n; i++)
    {
        if(i == 0){
            cout << "0 ";
        }else if (n != n-1){
            t = a + p;
            cout << t << " ";
            a = p;
            p = t;
        }else{
            t = a + p;
            cout << t << endl;
        }
    }
}
int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
