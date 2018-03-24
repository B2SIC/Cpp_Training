#include <iostream>

using namespace std;

int main()
{
	int start, end, fuel;

	cin >> start;
	cin >> end;
	cin >> fuel;

	cout << "연비는 " << (end - start) / fuel << "km/l 입니다." << endl;
	return 0;
}
