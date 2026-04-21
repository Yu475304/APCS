#include <iostream>
using namespace std;

int main() {
for (int i = 1; i <=9; i++){
	for (int j = i; j <= 3; j++){
		cout << j << " * " << i << " = " << j*i << " ";
	}
	cout << "\n";
}
	cout << "------------";
	for (int i = 1; i <=9; i++){
		for (int j = 3; j <= 6; j++){
			cout << j << " * " << i << " = " << j*i << " ";
		}
		cout << "\n";
	}
	cout << "------------";
	for (int i = 1; i <=9; i++){
		for (int j = 7; j <= 9; j++){
				cout << j << " * " << i << " = " << j*i << " ";
			}
			cout << "\n";
		}
			cout << "------------";
	return 0;
}

