#include <iostream>
using namespace std;

//This code needs improvement

inline void check_large(int a, int b, int c){
	if (a>b && a>c)
		cout << "The first one is largest.";
	else if (b>a && b>c)
		cout << "The second one is largest.";
	else 
		cout << "The third one is largest.";	
}

main(){
	int num1, num2, num3;
	
	cout << "Enter three numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	
		check_large(num1, num2, num3);
		
}
