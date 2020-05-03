#include"iostream"
using namespace std;
class circle
{
	public:
	float cx;
	float cy;
	float rad;
	circle (float x,float y,float r)
	{
		this->cx=x;
		this->cy=y;
		this->rad=r;
	}
	bool operator ==(circle that)
	{
		return this->rad==that.rad ? 1 : 0;
	}
};
main()
{
	circle a(0,0,25);
	circle b(1,4,25);
	if(a==b)
	{
		cout<<"Identical"<<endl;
	}
	else cout<<"NOT"<<endl;
}
