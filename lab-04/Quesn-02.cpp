#include <iostream>
using namespace std;

class area
{
	int length;
	
		public:
			area(int l){//Parametarized constructor
				length = l;	
			}	
			void printArea(){
				cout << "Area = " << length * length;
			}
};

main()
{
	int a;
	
		cout << "Enter a num:";
		cin >> a;
		
	area A1(a);
	
		A1.printArea();
}
