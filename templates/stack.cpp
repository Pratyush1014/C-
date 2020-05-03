#include"iostream"
#include"string.h"
#include"stdlib.h"
using namespace std;
template <class any>
class mystack
{
	public :
		any data[5];
		int sp;
		mystack(){sp = -1; memset (data,0,sizeof(data));}
		void push()
		{
			if(sp==4){cout<<"Stack is full"<<endl;return;}
			any dat = new char [ 20 ];
			cout<<"Enter data to be pushed"<<endl;
			cin>>dat;
			sp++;
			data[sp] = dat;
		}
		void pop()
		{
			if(sp==-1){cout<<"stack is empty"<<endl;return;}
			sp--;
		}
		void display()
		{
			for(int i = sp ; i>=0 ; i--)
				cout<<data[i]<<' ';
			cout<<endl;
		}
};
main()
{
	mystack<char *>obj;
	int ch;
	while(1)
	{
		cout<<"1-push\n2-pop\n3-display\n0-exit"<<endl;
		cin >> ch;
		if(ch == 1)obj.push();
		else 
		if(ch == 2)obj.pop();
		else
		if(ch == 0)exit(0);
		
		obj.display();
	}
}
