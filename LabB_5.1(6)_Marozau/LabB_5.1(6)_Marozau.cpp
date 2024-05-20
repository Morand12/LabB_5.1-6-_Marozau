#include <iostream>
#include <string>
using namespace std;
//6. Из заданного текста удалить те символы, которые встречаются в нем более
//двух раз.

//4.1
void DeleteDoubleElements(string &str, int newSize) {
    unsigned amountOfElements[256] = { 0 };

    for (int i = 0; i < str.size(); i++) {
        amountOfElements[int(str[i])]++;
    }
    int size = str.size();
    for (int j = 0; j < size; j++) {
        if (amountOfElements[int(str[j])] > 2) {
            str.erase(j, 1);
            size--;
            j--;
        }
    }
}

//6. Написать программу перевода вещественных чисел из десятичной системы
//счисления в шестнадцатеричную.
//4.2
void from10To16(string& str) {
    string integerPart = ;
    string fractionalPart = ;
}

//4.3




int main()
{
    string P = "kaaaaaaaak";
    DeleteDoubleElements(P, 15);
    cout << P;

}

