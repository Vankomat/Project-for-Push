#include "Input.h"

//підмодуль що приймає кількість і валюти, щоб далі 
//провести конвертацію на основі отриманих даних
int input(double& amount, string& fromCurrency, string& toCurrency) {
    cout << "Введіть кількість грошей: ";
    cin >> amount;
    if (amount < 0)
        return -1;
    cout << "Введіть валюту, з якої конвертувати (USD, EUR, UAH): ";
    cin >> fromCurrency;
    cout << "Введіть валюту, в яку конвертувати (USD, EUR, UAH): ";
    cin >> toCurrency;
    return 0;
}
