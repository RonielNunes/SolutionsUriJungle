#include <iostream>

using namespace std;

void solver(){
    int n, x,y, soma;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        soma = 0;
        
        if(x%2 != 0){
                soma+=x;
        }else{
                x+=1;
                soma += x;
        }
        
        for(int i=0; i < y-1; i++){
                x += 2; 
                soma += x;           
        }
        
        cout << soma << endl;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}