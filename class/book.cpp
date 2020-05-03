#include"iostream"
using namespace std;
class book 
{
	public:
	char *name;
	int price ;
		void set (char* n,int p)
		{
			this->name = n;
			this->price = p;
		}
		void get ()
		{
			cout<<this->name<<this->price<<endl;
		}
		friend void max (book *b);
};
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
	int n;
	cout<<"Enter the number of books" <<endl;
	cin>>n;
	book b[n];
	int i=0;
	while(i<n)
	{
		b [ i ] . name = new char [ 20 ];
		cin>>b[i].name>>b[i].price;
		b[i].set(b[i].name,b[i].price);
		b[i].get();
		i ++ ;
	}
	max ( b );
}
