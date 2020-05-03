#include"iostream"
using namespace std;
struct comp
{
	int real;
	int img;
};
void sum(struct comp p,struct comp q)
{
	cout<<p.real+q.real<<" + i"<<p.img+q.img<<endl;
}
main()
{
	struct comp p={10,12};
	struct comp q={12,67};
	sum(p,q);
}
