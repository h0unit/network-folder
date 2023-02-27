#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double a = 0, b = 0;
    char f;
    do
    {
        if (a == 0)
        {
            cout << "Введите первое число: \n";
            cin >> a;
        }
        cout << "Введите операцию: \n";
        cin >> f;
        if (f == 'Q')
        {
            cout << "Результат: " << a << "\n"; break;
        }
        if (f == 'C')
        {
            a = 0;
            continue;
        }
        if (f == '+' || f == '-' || f == '*' || f == '/')
        {
            switch (f)
            {
            case '+':
                cout << "Введите второе число:\n";
                cin >> b;
                a = a + b;
                break;
            case '-':
                cout << "Введите второе число:\n";
                cin >> b;
                a = a - b;
                break;
            case '*':
                cout << "Введите второе число:\n";
                cin >> b;
                a = a * b;
                break;
            case '/':
                cout << "Введите второе число:\n";
                cin >> b;
                a = a / b;
                break;
            }
            cout << "Результат = " << a << "\n";
        }
        else
        {
            cout << "Ошибка ввода, повторите ввод!\n";
            continue;
        }
    }
    while (f!='Q');
    return 0;
}
