#include <iostream>
using namespace std;

class student
{
	protected:
		int roll_no;
	public:
		student(int r1)
		{
			roll_no = r1;
		}
		void disRoll()
		{
			cout << "Roll number: " << roll_no << endl;
		}
};

class Theory: public student
{
	protected:
		int physics_th, science_th;
	public:
		Theory(int m1, int m2, int r):student(r)
		{
			physics_th = m1;
			science_th = m2;
		}
		void disTheory_marks()
		{
			cout << "Theory marks in\n Physics: " << physics_th << endl;
			cout << "science: " << science_th << endl;
		}
};

class Practical: public student
{
	protected:
		int physics_pr, science_pr;
	public:
		Practical(int m1, int m2, int r):student(r)
		{
			physics_pr = m1;
			science_pr = m2;
		}
		void disPractical_marks()
		{
			cout << "Practical marks in\n Physics: " << physics_pr << endl;
			cout << "science: " << science_pr << endl;
		}
};

class Result:virtual public Theory, virtual public Practical
{
	protected:
		int total;
		
	public:
		Result(int m1, int m2, int m3, int m4,int r):Practical(m4,m3,r),Theory(m1,m2,r){}
		void disResult()
		{
			total = physics_th + physics_pr + science_th + science_pr;
			disRoll();
			disTheory_marks();
			disPractical_marks();
			cout << "Total mark is " << total;
		}	
};


main()
{
	Result R(60,70,40,50,24);
		R.disResult();
}
