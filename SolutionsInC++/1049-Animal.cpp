#include <iostream>

using namespace std;

void solver(){
    string caracters[3];

    cin >> caracters[0] >> caracters[1] >> caracters[2];

    if(caracters[0] == "vertebrado"){
        if (caracters[1] == "ave")
        {
            if (caracters[2] == "carnivoro")
            {
                cout << "aguia" << endl;
            }else if (caracters[2] == "onivoro")
            {
                cout << "pomba" << endl;
            }
            
        }else if (caracters[1] == "mamifero")
        {
            if (caracters[2] == "onivoro")
            {
                cout << "homem" << endl;
            }else if (caracters[2] == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }     
    }else if (caracters[0] == "invertebrado")
    {
        if (caracters[1] == "inseto")
        {
            if (caracters[2] == "hematofago")
            {
                cout << "pulga" << endl;
            }else if (caracters[2] == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
            
        }else if (caracters[1] == "anelideo")
        {
            if (caracters[2] == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }else if (caracters[2] == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }
    
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}
