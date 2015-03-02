#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	Matrix A(3), B(3), *C;
	int input1[3][3] = {{1,3,2},{2,5,4},{6,7,1}};
	int input2[3][3] = {{1,7,5},{3,5,5},{-1,4,-2}};
	int output[3][3] = {{2,10,7},{5,10,9},{5,11,-1}};
	
    A.initialize(input1);
	B.initialize(input2);
	C = A * B;
	
    for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
			cout<<C->get(i,j)<<"\t\t";
		cout<<endl;
	}
	char x;
	cin>>x;
	return 0;
}