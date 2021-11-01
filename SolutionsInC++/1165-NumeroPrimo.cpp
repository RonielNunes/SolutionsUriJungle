#include <iostream>
#include <iomanip>
using namespace std;

bool primo(int number);

void solver(){
    int n;
    cout<<setprecision(1)<<fixed;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (primo(number))
        {
            cout << number << " eh primo" << endl;
        }else{
            cout << number << " nao eh primo" << endl;
        }
    }
}

bool primo(int number){
    int div = 0;
    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            div++;
        }
    }
    if (div == 2){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
