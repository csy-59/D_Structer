#include <iostream>
using namespace std;

void main() {
	int i, j;
	double d;
	int *ptr1 = NULL; // int* ptr1;
	double *d_ptr;

	i = 10;
	ptr1 = &i;
	*ptr1 = 20;	//ptr1이 가리키는 값이 없는데 거기에 입력한다고 했기 때문에 오류(11번 줄 주석시)

	//ptr1 = &d;  //| ptr1이 int형 주소값을 갖도록 설정했기 때문에 오류!
	d_ptr = &d;	//d_ptr이 double형 주소값을 갇고록 설정했기 때문에 가능

	//간접적으로 바뀜(20으로)
	cout << i << endl;

}