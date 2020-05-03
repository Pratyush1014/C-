#include"iostream"
using namespace std;
class stack
{
	public :
	int size;
	int *p;
	static int c;
	stack(int size)
	{
		this->size=size;
		p=new int [this->size];
		memset(p,0,this->size*4);
	}
	void push(int data)
	{
		if(c+1==this->size){cout<<"stack is full"<<endl;}
		else{
		c++;
		this->p[c]=data;}
	}
	void pop()
	{
		if(c==-1){cout<<"stack is empty"<<endl;}
		else
		c--;
	}
	~stack()
	{
		delete []this->p;
	}
	void print()
	{
		for(int i=0;i<=c;i++)
			cout<<this->p[i]<<" ";
		cout<<endl;
	}
}; 
int stack :: c=-1;
main()
{
	stack a(4);
	a.pop();
	a.push(10);
	a.push(20);
	a.push(30);
	a.push(40);
	a.print();
	a.push(90);
	a.pop();
	a.print();
	a.push(100);
	a.print();
}
