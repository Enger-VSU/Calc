#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    double x;
    cout << "Введите первое число: ";

    while (!(cin >> x)) {
        cout << "Ошибка в значении первого числа!\n\n";
        cout << "Введите первое число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double y;
    cout << "Введите второе число: ";

    while (!(cin >> y)) {
        cout << "Ошибка в значении второго числа!\n\n";
        cout << "Введите второе число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Введите знак: ";
    char z;
    cin >> z;

    cout << "\n";

    switch (z) {
        case '+':
            cout << x << " " << z << " " << y << " = " << x + y << "\n";
            break;
        case '-':
            cout << x << " " << z << " " << y << " = " << x - y << "\n";
            break;
        case '*':
            cout << x << " " << z << " " << y << " = " << x * y << "\n";
            break;
        case '/':
            if (y == 0) {
                cout << "Делить на 0 нельзя!\n";
                break;
            }
            else {
                cout << x << " " << z << " " << y << " = " << x / y << "\n";
                break;
            }
        default:
            std::cout << "Ошибка в значении знака!";
        }
}