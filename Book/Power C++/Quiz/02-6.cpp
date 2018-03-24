#include <iostream>

using namespace std;

int main()
{
	double weight;

	cout << "무게를 입력하시오: ";
	cin >> weight;

	cout << weight << "킬로그램은 " << weight * 2.2 << " 파운드 입니다." << endl;
	cout << weight << "킬로그램은 " << weight * 2.2 * 16 << " 온스 입니다." << endl;

	return 0;
}
