#pragma once
#include <iostream>
#include <string>

using namespace std;

void output(const double& convertedAmount, const string& toCurrency) {
    cout << "Конвертована сума: " << convertedAmount << " " << toCurrency << endl;
}