#include <iostream>
 
using namespace std;
 
void solver(){
    int n;
    cin >> n;

    for (int i = 1; i <= 10000; i++)
    {
        if(i % n == 2){
            cout << i << endl;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
