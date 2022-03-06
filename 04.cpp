#include <iostream>
using namespace std;

int main()
{
	double height, weight;

	cout << "키를 입력하세요(cm): ";
	cin >> height;
	cout << "체중을 입력하세요(kg): ";
	cin >> weight;

	height = height / 100;	// height /= 100;
	double bmi = weight / (height * height);
	cout << "BMI = " << bmi << endl;

	// 이제 판단을 하는 코딩
	if (bmi < 20)
		cout << "저체중\n";
	else if (bmi < 25)
		cout << "정상체중\n";
	else if (bmi < 30)
		cout << "경도비만\n";
	else if (bmi < 40)
		cout << "비만\n";
	else
		cout << "고도비만\n";
}
