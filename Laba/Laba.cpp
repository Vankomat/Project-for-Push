#include <string>
#include <windows.h>

#include "Input.h"
#include "Convert.h"
#include "Output.h"

using namespace std;

//основний модуль пов'язує підмодулі для досягнення виконання певного завдання
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    SetConsoleOutputCP(65001);

    double amount;
    string fromCurrency, toCurrency;

    if (input(amount, fromCurrency, toCurrency) == -1) {
        cout << "Сума не може бути менша 0!" << endl;
        return -1;
    }

    double convertedAmount = convert(amount, fromCurrency, toCurrency);
    if (convertedAmount == -1)
        return -1;
    output(convertedAmount, toCurrency);

    return 0;
}