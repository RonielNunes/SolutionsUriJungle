#include <iostream>
#include <iomanip>
using namespace std;

void solver(){
    bool n1 = false;
    bool n2 = false;
    float mean = 0;
    float nota;

    while (!n1 == true || !n2 == true)
    {
        cin >> nota;
        if( (nota >= 0 && nota <= 10)){
            mean += nota;
            if(n2 != n1){
                n2 = true;
            } 
            if (n1 == false)
            {
                n1 = true;
            }
        }else{
            cout << "nota invalida" << endl;
        }
    }
    cout << "media = "<<fixed << setprecision(2) <<mean / 2 << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
