#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	double r1, r2;

	cout << "a, b, c를 차례로 입력하시오: ";
	cin >> a;
	cin >> b;
	cin >> c;

	r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	cout << "r1 = " << r1 << " r2 = " << r2 << endl;

	return 0;
}
