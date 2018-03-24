#include <iostream>

using namespace std;

double absolute_temp(int n);

int main()
{
	int celsius;
	cout << "섭씨온도를 입력하시오: ";
	cin >> celsius;

	cout << "절대온도는 " << absolute_temp(celsius) << "입니다." << endl;
	return 0;
}

double absolute_temp(int n)
{
	return n + 273.16;
}
