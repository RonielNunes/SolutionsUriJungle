#include <iostream>
#include <iomanip>


using namespace std;

void solver(){
    double n;

    cin >> n;
    for (int i = 0; i < 100; i++)
    { 
        cout << fixed << setprecision(4) << "N["<< i<< "] = "<< n << endl;
        n = n/2;
    }
    

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
