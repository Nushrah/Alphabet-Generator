#include <iostream>
using namespace std;

int main() {
	int len;
	char letter;
	cout << "Please input the height (integer): " << endl;
	cin >> len;
	cout << "Do you want to print M or W?: " << endl;
	cin >> letter;
	
	if (len <= 1) {
		cout << "Wrong input!" << endl;
	}
	else {
		
		switch (letter) {
		case 'M':
			for (int i = 0; i < len; i++) {

				
				for (int j = 0; j < (len - 1 - i); j++) {
					cout << " ";
			
				}
				cout << "*";

				for (int j = 0; j < (i * 2 - 1);j++) {
					cout << " ";

				}

				if (i > 0) {
					cout << "*";
				}

				for (int j = 0; j < ((len * 2 - 3) - (i * 2)); j++) {
					cout << " ";
				}
				if ((i + 1) != len) {
					cout << "*";
				}

				if (i > 0) {
					for (int j = 0; j < (i * 2 - 1); j++) {
						cout << " ";
					}
				}

				if (i > 0) {
					cout << "*";
				}


				cout << endl;
			}

			break;


		case 'W':
			for (int i = 0; i < len; i++) {


				for (int j = 0; j < i; j++) {
					cout << " ";
				}
				cout << "*";

				for (int j = 0 ; j < ((len*2 - 3)-(i*2)); j++) {
					cout << " ";
				}
				if ((i + 1) != len) {
					cout << "*";
				}
				if (i > 0) {
					for (int j = 0; j < (i * 2 - 1); j++) {
						cout << " ";
					}
				}
				
				if (i>0){
					cout << "*";
				}
				for (int j = 0; j < ((len * 2 - 3) - (i * 2)); j++) {
					cout << " ";
				}
				if ((i + 1) != len) {
					cout << "*";
				}

				cout << endl;


			}
			break;

		default:
			cout << "Wrong input!" << endl;
		}
	}

	return 0;

}
