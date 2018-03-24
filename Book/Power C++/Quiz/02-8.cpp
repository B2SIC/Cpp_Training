#include <iostream>

using namespace std;

int main()
{
	int hour, minute, second;

	cin >> hour;
	cin >> minute;
	cin >> second;

	cout << hour << "시간 " << minute << "분 " << second << "분은 " << hour * 60 * 60 + minute * 60 + second << "초 입니다." << endl;
	return 0;
}
