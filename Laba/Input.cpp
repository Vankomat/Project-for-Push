#include "Input.h"

//�������� �� ������ ������� � ������, ��� ��� 
//�������� ����������� �� ����� ��������� �����
int input(double& amount, string& fromCurrency, string& toCurrency) {
    cout << "������ ������� ������: ";
    cin >> amount;
    if (amount < 0)
        return -1;
    cout << "������ ������, � ��� ������������ (USD, EUR, UAH): ";
    cin >> fromCurrency;
    cout << "������ ������, � ��� ������������ (USD, EUR, UAH): ";
    cin >> toCurrency;
    return 0;
}
