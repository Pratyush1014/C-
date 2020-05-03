#include"iostream"
#include"stdlib.h"
using namespace std ;
template <class any>
class stack
{
	public :
	any data[5];
	int sp;
	stack(){memset(data,0,sizeof(data));sp = -1;}
	void push()
	{
		if(sp==4){cout<<"Stack is full";return;}
		any data;
		data = new char[10];
		cout<<"Enter value to push into the stack ";
		cin>>data;
		sp ++;
		this->data[sp]=data;
	}
	void pop()
	{
		if (sp == -1){cout<<"The stack is empty";return;}
		data[sp]=0;
		sp--;
	}
	void display()
	{
		for (int i=sp;i>=0;i--)
		{
			cout<<data[i]<<' ';
		}
		cout<<endl;
	}
};
main()
{
	stack <char *>st ;
	while(1)
	{
		cout<<"1-push 2-pop 3-exit"<<endl;
		int n;
		cin>>n;
		switch (n) 
		{
			case 1 :
				st.push();
				st.display();
				break;
			case 2 :
				st.pop();
				st.display();
				break;
			case 3 :
				exit(0);
			default :
				cout<<"Entered option is invalid"<<endl;
		}
	}
}
