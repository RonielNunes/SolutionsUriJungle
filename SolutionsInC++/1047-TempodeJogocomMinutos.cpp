#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>

//g++ 1047-TempodeJogocomMinutos.cpp -o exec

using namespace std;
//hora inicial, minuto inicial, hora final e minuto final
void solver(){
    int hi, mi, hf, mf;

    cin >> hi >> mi >> hf >> mf;
    int hora = hf - hi;
    int minuto = mf - mi;

    if((hora <= 0) && (minuto <=0) ){
        hora += 24;
    }
    if(minuto < 0){
        minuto +=60;
        hora--;
    }


    cout <<"O JOGO DUROU "<< hora<<" HORA(S) E "<< minuto  <<" MINUTO(S)" << endl; 
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


