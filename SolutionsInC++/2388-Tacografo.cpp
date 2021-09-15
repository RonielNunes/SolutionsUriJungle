#include <iostream>

using namespace std;

void solver(){
    int n, result =0;
    cin >> n;
    for(int i =0; i < n; i++){
        int t,v;
        cin >> t >> v;
        result += t*v;
    }

    cout << result<< endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
