#include"iostream"
using namespace std;
struct student 
{
	int roll;
	char name[50];
};
student input(int n)
{
	struct student p;
	cin>>p.roll>>p.name;
	return p;
}
void display(student *p,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<p[i].roll<<" "<<p[i].name<<endl;
	}
}
student sort(student *p,int n)
{
	int i;
	student t;
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p[i].roll>p[j].roll)
				{
					t=p[i];
					p[i]=p[j];
					p[j]=t;
				}
		}
	}
	return *p;
}
main()
{
	int n;
	cout<<"enter the number of entries"<<endl;
	cin>>n;
	student *p=(student *)new int [n];
	student *q=(student *)new int [n];
	int i=0;
	while(i<n)
	{
		*(p+i)=input(i);
		i++;
	}
	display(p,n);
	*q=sort(p,n);
	display(q,n);
}

/* 
 * cout << 10 ; 
 *
 * cout . operator << ( 10 ) ; 	
 */
