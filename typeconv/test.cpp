#include"iostream"
using namespace std;
class bit ;
class byte ;
class bit 
{
	public :
	int bits ;
	bit (int data=0){cout<<"int to bits"<<endl;this->bits = data;}
	//operator byte()
	//{
	//	cout<<"Bits to bytes"<<endl;
	//	return this->bits/8;
	//}
};
class byte
{
	public :
	int bytes ;
	byte(int data=0){cout<<"int to bytes"<<endl;this->bytes=data;}
	operator bit()
	{
		cout<<"Bytes to bits"<<endl;
		return bytes*8;
	}
	byte (bit obj)
	{
		cout<<"Bits to bytes"<<endl;
		this->bytes= obj.bits/8;
	}
};
main()
{
	bit a = 12;
	byte b = 80;
	bit a1;
	byte b1;
	a1 = bit(b);
	cout<<a1.bits<<endl;
	b1 = byte(a);
	cout<<b1.bytes<<endl;
}

