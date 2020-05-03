#include"iostream"
using namespace std;
class list
{
	public :
	int size;
	int *p;
	list(int s)
	{
		this->size=s;
		p=new int [this->size];
		memset(p,0,sizeof(this->size * 4));
	}
	void print()
	{
		for(int i=0;i<this->size;i++)
		cout<<this->p[i]<<endl;
	}		
	void insert (int ,int);
	~list()
	{
		delete []this->p;
	}
};
void (list :: *q)(int ,int)=& list :: insert;   
void (list :: *r)()=& list :: print;   
void list :: insert (int pos,int data)
{
	this->p[pos]=data;
}
main()
{
	list a(5);
	list *b=a;
	(a.*q)(0,10);
	(a.*q)(1,20);
	(a.*q)(2,30);
	(a.*q)(3,40);
	(a.*q)(3,50);
	(b->*q)();
}
