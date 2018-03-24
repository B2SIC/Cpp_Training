#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.1415926535;

	double r, A, V;

	cout << "반지름 r을 입력하세요: ";
	cin >> r;
	
	A = 4 * PI * r;
	V = 4 / 3.0 * PI * r * r * r;

	cout << "구의 표면적: " << A << endl;
	cout << "구의 체적: " << V << endl;
	return 0;
}

