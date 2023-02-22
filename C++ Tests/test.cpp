#include <iostream>

using namespace std;

int main(){
	char entry;

	cout << "Enter a value: ";
	cin >> entry;
	cout << endl;

	if (isalpha(entry)){
		cout << "Alphabetical value received!" << endl;
		return 0;
	}
	else{
		cout << "Special value entered coolChamp!" << endl;
		return 0;
	}
}
