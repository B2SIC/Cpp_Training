#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.1415926535;

	int r, height;
	double volume;

	cin >> r;
	cin >> height;
	
	volume = r * r * PI * height;

	cout << "원기둥의 부피는 " << volume << "입니다." << endl;
	return 0;
}
