#include <limits.h>
#include "Matrix.h"
#include "gtest-1.7.0/include/gtest/gtest.h"

TEST(Test1, Add_two_matrices) {

	Matrix A(3), B(3), *C;
	int input1[3][3] = {{1,3,2},{2,5,4},{6,7,1}};
	int input2[3][3] = {{1,7,5},{3,5,5},{-1,4,-2}};
	int output[3][3] = {{2,10,7},{5,10,9},{5,11,-1}};
	A.initialize(input1);
	B.initialize(input2);
	C = A + B;
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			EXPECT_EQ(C->get(i,j), output[i][j]);
}

TEST(Test2, Multiply_two_matrices) {

	Matrix A(3), B(3), *C;
	int input1[3][3] = {{1,3,2},{2,5,4},{6,7,1}};
	int input2[3][3] = {{1,7,5},{3,5,5},{-1,4,-2}};
	int output[3][3] = {{8,30,16},{13,55,27},{26,81,63}};
	A.initialize(input1);
	B.initialize(input2);
	C = A * B;
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			EXPECT_EQ(C->get(i,j), output[i][j]);
}

/*TEST(Test3, Multiply_and_Add) {

	Matrix A(3), B(3), C(3), D;
	int input1[][] = {{1,3,2},{2,5,4},{6,7,1}};
	int input2[][] = {{1,7,5},{3,5,5},{-1,4,-2}};
	int input3[][] = {{-5,7,1},{9,-9,0},{3,2,-1}};
	int output[][] = {{27,35,8},{66,42,10},{63,60,19}};
	A.initialize(input1);
	B.initialize(input2);
	C.initialize(input3);
	D = A * B + C;
	for(int i=0; i<3; i++)
		for(int j=0; j<3; j++)
			EXPECT_EQ(D.get(i,j), output[i][j]);
}
*/






