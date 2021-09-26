#include <iostream>

using namespace std;

void solver(){
    int c, p, n;
    cin >> c >> p >> n;

    if(c * n <= p ){
        cout << "S" << endl;
    }else
    {
        cout << "N" << endl;
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
