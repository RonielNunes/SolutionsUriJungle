#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    int x,z,a,b,c = 0;
    cin >> x;
    do{
        cin >> z;
    } while (x >= z);
    
    for(a=x,b=0; b<z; a++)
    {
        b+=a;
        c++;
    }
    cout << c << endl;
}
int main(int argc, char const *argv[])
{
    solver();
    return 0;
}