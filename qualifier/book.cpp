#include"iostream"
using namespace std ;
struct book
{
	char * name ;
	char * author;
	mutable int price;
	mutable int page;
	mutable int edition;
};
main()
{
	const book var = {"book","author",450,234,1};
	cout<<var.name<<endl;
	cout<<var.author<<endl;
	cout<<var.price<<endl;
	cout<<var.page<<endl;
	cout<<var.edition<<endl;
	cout<<endl;
	cout<<"enter the new price"<<endl;
	cin>>var.price;
        cout<<"enter the new number of pages"<<endl;
        cin>>var.page;
        cout<<"enter the new edition"<<endl;
        cin>>var.edition;
	cout<<var.name<<endl;
        cout<<var.author<<endl;
        cout<<var.price<<endl;
        cout<<var.page<<endl;
        cout<<var.edition<<endl;
        cout<<endl;

}
