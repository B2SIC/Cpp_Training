#include <iostream>

using namespace std;

int main()
{
	int money;
	double interest, year1, year2;

	cout << "예금액을 입력하세요: ";
	cin >> money;
	cout << "연이율을 입력하세요(단위 퍼센트): ";
	cin >> interest;
	interest *= 0.01;

	year1 = money + (money * interest);
	year2 = year1 + (year1 * interest);
	
	cout << "2년 후의 예금액은 " << year2 << "입니다." << endl;
	return 0;
}
