#include <iostream>
using namespace std;
int main(){

	int day_peach=1, total_peach;
	for (int i = 1; i <= 9; i++)
	{
		day_peach = 2 * day_peach + 1;
	}
	total_peach = 2 * day_peach;
	cout << "��һ����ӹ�ժ��" << total_peach<<"������" <<  endl; 
	return 0;
	}