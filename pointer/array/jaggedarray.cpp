#include"iostream"
using namespace std;
main()
{
	int *p1=new int ;
	int *p2=new int[2] ;
	int *p3=new int[3] ;
	int *p4=new int[4] ;
	int *p5=new int[5] ;
	int **q=new int * [5];
	q[0]=p1;
	q[1]=p2;
	q[2]=p3;
	q[3]=p4;
	q[4]=p5;
 	q[0][0]=1;
	q[1][0]=2;
	q[1][1]=3;
	q[2][0]=4;
	q[2][1]=5;
	q[2][2]=6;
	q[3][0]=7;
	q[3][1]=8;
	q[3][2]=9;
	q[3][3]=10;
	q[4][0]=11;
	q[4][1]=12;
	q[4][2]=13;
	q[4][3]=14;
	q[4][4]=15;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==0 && j==1) break;
			if(i==1 && j==2) break;
			if(i==2 && j==3) break;
			if(i==3 && j==4) break;
			if(i==4 && j==5) break;

				cout<<q[i][j]<<" ";
		}
		cout<<endl;
	}
}
			
