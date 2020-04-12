#include <iostream>

using namespace std;

int main(){
	int opt = 1;
	//char a;
	
	while( opt == 1 ){

		int x;

		cout << "Enter Any Number To Check Even or Odd" << endl;
		cin >> x;

		if( x%2 == 0 ){
			cout << "The Number Is Even" << endl;
		}
		else if(x%2 != 0){
			cout << "The Number Is Odd" << endl;
		}
		/*else{
		cout<<"Plz Enter Correct Number "<<a;
		}*/

		cout << "Want To Check More Press : 1 for Yes and Press : 0 for No" << endl;
		cin >> opt;
	}
	//return 0;
}
