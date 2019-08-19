#include <iostream>
using namespace std;

class const_overload
{
	int a, b, c;
	
		public:
			const_overload(int n1){
				a = n1;
			}
			const_overload(int n2, int n3){
				b = n2;
				c = n3;
			}	
			void dis(){
				cout << "Sum = " << a + b + c;
			}
};

main()
{
	const_overload ob1(1), ob1(2, 3);
	
		ob1.dis();
}
