#include <iostream>

using namespace std;

int main()
{
	int x, y, result;

	cout << "x 좌표와 y 좌표를 순서대로 입력하세요: ";
	cin >> x;
	cin >> y;

	result = (x > 0 && y > 0) ? 1 : (x < 0 && y > 0) ? 2 : (x < 0 && y < 0) ? 3 : (x > 0 && y < 0) ? 4 : -1;

	cout << result << "사분면" << endl;
	return 0;
}
