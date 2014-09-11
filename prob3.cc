#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num;
	cin >> num;

	for(double i = 2; i < sqrt(num); i++){
		if(remainder(num, i) == 0){
			num /= i;
			i = 2;
		}
	}

	cout << num << endl;
}
