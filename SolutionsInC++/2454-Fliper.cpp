#include <iostream>
//g++ 2454-Fliper.cpp +-o exec
using namespace std;

void solver();

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


void solver(){
    int e1,e2;
    cin >> e1 >> e2;

    if(e1 == 0){
        cout << "C" << endl;
    }else if( e2 == 0){
        cout << "B" << endl;
    }else{
        cout << "A" << endl;
    }
}
