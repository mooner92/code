
#include <iostream>
using namespace std;
int Larger(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int x, y, z;

	cout << "세개의 값을 입력하세요 : ";
	cin >> x >> y >> z;

	//int max = Larger(x, y);
	//max = Larger(max, z);

	// 한줄로 만들자
	int max = Larger(Larger(x, y), z);
	cout << "최대값 = " << max << endl;
}