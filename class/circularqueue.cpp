#include"iostream"
using namespace std;
class cqueue
{
	char cqu[6];
	int front;
	int rear;
	public:
		void init(){  memset(cqu,0,6);front=0;rear=0;}
		void push()
		{
			if((rear+1)%6==0){cout<<"queue is full"<<endl;return;}
			else
			{
				char data;
				cout<<"Enter element to be pushed \n";
				cin>>data;
				cqu[rear]=data;
				rear=(rear+1)%6;
			}
		}
		void pop()
		{
			if(front==rear){cout<<"Queue is empty"<<endl;
				front=0;
				rear =0;
				return;}
			else
			{
				front=(front+1)%6;
			}
		}
		void print()
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<cqu[i];
			}
			cout<<endl;
		}
};
main()
{
	cqueue c;
	int ch;
	c.init();
	while(1)
	{
		cout<<"1->push"<<endl<<"2->pop"<<endl<<"3->exit"<<endl;
		cin>>ch;
		switch (ch)
		{
			case 1:
				c.push();
				c.print();
				break;
			case 2:
				c.pop();
				c.print();
				break;
			case 3:
				exit(0);
			default:
				cout<<"Invalid Entry"<<endl;
		}
	}
}
