#include <iostream>

using namespace std;

void solver(){
    int x, y;
    do{
        cin >> x >> y;
        cin.get();
        if(x > 0 && y > 0){
            cout << "primeiro" << endl;
        }else if(x < 0 && y > 0){
            cout << "segundo" << endl;
        }else if(x < 0 && y < 0){
            cout << "terceiro" << endl;
        }else if(x > 0 && y < 0){
            cout << "quarto" << endl;
        }
    }while(x != 0 && y != 0);
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
