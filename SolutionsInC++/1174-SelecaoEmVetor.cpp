#include <iostream>
#include <iomanip>
using namespace std;

void solver(){
    double n;
        cout<<setprecision(1)<<fixed;
        for(int i=0;i<100;i++){
            cin >> n;
            if(n<=10){
                cout<< "A[" << i << "] = " << n << endl;
        }
    }

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
