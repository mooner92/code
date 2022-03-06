#include <iostream>
using namespace std;

int main()
{
    std::cout << "구구단!\n"; 
	
	for (int y = 1; y <= 9; y++) {
		for (int x = 2; x <= 9; x++) 
			cout << x << "x" << y << "=" << x * y << "\t";
		cout << endl;
	}
}
