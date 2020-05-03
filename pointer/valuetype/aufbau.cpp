#include"iostream"
using namespace std;
main()
{
	int * n = new int;
	cout<<"enter the series limit"<<endl;
	cin>>* n;
	int *c=new int;
	*c=1;
	int *i= new int;
	int *j=new int ;
	for(*i=1;*i<=*n;(*i)++)
	{
		if( * i % 2 !=0)
		{
			for (*j=1 ; *j <= *i ;(*j) ++)
			{ 
				cout<<* c<<" ";
				(*c)++;
			}
		*c=*c+*i;
		}
		else
		{
			for (*j =1 ; *j <= *i ; (*j)++)
			{
				cout<<* c<<" ";
				(*c)--;
			}
			*c = *c +*i+1;
	
		}
		cout<<endl;
	}
	delete n;
	delete i;
	delete j;
	delete c;
}
	
