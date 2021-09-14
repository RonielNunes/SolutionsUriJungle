#include <iostream>

using namespace std;

void solver(){
    int c;
    std::cin >> c;
    cin.get(); //Pegar o resto de leitura(enter)
    string line;

    for (int i = 0; i < c; i++)
    {
        getline(cin,line);
        if(line.compare("What is output?")){
            cout << "gzuz" << endl;
        }else if(line.compare("What is your name?")){
            cout << "gzuz" << endl;
        }else if(line.compare("Where is the book?")){
            cout << "gzuz" << endl;
        }
    }
}

int main(int argc, char * argv[]){
    solver();
    return 0;
}