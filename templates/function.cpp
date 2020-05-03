#include"iostream"
using namespace std;
template <class any1 ,class any2>
void print(any1 x ,any2 y)
{
	cout<<x<<' '<<y<<endl;
}
main()
{
	print(10,23);
	print(9,11.2f);
	print(11.22,'g');
	print("str",1);
}
