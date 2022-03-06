#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(unsigned(time(0)));	// 랜덤 시드(seed) 설정

	// 배열에 저장
	int a[10];
	for (int i = 0; i < 10; i++) // 중요
		a[i] = rand();

	// 출력
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;

	int min = a[0];
	int max = a[0];
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		sum += a[i];
		if (min > a[i])
			min = a[i];
		else if (max < a[i])
			max = a[i];
	}

	cout << "평균 = " << sum / 10.0 << endl;
	cout << "최소 = " << min << endl;
	cout << "최대 = " << max << endl;
}
