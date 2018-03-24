#include <iostream>

using namespace std;

int main()
{
	int AC, AE, BC, DE;

	cout << "AC, AE, BC를 차례로 입력하세요: ";
	cin >> AC;
	cin >> AE;
	cin >> BC;

	DE = AE / AC * BC;

	cout << "DE = " << DE << endl;
	return 0;
}
