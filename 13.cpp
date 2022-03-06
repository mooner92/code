
#include <iostream>
using namespace std;
void Pyramid(int n)
{
	for (int i = 1; i <= n; i++) {
		// 빈칸을 5-i개 
		for (int j = 0; j < n - i; j++)
			cout << " ";
		// 별표를 2*i-1개
		for (int k = 0; k < 2 * i - 1; k++)
			cout << "*";
		cout << endl;
	}
}

int main()
{
	Pyramid(3);
	Pyramid(5);
	Pyramid(7);
}
