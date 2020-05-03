#include"iostream"
using namespace std;
main()
{
	int x,y,z;
	cout<<"enter three numbers of your choice"<<endl ;
	cin>>x>>y>>z;
	if (x>y)
	{
		if(x>z)
			cout<<"the largest number is"<< x<<endl ;
		else
			cout<<"the largest number is"<< z<<endl ;
	}
	else
	{
		if(y>z)
			cout<<"the largest number is"<< y<<endl ;
		else
			cout<<"the largest number is"<< z<<endl ;
	}
	/* using ternary structure */
	(x>y)?
	(
		(x>z)?
			cout<<"the greatest number is"<< x<<endl 
		:
			cout<<"the greatest number is"<< z<<endl 
	)
	:
	(
		(y>z)?
			cout<<"the greatest number is"<< y<<endl
		:
			cout<<"the greatest number is"<< z<<endl 
	);
}
