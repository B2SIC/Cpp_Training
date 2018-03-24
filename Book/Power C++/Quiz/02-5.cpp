#include <iostream>

using namespace std;

int main()
{
	int computer, c_lang, english, math;

	cout << "컴퓨터 개론 과목의 점수를 입력하시오: ";
	cin >> computer;
	cout << "C언어 프로그래밍 과목의 점수를 입력하시오: ";
	cin >> c_lang;
	cout << "영어 과목의 점수를 입력하시오: ";
	cin >> english;
	cout << "일반 수학 과목의 점수를 입력하시오: ";
	cin >> math;

	cout << "평균 점수는 " << (computer + c_lang + english + math) / 4.0 << "입니다." << endl;
	return 0;
}
