#include"iostream"
using namespace std;
int inputx()
{
	int x;
	cout<<"enter x";
	cin>>x;
	return x;
}
int inputy()
{
        int x;
        cout<<"enter y";
        cin>>x;
        return x;
}
int inputz()
{
        int x;
        cout<<"enter z";
        cin>>x;
        return x;
}
void sum(int =inputx(),int =inputy(),int =inputz());
void sum(int x,int y,int z)
{
	cout<<x<<"+"<<y<<"+"<<z<<"="<<x+y+z;
}


	
main()
{
	sum(10,20,30);
	sum(10,20);
	sum(10);
}
