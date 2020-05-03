#include"iostream"
using namespace std;
class military
{
	public :
		char * name ;
		int age ;	
		float height ;
		float weight ;
		military(char * n,int a,float h,float w)
		{
			name = n;
			age = a;
			height = h;
			weight = w;
			validate();
		}
		void validate()
		{
			if(age<25 or age >35)throw "Invalid age";
			else 
			if(height<6)throw "Invalid height";
			else 
			if(weight <50 or weight >70)throw "Invalid wt";
			storeinDB();
		}
		void storeinDB()
		{
			cout<<"stored in DB"<<endl;
		}
};
main()
{
	try {military candidate ("alpha",36,6,55);}
	catch (const char * msg) {cout<<"Rejected due to "<<msg<<endl;}
	catch (...){cout<<"There's something wrong"<<endl;}
}
