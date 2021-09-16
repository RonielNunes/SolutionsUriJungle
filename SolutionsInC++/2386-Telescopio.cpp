#include <iostream>

using namespace std;

void solver(){
    //40 000f - 1mm2 = 40.000 não se ver
    //40 000f - 10mm2 = 400.000 não se ver
    //40 000f - 100mm2 = 40.000.000(para ver)
    int n,f,d,v=40000000,count=0;
    cin >> f;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> d;
        if(f*d >= v){
            count++;
        }
    }
    cout << count << endl;

}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
