#include"iostream"
using namespace std;
void prime(int &);
void prime(int &n)
{
	int r=1,c=0;
	while(n%r!=0 && r>0)
	{
		c++;
		r++;
	}
	if(c==2)
		cout<<"prime"<<endl;
	else
		cout<<"composite"<<endl;
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int &x=n;
	cout<<x<<endl;
	prime(x);
}

