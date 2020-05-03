#include"iostream"
using namespace std;
main()
{
	int *n = new int;
	//cout<<"enter any number"<<endl;
	//cin>>*n;
	*n = 5;
	int *r=new int;
	*r=1;
	while(*n>0)
	{
		*r = *r * *n;
		(*n)--;//*n-- means you are going on decreasing the address of the variable which leads to segmentation fault
	}
	printf("%d",*r);
	delete n;
	delete r;
}
