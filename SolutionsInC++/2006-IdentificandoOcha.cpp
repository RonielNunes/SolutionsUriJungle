#include <iostream>

using namespace std;

void solver(){
    int id, idcha, count = 0;
    cin >> idcha;

    for (int i = 0; i < 5; i++)
    {
        cin >> id;
        if(id == idcha){
            count++;
        }
    }
    cout << count<< endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
