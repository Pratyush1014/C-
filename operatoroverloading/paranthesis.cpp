#include"iostream"
using namespace std ;
class array
{
      public :
	int data1 ;
	int data2 ;
	int data3 ;
	int data4 ;
	array(int d1 ,int d2 , int d3 ,int d4)
	{
		this->data1 = d1 ;
		this->data2 = d2 ;
		this->data3 = d3 ;
		this->data4 = d4 ;
	}
	int operator ()	(int d)
	{
		if (d==1)
		{
			cout<<this->data1 ;
		}
		else
		if (d==2)
		{
			cout<<this->data2 ;
		}
		else
		if (d==3)
		{
			cout<<this->data3 ;
		}
		else
		if (d==4)
		{
			cout<<this->data4 ;
		}
		else
		{
			cout<<"Invalid argument"<<endl;
		}
	}
};
main()
{
	array a(1,2,3,4) ;
	for (int i = 1 ; i<=5 ;i++)
		a(i);

}
