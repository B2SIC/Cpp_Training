#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double result;

	result = (3.32 * pow(10, -3) * 9.76 * pow(10, -8)) / (9.12 * pow(10, 6) * 9.76 + pow(10, 9));

	cout << result << endl;

	return 0;
}
