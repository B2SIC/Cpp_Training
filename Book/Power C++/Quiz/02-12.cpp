#include <iostream>

using namespace std;

int main()
{
	double distance, minute, second, time_sum, velocity;

	cout << "달린 거리를 입력하세요(kmh): ";
	cin >> distance;
	cout << "달린 시간 중에서 분을 입력하세요: ";
	cin >> minute;
	cout << "달린 시간 중에서 초를 입력하세요: ";
	cin >> second;

	time_sum = ((second / 60) + minute) / 60;
	velocity = distance / time_sum;

	cout << "평균 속도는 " << velocity << " km/h 입니다." << endl;
	return 0;
}

