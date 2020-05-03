#include"iostream"
using namespace std;
class queue
{
	public:
		char qu[6];
		static int front;
		static int rear;
		void init(){memset(qu,0,6);}
		void push ()
		{
			if(rear==5){cout<<"queue is full"<<endl;
					return;			}
			else	
			{
				char data;
				cout<<"Enter element to be pushed"<<endl;
				cin>>data;
				rear++;
				qu[rear]=data;
			}
		}
		void pop ()
		{
			if(front>rear){cout<<"queue is empty"<<endl;
					return;		}
			else
			{
				front++;
			}
		}
		void print()
		{
			for(int i=front;i<=rear;i++) cout<<qu[i];
			cout<<endl;
		}
};
int queue :: front=0;
int queue :: rear=-1;
main()
{
	int choice;
	queue q;
	q.init();
	while(1)
	{
		cout<<"1 -> push"<<endl;
		cout<<"2 -> pop"<<endl;
		cout<<"3 -> exit"<<endl;
		cin>>choice;
		switch (choice)
		{
			case 1:
				q.push();
				q.print();
				break;
			case 2:
				q.pop();
				q.print();
				break;
			case 3:
				exit(0);
			default:
				cout<<"invalid entry"<<endl;
		}
	}
}
