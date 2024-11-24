#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, outcome = 0;
	int i;


	for (i = 1; i <= 4; ++i)
	{
		cout << "输入一个x的值:";
		cin >> x;
		if (x > 0 && x < 1.0)
			outcome = 3 - 2 * x;
		if (x >= 1.0 && x < 0.5)
			outcome = 2 / (4 * x) + 1;
		if (x >= 5.0 && x < 10)
			outcome = pow(x, 2);

		cout << "x的值为" << outcome << endl;
	}



	return 0;
}