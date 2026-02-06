#include <iostream>
#include <string>

using namespace std;

int main(){
	string S;
	cout << "Enter a string: ";
	cin >> S;

	if((S.length() >= 1) && (S.length() <= 10)) {
		bool islowercase = true;
		for(char c: S){
			if((c < 'a') || (c > 'z')) {
				islowercase = false;
				break;
			}
		}
		if(islowercase) {
			S = S + 's';
			cout << S << "\n";
		} else {
			cout << "Wrong Input" << endl;
		}
	}
	else {
        cout << "Wrong Input (Length must be 1-10)" << endl;
  }
	
	return 0;
}

