#include <iostream>
using namespace std;

void main() {
	int i, j;
	double d;
	int *ptr1 = NULL; // int* ptr1;
	double *d_ptr;

	i = 10;
	ptr1 = &i;
	*ptr1 = 20;	//ptr1�� ����Ű�� ���� ���µ� �ű⿡ �Է��Ѵٰ� �߱� ������ ����(11�� �� �ּ���)

	//ptr1 = &d;  //| ptr1�� int�� �ּҰ��� ������ �����߱� ������ ����!
	d_ptr = &d;	//d_ptr�� double�� �ּҰ��� ����� �����߱� ������ ����

	//���������� �ٲ�(20����)
	cout << i << endl;

}