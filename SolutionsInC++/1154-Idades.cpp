#include <iostream>
#include <iomanip>
using namespace std;

void solver(){
    int idade;
    double sum = 0;
    double count = 0;

    do
    {
        cin >> idade; 
        if (idade > 0)
        {
            sum +=idade; 
            count++;
        }
    } while (idade >0);
    double result = sum/count;
    cout << fixed << setprecision(2) << double(sum / count) << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
