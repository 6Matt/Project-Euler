#include <iostream>

using namespace std;

int main(){
	cout << "Find the smallest number that is evenly divisible by 1 to what?" << endl;

	int m;
	cin >> m;

	int num = m;

	for(int x = m; x >= 2; x--){
		if(x == 2 && num % x == 0){break;}
		if(num % x != 0){
			x = m + 1;
			num += m;
		}
	}

	cout << num << endl;
}
