#include"iostream"
using namespace std;
	int *r = new int;
	int *i=new int;
int * fact (int *p)
{
	
	*r = 1;
	while(*p>0)
	{
		*r = (*r)*(*p);
		(*p)--;
	}
	return r;
}
void strong(int *n)
{
	int p=*n;
	
	*i = 0;
	int k;
	while(*n>0)
	{
		k=*n%10;
		*i=*i + *fact(&k);
		*n = *n/10;
	}
	if (*i == p)	
		cout<<"strong"<<endl;
	else
		cout<<"nope"<<endl;
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	strong(&n);
	delete r;
	delete i;
}
