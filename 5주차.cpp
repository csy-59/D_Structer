#include <iostream>
using namespace std;

void main() {
	/*		//���ڿ��� ������
	int score[10] = { 10,20,30 };	//�������� 0���� �ʱ�ȭ
	//char str[10] = { 's','t','r','i','n','g' };	//���ŷο�
	//char str[10] = "String";			//""�� ��� �ڿ� \0�� ��. 
	char str[] = "This is my world";	//ũ��: 16+1(���̴� ���ڿ� + \0)
	char* ptr;

	ptr = str;
	*(ptr + 4) = '\0';					//this ������ \0�� ��! str�̳� ptr�� ��½� This�� ����(str�� ������!)
	//*(str+4) == str[4] == ptr[4] == *(ptr+4)	>> ��� 5��° ��Ҹ� ����Ŵ

	cout << score << endl;		//�迭�� ���� �ּ� ���
	for (int i = 0; i < 10; i++)		//�迭�� ��� �� ���
		cout << score[i] << endl;

	cout << str << endl;				//�迭���� ��µ�, �տ������� '\0'���� ���
	cout << ptr << endl;			//str ��°��� ����! �迭�� ����� ���ڿ� ���
	cout << ptr + 7 << ":" << str + 7 << endl;			//8��° ��Һ��� �����!
	//>> �� ���� �κп��� ũ�⸦ 6���� �����ϸ� �ڿ� �̻��� �� ����(�ڿ� \0�� ���� ������)
	/*for (int i = 0; i < 10; i++)		//�̷��Ե� ����, but ���ŷӱ� ������ ���� ���� �����
		cout << str[i] << endl;
	//>>������: �������� ���� �ݺ������� ��� ����ؾ�������, 
	//		�������� �迭�� ���� ��� �������.

	//cf.
	cout << &str << str;				//�ּ� �� �� ���
	*/

	/*		//���� �޸�
	//int score[1000000];		//��ȿ����
	int* ptr;				//int ������ ����
	int* score;
	int num;

	cout << "�л�����? ";
	cin >> num;
	//int score[num];					//����! �迭�� ������ ���� ũ�⿡ ������� ������(num�� ����)
	score = new int[num];			//���� ���� ������ �� ���� ȿ��!
	ptr = new int[num];				//(C�� malloc����) num�� ¥�� ������ �迭�� ������ ������ּ���. �׸��� �� �ּҰ��� ptr�� �ѱ�
	//int ptr[num]���� ������ �Ͱ� ���� ȿ���� ��.

	//cout << ptr << endl;			//numũ���� �迭�� ������!(�ּ� ���)

	for (int i = 0; i < num; i++)
		cin >> *(score + i);		//==score[i]

	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += score[i];

	double av = (double)sum / num;
	cout << "����� = " << av << endl;
	*/

			//����ü
	struct employ {
		char name[20];
		int year;
		int salary;
	};
	struct employ kim, jung, park;
	struct employ* ptr;

	kim = { "kim", 2010, 3000 };
	jung = { "jung", 2011, 2500 };
	park = { "park", 2009, 3400 };
	ptr = &kim;

	cout << kim.name << ":" << kim.year << endl;			//kim �ȿ� �ִ� name/year��� ���
	cout << ptr->name << ":" << ptr->year << endl;		//ptr->�� kim.�̶� ���� ����
	cout << (*ptr).name << ":" << (*ptr).year << endl;		//(*ptr)�� ptr->�� ���� ����

}