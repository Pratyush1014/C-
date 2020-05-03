#include"iostream"
using namespace std ;
main()
{
	int year ;
	cout<<"Enter year : " ;
	cin>>year ;
	/* without if and else */
	(year / 400 == 0) ?
		(
		 	cout << "This year is a leap year"<<endl ,
			cout << "Have a nice day"<<endl 
		)
	:
		(
			(year/100 == 0 ) ?
				(
					cout << "Not  a leap year"<<endl 
				)
			:
				(
					(year/4==0) ?
						(
							cout<<"Leap "<<endl
						)
					:
						(
							cout <<"Sorry "<<endl 
						)
				)
		);
}
