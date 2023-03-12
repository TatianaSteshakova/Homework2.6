#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int d, m, y;
    cout << "Введите дату (день, месяц и год через пробел): " << endl;
    cin >> d >> m >> y;

    string isLeap;
    if (y % 4 == 0)
        isLeap = "Да";
    else
        isLeap = "Нет";

    cout << "Високосный год: " << isLeap << endl;

    int eastIndex = y % 12;
    string east;
    switch (eastIndex) {
    case 0:  east = "Обезьяна"; break;
    case 1:  east = "Петух"; break;
    case 2:  east = "Собака"; break;
    case 3:  east = "Свинья"; break;
    case 4:  east = "Крыса"; break;
    case 5:  east = "Бык"; break;
    case 6:  east = "Тигр"; break;
    case 7:  east = "Кролик"; break;
    case 8:  east = "Дракон"; break;
    case 9:  east = "Змея"; break;
    case 10: east = "Лошадь"; break;
    case 11: east = "Овца"; break;
    }

    cout << "Год по восточному календарю: " << east << endl;

    string zodiac;
    bool between = d >= 21;
    switch (m) {
    case 1:  zodiac = between ? "Козерог" : "Стрелец"; break;
    case 2:  zodiac = between ? "Весы" : "Козерог"; break;
    case 3:  zodiac = between ? "Рыбы" : "Весы"; break;
    case 4:  zodiac = between ? "Овен" : "Рыбы"; break;
    case 5:  zodiac = between ? "Телец" : "Овен"; break;
    case 6:  zodiac = between ? "Близнецы" : "Телец"; break;
    case 7:  zodiac = between ? "Рак" : "Близнецы"; break;
    case 8:  zodiac = between ? "Лев" : "Рак"; break;
    case 9:  zodiac = between ? "Дева" : "Лев"; break;
    case 10: zodiac = between ? "Весы" : "Дева"; break;
    case 11: zodiac = between ? "Скорпион" : "Весы"; break;
    case 12: zodiac = between ? "Стрелец" : "Скорпион"; break;
    }

    cout << "Знак зодиака: " << zodiac << endl;

    return 0;
}