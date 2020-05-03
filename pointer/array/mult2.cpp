#include"iostream"
using namespace std;
main()
{
	cout<<"enter the size of first array"<<endl ;
	int i,j,k,l;
	cin>>i>>j;
	cout<<i<<"x"<<j<<endl;
	cout<<"enter the size of second array"<<endl ;
	cin>>k>>l;
	cout<<k<<"x"<<l<<endl;
	int f1[i][j];
	int f2[k][l];
	if(k!=j)
	{
		cout<<"matrices arent conformable for multiplication"<<endl ;
		exit(0);
	}
	else
	{
		int a,b,c;
		for(a=0;a<i;a++)
		{
			for(b=0;b<j;b++)
			{
				cin>>f1[a][b];
			}
		}
		cout<<endl;
	 	for(a=0;a<k;a++)
                {
                        for(int b=0;b<l;b++)
                        {
                                cin>>f2[a][b];
                        }
                }
		for(a=0;a<i;a++)
                {
                        for(b=0;b<j;b++)
                        {
                                cout<<f1[a][b]<<" ";
                        }
			cout<<endl;
                }
		cout<<endl;
                for(a=0;a<k;a++)
                {
                        for(b=0;b<l;b++)
                        {
                                cout<<f2[a][b]<<" ";
                        }
			cout<<endl;
                }
		cout<<endl;
		int m[i][l];
		memset(m,0,sizeof( m ));
		for(a=0;a<i;a++)
                {
                        for(b=0;b<l;b++)
                        {
				for(c=0;c<k;c++)
					m[a][b]=m[a][b] + f1[a][c]*f2[c][b];
			}
		}
		 for(a=0;a<i;a++)
                {
                        for(b=0;b<j;b++)
                        {
                                cout<<m[a][b]<<" ";
                        }
                        cout<<endl;
                }
	}
}
