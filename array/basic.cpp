#include"iostream"
using namespace std;
main()
{
	int i,n=5;
	//int a[n]={1,2,3,4,5}; compilation error since variable sized arrays cant be initialized
	int a[5]={1,2,3,4,5};//no problem since constant sized array
	//to set default values of an undefined array we can use memset function
	/*Declaration type 1*/
	int b[7];
	for(i=0;i<7;i++)
	{
		b[i]=0;
		cout<<b[i]<<endl ;
	}
	/*declaration type 2 */
	int c[7];
	memset( c , 0, sizeof(c));
	for(i=0;i<7;i++)
	{
		cout<<c[i];
	}
}
