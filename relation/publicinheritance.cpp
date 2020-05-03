#include"iostream"
using namespace std;
class parent 
{
	public: int a;
	private: int b;//still remains private 
	protected: int c;
	
	public : void method()
		{
			this->b=10;
		}
};
class child : public parent
{
	public: int x;   //int a and method 
	private: int y;  
	protected: int z;//int c
	void inherit()//to call it in main scope declare it under public scope
	{
		this->y=10;
		this->z=10;
		this->c=10;
	}
};
main()
{
	child alpha;
	alpha.x=10;
	alpha.a=10;
	alpha.method();
}
