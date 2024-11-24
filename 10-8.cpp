#include <iostream>
using namespace std;

int main()
{
	int i = 0, j;
	int testUnint= 65534, Oct[20];
	cin >> testUnint;

	while (testUnint)
	{
		Oct[i] = testUnint % 8;
		testUnint = testUnint / 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--) 
	{
		cout  << Oct[j] ;
	}
	return 0;
}