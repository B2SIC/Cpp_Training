#include <iostream>

using namespace std;

int main()
{
	int height;
	double inch, ft;

	cout << "키를 입력하세요: ";
	cin >> height;

	// 1 ft = 12 inch, 1 inch = 2.54cm
	inch = height / 2.54;
	ft = inch / 12;

	inch = (ft - int(ft)) * 12; // 피트로 계산한 나머지 인치 값

	cout << height << "cm는 " << (int)ft << "피트 " << inch << " 인치입니다." << endl;

	cout << "반대의 경우도 생각해봅시다." << endl;
	cout << "키를 입력하시오(피트): ";
	cin >> ft;
	cout << "키를 입력하시오(인치): ";
	cin >> inch;

	cout << ft << "피트 " << inch << "인치는 " << (ft * 12 + inch) * 2.54 << "cm 입니다." << endl;

	return 0;
}
