#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "\tПеревод температуры из Фаренгейта  в Цельсия\n\n";

    double Fahr;


    for (Fahr = 0; Fahr < 101; Fahr += 0.5)
    {
        cout << Fahr << " = " << (Fahr - 32) / 1.8 << endl;
    }


    system("pause");
    return 0;
}