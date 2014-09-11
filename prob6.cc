#include <iostream>

using namespace std;

int main(){
	cout << "Find the difference between the sum of the squares of the first how many natural numbers and the square of the sum?" << endl;

	int num;
	cin >> num;

	int difference = 0;

	for(int x = 1; x <= num-1; x++){
		for(int y = x + 1; y <= num; y++){
			difference += (2 * x*y);
		}
	}

	cout << difference << endl;
}
