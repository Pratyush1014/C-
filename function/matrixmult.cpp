#include"iostream"
using namespace std;
void display ()
{
	cout<<"this is your matrix"<<endl ;
	int **p=new int * [2];
	int *q=new int [3];
	int *s=new int [3];
	p[0]=q;
	p[1]=s;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>p[i][j];
		}
	}
	for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                {
                        cout<<p[i][j]<<" ";
                }
		cout<<endl;
        }
}
main()
{
	display();
}
	
