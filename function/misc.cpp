#include"iostream"
using namespace std;
main()
{
	int a[]={1,5,5,0,2,8};
	int b[]={1,5,5,0,2,8};
	int y,x;
	for(int i=0;i<6;i++)
		{
			for(int h=0;h<i+1;h++)
			{
				for(int c=h;c<i+1;c++)
				{
					cout<<b[c]<<" ";
				}
				x=0;
				for(int c=h;c<i+1;c++)
                                {
                                        x=x+b[c];
                                }
				cout<<"sum is"<<x<<endl;
				if(x==10)
				{
					for(int g=h;g<i+1;g++)
					{
						cout<<b[g];
					}
					cout<<endl;
				}
				cout<<endl;
			}
			cout<<endl;
		}
}

