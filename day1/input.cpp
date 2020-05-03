#include"iostream"
using namespace std;
main()
{
	int roll;
	cout<<"enter any roll"<<endl ;
	cin>>roll;
	cout<<"your entered roll is"<<roll<<endl ;
	cout<<"enter maarks of the following subs"<<endl ;
	cout<<"maths"<<endl ;
	int math;
	cin>>math;
	cout<<"phy"<<endl ;
	int phy;
	cin>>phy;
	cout<<"chem"<<endl ;
	int chem;
	cin>>chem;
	int total;
	total=math+phy+chem;
	cout<<"your total is"<<total<<endl ;
	float per;
	per=total*100/300;
	cout<<"your percentage is"<<per<<endl ;
	if(per>=60)
		cout<<"pass"<<endl ;
	else
		cout<<"fail"<<endl ;
}
