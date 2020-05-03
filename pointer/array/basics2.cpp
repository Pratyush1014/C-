#include"iostream"
using namespace std;
main()
{
	int a[5];
	for (int i=0;i<5;i++)
	{
		*(a+i) = i;
		cout<<*(a+i)<<endl;
	}
	int *b=(int *)malloc(20);
	for (int i=0;i<5;i++)
        {
                *(b+i) = i;
                cout<<*(b+i)<<endl;
        }
	free (b);
	int *c=new int [5];
	 for (int i=0;i<5;i++)
        {
                *(c+i) = i;
                cout<<*(c+i)<<endl;
        }
	delete []c;
}

	
