#include"iostream"
using namespace std;
class base
{
	public: int a;
	protected: int b;
	private: int c;//still private
	
	public:
	void method()
	{
		this->c=20;
	}
};
class derived : protected base 
{
	public: int x;
	protected: int y;//int a and int b and method
	private: int z;
	void inherit()
		{
			this->y=20;
			this->z=20;
			this->a=20;
			this->b=20;
			this->method();
		}
};
main()
{
	derived bravo;
	bravo.x=20;
}
