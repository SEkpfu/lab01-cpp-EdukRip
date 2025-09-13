
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>

using namespace std;

double One()
{
    cout << "Введите длины сторон: \n";
    double a, b, S;

    cout << "Сторона a = ";
    cin >> a;
    cout << "Сторона b = ";
    cin >> b;


    S = a * b;
    cout << S;

    return S;
}
int Two()
{
    double a, b;
    cout << "Первое число: ";
    cin >> a;
    cout << "Второе число: ";
    cin >> b;
    
    cout << "Сумма: " << a + b;

    if (a > b)
    {
        cout << "\nРазность (Из большего меньшее): " << a - b;
    }
    else
    {
        cout << "\nРазность (Из большего меньшее): " << b - a;
    }
    
    cout << "\nПроизведение: " << a * b;

    return 2;
}
int Three()
{
    double tK, tF, tC;

    cout << "Введите температуру в градусах Цельсия: ";
    cin >> tC;

    tF = 1.8 * tC + 32;
    tK = tC + 273;

    cout << "Температура в Фаренгейтах: " << tF << "F\n";
    cout << "Температура в Кельвинах: " << tK << "K"; 

    return 3;
}
double Four()
{
    const double PI = 3.14159;
    double R, V;
    cout << "Введите радиус: ";
    cin >> R;

    //cout << double(4) / double(3); Интересно, что без дабл это деления без остатка. т.е. int
    V = 4 * PI * R * R * R / 3;
    cout <<  "\n" << V;

    return V;
}
int Five()
{
    double radius, length, area;

    cout << "Введите площадь S = ";

    cin >> area;
    radius = sqrt(area / M_PI);
    length = 2 * M_PI * radius;

    cout << "Радиус = " << radius;

    cout << "\nДлина окружности = " << length;
    return 5;
}
int Six()
{
    double r, h, V, S, ss; // ss - площадь окружности в основании

    cout << "Введите радиус r = ";
    cin >> r;
    cout << "Введите высоту h = ";
    cin >> h;
    
    ss = M_PI * r * r;

    V = h * ss;
    cout << "Объём цилиндра V = " << V;

    S = ss * 2 + 2 * M_PI * r;
    cout << "\nПлощадь поверхности цилиндра S = " << S;
    

    return 2;
}
int Seven()
{
    int num1, num2, sum;

    cout << "Первое число = ";
    cin >> num1;
    cout << "Второе число = ";
    cin >> num2;

    sum = num1 % 10 + num2 % 10;
    cout << "Сумма последних цифр = " << sum;

    return sum;
}
int Eight()
{
    int num;

    cout << "Введите четырёхзначное число: ";
    cin >> num;

    cout << "И последняя цифра числа это: " << num % 10;
    cout << "\nА вот и первая: " << num / 1000;

    return 2;
}
int Nine()
{
    int sec, min, hour;

    cout << "Введите количество секунд: ";
    cin >> sec;

    min = sec / 60;
    sec = sec % 60;

    hour = min / 60;
    min = min % 60;

    if (hour > 0)
    {
        cout << hour << " Час(ов) " << min << " Минут(а) " << sec << " Секунд(а)";
    }
    else
    {
        if (min > 0)
        {
            cout << min << " Минут(а) " << sec << " Секунд(а)";
        }
        else
        {
            cout << sec << "Секунд(а)";
            cout << "По сути ничего программа и не делала)";
        }
    }
    return 2;
}
int Ten()
{
    double a, b, c, V, S;

    cout << "Введите длины сторон параллелепипеда: (a, b, c) ";
    cin >> a >> b >> c;

    V = a * b * c;
    S = 2 * (a * b + b * c + a * c);

    cout << "Объём V = " << V;
    cout << "\n Площадь S = " << S;

    return 2;
}
int main(int argn)
{
    setlocale(0, "");

    int numTask;
    cout << "Выберите номер задания (1-10):\n";
    cout << "1. Нахождение площади прямоугольника\n" << "2. Сумма, разность и произведение двух действительных чисел\n";
    cout << "3. Градусы Цельсия в Фаренгейтах и Кельвинах\n" << "4. Нахождение объёма шара\n";
    cout << "5. Радиус и длина окружности по площади круга\n" << "6. Объём и площадь поверхности цилиндра\n";
    cout << "7. Сумма последних цифр двух чисел\n" << "8. Первая и последня цифра четырёхзначного числа\n";
    cout << "9. Часы, минуты и остаток секунд\n" << "10. Площадь и объём параллелепипеда\n";
    cin >> numTask;

    switch (numTask)
    {
    case 1:
        One();
        break;
    case 2:
        Two();
        break;
    case 3:
        Three();
        break;
    case 4:
        Four();
        break;
    case 5:
        Five();
        break;
    case 6:
        Six();
        break;
    case 7:
        Seven();
        break;
    case 8:
        Eight();
        break;
    case 9:
        Nine();
        break;
    case 10:
        Ten();
        break;
    default:
        cout << "А такого тут нет ^_____^";
        break;
    }

    this_thread::sleep_for(chrono::seconds(8));
    // Чтобы консоль не вырубалась
}

