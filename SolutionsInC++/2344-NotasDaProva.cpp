//g++ 2344-NotasDaProva.cpp -o exec
#include <iostream>

using namespace std;

void solver();

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


void solver(){
    int n;

    cin >> n;

    if (n == 0)
    {
        cout << "E" << endl;
    }else if( n > 0 && n <=35){
        cout << "D" << endl;
    }else if(n > 35 && n <= 60){
        cout << "C" << endl;
    }else if(n > 60 && n <=85){
        cout << "B" << endl;
    }else if(n > 85 && n <=100){
        cout << "A" << endl;
    }
}