#pragma once
#include <iostream>

using namespace std;

int input(double& amount, string& fromCurrency, string& toCurrency) {
    cout << "������ ������� ������: ";
    cin >> amount;
    cout << "������ ������, � ��� ������������ (USD, EUR, UAH): ";
    cin >> fromCurrency;
    cout << "������ ������, � ��� ������������ (USD, EUR, UAH): ";
    cin >> toCurrency;
    return 0;
}