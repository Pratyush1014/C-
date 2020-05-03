#include"iostream"
using namespace std;
struct book 
{
	public:
		char name[10];
		int price;
};
void sort(book *b,int =1);
void input ( book * b )
{ 
	cout<<"name price"<<endl;
	for(int i=0;i<5;i++)
	{
		cin >> b[i].name>>b[i].price;
	}
}
void sort(book *b,int n)
{
	int i,j;
	book temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(b[i].price>b[j].price)
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	if(n==1)
	{
		for(i=0;i<5;i++)
       		{
               		cout<< b[i].name<<b[i].price;
		}
	}
	if(n==-1)
	{
                for(i=5;i>0;i--)
                {
                        cout<< b[i].name<<b[i].price; 
                }
        }


}
void max (book *b)
{
	for(int i=0;i<5;i++)
        {
                if(b[0].price<b[i].price)
                {
                        b[0]=b[i];
                }
        }
        cout<<b[0].name<<endl;
}
main()
{
	book b[5];
	int i;
	
	input ( b ) ; 	
	max ( b );
	sort(b);
}

/* 
 * cout << 10 ; 
 *
 * cout . operator << ( 10 ) ; 	
 *
 */
