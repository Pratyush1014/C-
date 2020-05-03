#include"iostream"
using namespace std ;
class test
{
	public :
		int x ;
		static int y ;
		void change()
		{
			this->x = 100 ;
		}
		static void schange()
		{
			y = 202 ;
		}
	
};
int test :: y = 16 ;
main()
{
	test obj ;
	obj.x = 90 ;
	cout <<obj.x <<endl;
	cout <<obj.y <<endl;
	cout <<test::y<<endl;
	obj.change();
	cout <<obj.x <<endl;
	cout <<obj.y <<endl;
	cout <<test::y<<endl;
	test::schange();
	cout <<obj.x <<endl;
	cout <<obj.y <<endl;
	cout <<test::y<<endl;
}
