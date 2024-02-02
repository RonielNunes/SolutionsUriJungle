#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <list>
#include <iomanip>   // std::setprecision(2)
//g++ 1048-AumentoDeSalario.cpp -o exec

using namespace std;


void solver() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string text;
        cin >> text;

        vector<char> listaDeCaracteres;

        for (char c : text) {
            int valorDecimal = static_cast<int>(c);
            if (valorDecimal >= 97 && valorDecimal <= 122) {
                listaDeCaracteres.push_back(c);
            }
        }

        vector<char> reverse(listaDeCaracteres.rbegin(), listaDeCaracteres.rend());

        for (char c : reverse) {
            cout << c;
        }
        cout << endl;
    }

    // cout << fixed << setprecision(2) << endl;
}

int main(int argc, char const *argv[])
{
    solver();
    return 0;
}


// Inteiros:

// int: Representa números inteiros, por exemplo, -5, 0, 42.
// short: Inteiro curto.
// long: Inteiro longo.
// long long: Inteiro longo longo.

// Ponto Flutuante:

// float: Representa números de ponto flutuante de precisão simples.
// double: Representa números de ponto flutuante de precisão dupla.
// long double: Representa números de ponto flutuante de precisão estendida.
// Caracteres:

// char: Representa caracteres individuais, como 'a' ou '5'.

// Booleano:

// bool: Representa valores lógicos, true ou false.
// Cadeias de Caracteres:

// char[] ou string: Para representar cadeias de caracteres.

// Apontadores:

// int*: Apontador para um inteiro.
// double*: Apontador para um ponto flutuante.
// char*: Apontador para um caractere.
// Arrays:

// int array[5]: Um array de inteiros com 5 elementos.
// Estruturas:

// struct: Permite criar tipos de dados personalizados que podem conter diferentes tipos de dados sob um único nome.

// Enumeradores:

// enum: Permite criar um conjunto nomeado de constantes inteiras.

// Void:

// void: Usado para indicar que uma função não retorna nenhum valor.
// Tipos Personalizados (Classes):

// Além das estruturas (struct), em C++ você pode criar classes, que são tipos de dados personalizados com funcionalidades associadas.

// Tipos de Dados Modernos (C++11 em diante):

// auto: Permite que o compilador deduza automaticamente o tipo de uma variável.
// decltype: Retorna o tipo de uma expressão em tempo de compilação.


    // std::string minhaString = "Hello";

    // // Criando um vetor para armazenar caracteres
    // std::vector<char> listaDeCaracteres;

    // // Armazenando cada caractere na lista
    // for (char c : minhaString) {
    //     listaDeCaracteres.push_back(c);
    // }

    // // Exibindo a lista de caracteres
    // std::cout << "Lista de caracteres: ";
    // for (char c : listaDeCaracteres) {
    //     std::cout << c << " ";
    // }
    // std::cout << std::endl;