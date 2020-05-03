#include"iostream"
using namespace std;
int *cube(int *n)
{
	int x=(*n)*(*n)*(*n);
	int *i=&x;
	return i;
}
int * armstrong (int n)
{
	int *i=new int;
	int j,k=0;
	i=&k;
	while(n>0)
	{
		j=n%10;
		*i=*i+*cube(&j);
		n=n/10;
	}	
	return i;
}
main()
{
	int n;
	cout<<"enter any number";
	cin>>n;
	int *x=armstrong(n);
	if(*x==n)
		printf("its an armstrong number");
	else
		printf("its not an armstrong number");
}
