#include <iostream>
using namespace std;
int Factorial(int n) {
	if (n == 1)
		return 1;
	else
		return Factorial(n - 1) * n;
}

int main()
{
    std::cout << "n!을 구하기 위해 숫자 하나를 입력하세요 : "; 

	int n;
	cin >> n;

	cout << n << "! = " << Factorial(n) << endl;
}
