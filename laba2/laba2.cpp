#include <iostream>
#include <string>
using namespace std;

void zad1()
{
    string a, b;
    int c = 1;
    char d;
    cout << "Введите вашу строку: ";
    cin >> a;
    d = a[0]; //приравниваем символьный тип к строке
    for (int i = 1; i < a.length() + 1; i++) 
    {
        if (a[i] == d) // поиск повтора соседних симоволов
        {
            c++;
        }
        else
        {
            b += d;
            if (c > 1)
            {
                b += to_string(c);
            }
            d = a[i];
            c = 1;// дальнейшеая замена на 1 походим символов
        }
    }
    cout << "Вывод - " << b;
}

void zad2()
{
    int mas[10] = { 17,2,6,2,17,21,30,14,19,121 };
    cout << "Введенные элементы: ";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << "\t";
    }
    for (int k = 1; k < 10; k++) // сортировка масивов
    {
        int tmp = mas[k];
        int j = k - 1;
        while (j >= 0 && tmp <= mas[j])
        {
            mas[j + 1] = mas[j];
            j = j - 1;
        }
        mas[j + 1] = tmp;
    }
    cout << "Cортированные элементы: ";
    for (int i = 0; i < 10; i++) // вывод отсортированных масивово
    {
        cout << mas[i] << "\t";
    }
}

void zad3()
{
    string str1, str2, str3;
    int poisk = 0, entry = str1.find(str2, poisk);
    cout << "Ввод строки - ";
    cin >> str1;
    cout << endl;
    cout << "Введите подстроку для замены - ";
    cin >> str2;
    cout << endl;
    cout << "Введите свою подстроку для замены - ";
    cin >> str3;
    if (entry != -1) {
        str1.replace(str1.find(str2), str2.size(), str3);
        cout << str1 << " - строка после изменения" << endl;
        cout << endl;
    }
    else {
        cout << " строка не найдена";
    }

}
int main()
{
    setlocale(LC_ALL, "RU");
    cout << "****************" << endl;
    cout << "Задание1" << endl;
    cout << "****************" << endl;
    zad1();
    cout << endl;
    cout << "****************" << endl;
    cout << "Задание2" << endl;
    cout << "****************" << endl;
    zad2();
    cout << endl;
    cout << "****************" << endl;
    cout << "Задание3" << endl;
    cout << "****************" << endl;
    zad3();
    cout << endl;
    return 0;
    system("pause");
}

