#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // 현재의 시간을 가져온다.
    // 1970년 1월 1일 0시 0분 0초를 기점으로 현재까지 흐른 시간을
    // 초 단위 반환.
    time_t t = time(NULL);

    // time_t의 값은 시스템에 따라 32bit or 64bit 정수.
    // 이 값을 localtime 또는 gmtime 함수를 이용해서 알아보기 쉬운 형태로 바꿈.
    // 문제는 UTC 기준이므로 gmtime을 사용. 
    // 참고: https://en.cppreference.com/w/cpp/chrono/c/gmtime
    // https://en.cppreference.com/w/cpp/chrono/c/localtime
    struct tm *pLocal = gmtime(&t);

    // tm_year은 1900년으로 부터 지난 연수를 반환.
    cout << pLocal->tm_year + 1900;
    cout << "-";

    cout.width(2);
    cout.fill('0');
    cout << pLocal->tm_mon + 1;
    cout << "-";

    cout.width(2);
    cout.fill('0');
    cout << pLocal->tm_mday << endl;
    return 0;
}