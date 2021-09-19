#include <iostream>
#include <iomanip>

using namespace std;

void solver(){
    int n, c =0, r =0, s =0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int q;
        string t;
        cin >> q >> t;
        cin.get();

        if(t == "C"){
            c +=q;
        }else if(t == "R"){
            r+= q;
        }else if(t == "S"){
            s +=q;
        }
    }
    float perC = (float)c, perR = (float)r, perS = (float)s;
    cout << "Total: "<< c + r + s << " cobaias" << endl;
    cout << "Total de coelhos: "<< c << endl;
    cout << "Total de ratos: "<< r << endl;
    cout << "Total de sapos: "<< s << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2)<< perC*100/(c+r+s) << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2)<< perR*100/(c+r+s)  << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2)<<perS*100/(c+r+s) << " %" << endl;
}

int main(int argc, char const *argv[]){
    solver();
    return 0;
}