#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    //Abril 30 dias total
    string buffer;

    int dia, diafim, hora, horafim, minuto, minutofinal, segundo, segundofinal;
    cin >> buffer >> dia;//Começo
    cin >>hora>> buffer >> minuto>> buffer>>segundo;
    cin >> buffer >> diafim;//Final
    cin >>horafim>> buffer >> minutofinal>> buffer>>segundofinal;

    segundo = segundofinal - segundo;
    minuto = minutofinal - minuto;
    hora = horafim - hora;
    dia = diafim - dia;

    if (segundo < 0){
        segundo += 60;
        minuto--;
    }

    if (minuto < 0){
        minuto += 60;
        hora--;
    }

    if (hora < 0){
        hora += 24;
        dia--;
    }

    cout << dia << " dia(s)" << endl;
    cout << hora << " hora(s)" << endl;
    cout << minuto << " minuto(s)" << endl;
    cout << segundo << " segundo(s)" << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
