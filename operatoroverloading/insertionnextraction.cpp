#include"iostream"
using namespace std ;
class test 
{
	public :
	int data ;
};
ostream & operator << (ostream & cout , test & t_obj )
{
	cout<<t_obj.data<<endl ;
	return cout ;
}
istream & operator >> (istream & cin , test & t_obj )
{
	cin>>t_obj.data;
	return cin ;
}
main()
{
	test t_obj ;
	cin>>t_obj ;
	cout<<t_obj ;

}
