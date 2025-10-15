#include "Convert.h"

//�������� �� �������� ������� � ������� ������ ��� ��������� ����������
double convert(const double& amount, const string& fromCurrency, const string& toCurrency) {
    double conversionRate = 1.0;

    if (fromCurrency == "USD" && toCurrency == "EUR")
        conversionRate = 0.89;
    else if (fromCurrency == "USD" && toCurrency == "UAH")
        conversionRate = 41.5;
    else if (fromCurrency == "EUR" && toCurrency == "USD")
        conversionRate = 1.11;
    else if (fromCurrency == "EUR" && toCurrency == "UAH")
        conversionRate = 43;
    else if (fromCurrency == "UAH" && toCurrency == "USD")
        conversionRate = 0.025;
    else if (fromCurrency == "UAH" && toCurrency == "EUR")
        conversionRate = 0.02;
    else {
        cout << "�������! ������� ������� �� ���� ������ ��� ������ ����� ����." << endl;
        return -1;
    }

    return amount * conversionRate;
}
