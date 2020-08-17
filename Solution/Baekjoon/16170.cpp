#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t t = time(NULL);
    struct tm *tdata;
    tdata = gmtime(&t);
    printf("%d\n%02d\n%d\n", tdata->tm_year + 1900,
                             tdata->tm_mon + 1,
                             tdata->tm_mday);
    return 0;
}