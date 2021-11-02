#include <iostream>

using namespace std;

void solver(){
    int inter, gremio, emp, opcao;
    inter = gremio = emp = 0;
    
    while(true)
    {
        int i, g;
        cin >> i >> g;
        if (i > g){
            inter++;
        }else if (i < g)
        {
            gremio++;
        }else{
            emp++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;
        if (opcao == 1)
        {
            continue;
        }
        if (opcao == 2)
        {
            break;
        }
        
        
    }
    cout << inter + gremio + emp<< " grenais" << endl;
    cout << "Inter:"<< inter << endl;
    cout << "Gremio:"<< gremio << endl;
    cout << "Empates:"<< emp << endl;
    if (inter > gremio)
    {
        cout <<"Inter venceu mais"<<endl;
    }else if ( inter < gremio)
    {
        cout <<"Gremio venceu mais"<<endl;

    }else{
        cout <<"Nao houve vencedor" << endl;
    }
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}

