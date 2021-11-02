#include <iostream>
#include <iomanip>

using namespace std;

void solver(){

    double nota, result = 0;
    int opcao;
    int count = 0;
    do{
        opcao = 0;
        while (count != 2){
            cin >> nota;
            if (nota >= 0 && nota <= 10){
                result+=nota;
                count++;
            }else{
                cout << "nota invalida" << endl;
            }
        }
        cout << "media = "<< fixed << setprecision(2)<<result/count << endl;
        count = 0;
        result = 0;
        while (opcao != 1 && opcao != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        }
    } while (opcao != 2);
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
