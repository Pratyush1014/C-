#include"iostream"
using namespace std;
void add(int a,int b)
{
	cout<<a+b<<endl;
}
void add(char a,char b)
{
	cout<<a<<b<<endl;
}
void add(char *a,char *b)
{

	cout<<a<<b<<endl;
}
main()
{
	add(2,5);
	add('a','b');
	add("in","dia");
}
