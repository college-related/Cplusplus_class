#include <iostream>
using namespace std;

class area
{
	int length;
	
		public:
			area(){
				length = 0;	
			}	
			void printArea(){
				cout << "Enter a length: ";
				cin >> length;
				
				cout << "Area = " << length * length;
			}
};

main()
{
	area A1;
	
		A1.printArea();
}
