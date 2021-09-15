#include <iostream>
//g++ 1866-Conta.cpp -o exec

using namespace std;

void solver(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int t, s= 0;
        cin >>t ;
        for (int j = 0; j < t; j++)
        {
            if(j % 2 == 0){
                s++;
            }else{
                s--;
            }
        }
        cout << s << endl;

    }    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}

