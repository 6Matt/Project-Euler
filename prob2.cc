#include <iostream>

using namespace std;

int main() {
	int a = 1, b = 1, sum = 0;

	while(b < 4000000){
		int temp = b;
		b += a;
		a = temp;

		if(b % 2 == 0){sum += b;}
	}

	cout << sum << endl;
}
