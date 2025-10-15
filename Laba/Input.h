#pragma once
#include <iostream>

using namespace std;

int input(double& amount, string& fromCurrency, string& toCurrency) {
    cout << "Введіть кількість грошей: ";
    cin >> amount;
    cout << "Введіть валюту, з якої конвертувати (USD, EUR, UAH): ";
    cin >> fromCurrency;
    cout << "Введіть валюту, в яку конвертувати (USD, EUR, UAH): ";
    cin >> toCurrency;
    return 0;
}