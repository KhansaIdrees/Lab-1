class Matrix {

	int **matrix;
	int size;
public:
	Matrix();
	Matrix(int);
	void initialize(int[3][3]);
	void set(int,int,int);
	int get(int,int);
	Matrix* operator + (Matrix&);
	Matrix* operator - (Matrix&);
	Matrix* operator * (Matrix&);
	~Matrix();
};