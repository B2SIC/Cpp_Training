#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "정수를 입력하시오: ";
	cin >> n;

	cout << "천의 자리: " << n / 1000 << endl;
	cout << "백의 자리: " << (n % 1000) / 100 << endl;
	cout << "십의 자리: " << (n % 100) / 10 << endl;
	cout << "일의 자리: " << (n % 10) << endl;
	
	return 0;
}
