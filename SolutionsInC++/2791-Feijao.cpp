#include <iostream>

using namespace std;

void solver(){
    int v[4], resposta;
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    if (v[0] == 1)
    {
        resposta = 1;
    }else if (v[1] == 1){
        resposta = 2;

    }else if (v[2] == 1){
        resposta = 3;

    }else if (v[3] == 1){
        resposta = 4;
    }
    cout <<resposta<<endl;
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
