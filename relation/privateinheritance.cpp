#include"iostream"
using namespace std;
class super
{
	private : int a;//still inaccessible
	protected : int b;
	public : int c;

	public :
	void method()
	{
		this->a=30;
	}
};
class sub : private super
{
	private : int  x;//int b , int c and method
	protected : int y;
	public : int z;
	void inherit()
	{
		y=30;
		x=30;
		method();
	}

};
main()
{
	sub delta;
	delta.z=30;
}
