#include"iostream"
using namespace std;
class stack
{
	public:
		char st[6];
		static int sp;//stack
		void init(){ memset(st,0,sizeof(st)); }
		void push()
		{
			if(sp==5){cout<<"Stack is full"<<endl;}
			else
			{
				char data;
				cout<<"enter data to be pushed"<<endl;
				cin>>data;
				sp++;
				st[sp]=data;
			}
		}
		void pop()
		{
			if(sp==-1){cout<<"Stack is empty"<<endl;}
			else
			{
				st[sp]=0;
				sp--;
			}
		}
		void print()
		{
			for(int i=sp;i>=0;i--)
				cout<<st[i];
		}
		
};
int stack :: sp=-1;
main()
{
	stack p;
	int choice;
	p.init();
	printf("1 : push \n");
	printf("2 : pop \n");
	printf("3 : exit \n");
	while(1)
	{
		cout<<"enter a choice"<<endl;
		cin>>choice;
		switch (choice)
			{
				case 1 :
						p.push();
						p.print();
						break;
				case 2 :
						p.pop();
						p.print();
						break;
				case 3 :
					break;
				default :
					printf("Invalid Entry");
			}
	}
}
	
	
