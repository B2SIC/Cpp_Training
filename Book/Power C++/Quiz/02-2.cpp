#include <iostream>

using namespace std;

int main()
{
	double x;

	cout << "실수를 입력하세요: ";
	cin >> x;

	cout << "다항식 결과 값은: " << (3 * x * x * x) - (7 * x * x) + 9 << "입니다." << endl;

	return 0;
}
