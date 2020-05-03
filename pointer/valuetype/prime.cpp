#include"iostream"
using namespace std;
main()
{
	int * n = new int;
	int * c = new int;
	* c =0;
	cout<<"enter any number"<<endl ;
	cin>>* n;
	int * i = new int;
	for(*i=1;*i<=*n;(*i)++)
	{
		if((*n)%(*i)==0)
			(*c)++;
	}
	if (*c == 2)
		printf("the entered number is prime");
	else
		printf("the number isnt prime");
}
