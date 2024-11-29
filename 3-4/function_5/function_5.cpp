#include <iostream>
using namespace std;
int main(){

	int day_peach=1, total_peach;
	for (int i = 1; i <= 9; i++)
	{
		day_peach = 2 * day_peach + 1;
	}
	total_peach = 2 * day_peach;
	cout << "第一天猴子共摘了" << total_peach<<"个桃子" <<  endl; 
	return 0;
	}