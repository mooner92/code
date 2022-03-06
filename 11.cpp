
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int a[10];

	srand((unsigned)time(0));

	for (int i = 0; i < 10; i++)
		a[i] = rand() % 100;

	cout << "Before Sorting : ";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;

	// 정렬하는 코드
	for(int i=0; i<10; i++)
		for(int j=i+1; j<10; j++)
			if (a[i] > a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}

	cout << "After Sorting : ";
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
}
