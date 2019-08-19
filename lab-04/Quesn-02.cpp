#include <iostream>
using namespace std;

class area
{
	int length;
	
		public:
			area(int l){
				length = l;	
			}	
			void printArea(){
				cout << "Area = " << length * length;
			}
};

main()
{
	area A1(12);
	
		A1.printArea();
}
