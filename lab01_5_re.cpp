

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main()
{
	//5
	double x, y, s1, s2, spec;

	cin >> x >> y;

	s1 = (pow(1 + (1 / (x * x)), x) - 12 * x * x * y);

	cout.precision(5);
	(s1 > 0) ? cout << "+" << fixed << s1 << endl : cout << fixed << s1 << endl;

	(x > 0) ? spec = (pow(x, 4) - pow(x, 5)) * (-1) : spec = pow(x, 4) - pow(x, 5);
	s2 = x - 10 * sin(x) + spec;

	cout.precision(1);
	(s2 > 0) ? cout << "+" << scientific << s2 : cout << scientific << s2;
}