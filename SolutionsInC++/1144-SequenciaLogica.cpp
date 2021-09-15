#include <iostream>
//g++ 1144-SequenciaLogica.cpp -o exec
using namespace std;


void solver(){
    int n;
    cin >> n;
    int c1 = 1,c2 = 1,c3 =1;
    for (int i = 0; i < n*2; i++)
    {
        cout<< c1 <<" "<< c2 <<" "<< c3 <<endl;
        if((i+1) % 2 == 0 ){
            c1++;
            c2 = c1*c1;
            c3 = c2*c1;
        }else{
            c2++;
            c3++;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
