#include"iostream"
using namespace std;
class parent
{
	public :
		void home () {cout<<"its parent's house"<<endl;}
		void food () {cout<<"its parents free food"<<endl;}
};
class child : public parent
{
	public :
		void home () {cout<<"its child's house"<<endl;}
		void food (int x) {cout<<"its child paid food"<<endl;}
};
main()
{
	child obj ;
	obj.home();
	obj.food(50);
	obj.parent :: home();
	obj.parent :: food();
}
