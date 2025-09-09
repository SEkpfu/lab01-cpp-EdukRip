

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    //1
    setlocale(0, "");
    double a, b, a2, b2;

    cout << "Введите 2 числа: ";
    cin >> a >> b;

    a2 = a * a;
    b2 = b * b;

    cout << "Сумма = " << b2 + a2 << endl;
    cout << "Разность = " << a2 - b2 << endl;
    cout << "Произведение = " << a2 * b2 << endl;
    cout << "Частное = " << a2 / b2 << endl;


}

int main()
{
	//2
	setlocale(0, "");

	int num, a, b, c;

	cin >> num;

	a = num / 100;
	b = num / 10 % 10;
	c = num % 10;

	cout << "Сумма = " << a + b + c << endl;
	cout << "Произведение = " << a * b * c << endl;

}

int main()
{
  //3
	setlocale(0, "");

	int a, b, c, a2, b2, c2;

	cin >> a >> b >> c;
	a2 = a * a;
	b2 = b * b;
	c2 = c * c;

	(b % 2 == 0) ? cout << "Сумма квадратов = " << a2 + b2 + c2 << "\nПроизведение квадратов = " << a2 * b2 * c2 : (b>c) ? cout << b: cout << c;
	
}

int main()
{
	//4
	int x, y, x2, x3;

	cin >> x;

	x2 = x * x;
	x3 = x2 * x;

	y = (14 * x3 - x2 - 1) * x3 + x2 * (x2 + 1) - x + 2;

	cout << y;
}

int main()
{
	//5
	double x, y, s1, s2, spec;

	cin >> x >> y;

	s1 = (pow(1 + (1 / (x * x)), x) - 12 * x * x * y);

	(s1 > 0) ? cout << "+" << endl : cout << s1 << endl;

	(x > 0) ? spec = (pow(x, 4) - pow(x, 5)) * (-1) : spec = pow(x, 4) - pow(x, 5);
	s2 = x - 10 * sin(x) + spec;

	(s2 > 0) ? cout << "+" << s2 : cout << s2;
}