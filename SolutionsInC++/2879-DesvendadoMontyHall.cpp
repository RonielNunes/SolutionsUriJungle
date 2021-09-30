#include <iostream>

using namespace std;

void solver(){
    int n, count = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        if(e != 1){
            count++;
        } 
    }
    cout << count << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
