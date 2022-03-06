using namespace std;
#include <iostream>

int main()
{
	int x, y;

	cout << "두 정수 x와 y를 입력하세요: ";
	cin >> x >> y;

	int power = 1;	// 비교, int sum = 0;

	for (int i = 0; i < y; i++)	// y번 반복
		power *= x;

	cout << x << " ^ " << y << " = " << power << endl;
}
