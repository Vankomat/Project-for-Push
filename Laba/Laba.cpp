#include <iostream>
#include <string>
#include <windows.h>

#include "Input.h"
#include "Convert.h"
#include "Output.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    SetConsoleOutputCP(65001);

    double amount;
    string fromCurrency, toCurrency;

    input(amount, fromCurrency, toCurrency);

    double convertedAmount = convert(amount, fromCurrency, toCurrency);

    output(convertedAmount, toCurrency);

    return 0;
}