#include <iostream>

using namespace std;

int main() {
	int sum;

	for(int a = 0; a < 1000; a += 5){
		if(a % 3 != 0){sum += a;}
	}

	for(int b = 0; b < 1000; b += 3){
		sum += b;
	}

	cout << sum << endl;
}
