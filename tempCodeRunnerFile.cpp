#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++) {
		// 빈칸을 5-i개 
		for (int j = 0; j < 5 - i; j++)
			cout << " ";
		// 별표를 2*i-1개
		for (int k = 0; k < 2 * i - 1; k++)
			cout << "*";
		cout << endl;
	}
}
