#include <iostream>
#include <iomanip> // Inclua a biblioteca iomanip para usar setw
#include <cmath>

using namespace std;

void solver() {
    int n;
    
    cin >> n;
    
    while (n != 0) {
        int max_val = static_cast<int>(pow(2, 2 * (n - 1))); // Valor máximo na matriz
        int width = to_string(max_val).length(); // Determina a largura necessária

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = static_cast<int>(pow(2, i + j));
                cout << setw(width) << val;
                if (j < n - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
}

int main(int argc, char const *argv[]) {
    solver();
    return 0;
}
