#include <iostream>

using namespace std;

void solver(){
    int x, a=0,b=1,c=0;
   cin >> x;
    for(int i= 1; i < x; i++)
    {
        if(i % 2 == 1)
        {
            cout << c << " ";
            c=a+b;
            a=c;
        }
        else if(i ==2)
            cout << c << " ";
        else if( i%2==0)
        {
            cout << c << " " ;
            c=a+b;
            b=c;
        }
    }
    cout << c << endl;
}
int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
