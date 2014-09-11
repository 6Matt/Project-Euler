#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int num){
	vector<int> digits;

	do{
		digits.push_back(num % 10);
		num /= 10;
	}while(num != 0);

	for(int a = 0, b = digits.size() - 1; b > a; a++, b--){
		if(digits[a] != digits[b]){return false;}
	}

	return true;
}

int main(){
	int largest = 0;

	for(int a = 999; a >= 1; a--){
		for(int b = a; b >= 1; b--){
			if(isPalindrome(a*b) && (a*b) > largest){largest = a*b;}
		}
	}

	cout << largest << endl;
}
