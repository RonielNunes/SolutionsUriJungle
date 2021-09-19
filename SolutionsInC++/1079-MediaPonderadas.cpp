#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        float a, b, c, result;
        
        cin >> a >> b >> c;
        result = ((a*2) + (b*3) + (c*5))/ 10;

        cout << fixed << setprecision(1) << result << endl; 
    }
    
}


int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
