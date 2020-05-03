#include"iostream"
using namespace std;
template <class any>
class stack
{
	public:
		any data[6];
		int sp;
	stack(){sp=-1;memset(data,0,sizeof(data));}
	void push()
	{
		if(sp==5){cout<<"stack is full"<<endl;}
		else{
		cout<<"enter value to be pushed";
		any x;
		cin>>x;
		sp++;
		this->data[sp]=x;
		}
	}
	void pop()
	{
		if (sp==-1){cout<<"stack is empty";}
		else{
		sp--;}
	}
	void display()
	{
		for(int i=sp;i>=0;i--)
		{
			cout<<data[i]<<" ";
		}
	}
};
main()
{
	stack <string>p;
	cout<<"1-push"<<endl<<"2-pop"<<endl<<"3-exit"<<endl;
	int ch;
	while(1){
	cout<<"enter your choice : "<<endl;

		cin>>ch;
	switch(ch)
	{
		case 1:
			p.push();
			p.display();
			break;
		case 2:
			p.pop();
			p.display();
			break;
		case 3:
			break;
		case 4:
			cout<<"invalid entry"<<endl;
	}}
}
