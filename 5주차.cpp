#include <iostream>
using namespace std;

void main() {
	/*		//문자열과 포인터
	int score[10] = { 10,20,30 };	//나머지는 0으로 초기화
	//char str[10] = { 's','t','r','i','n','g' };	//번거로움
	//char str[10] = "String";			//""일 경우 뒤에 \0도 들어감. 
	char str[] = "This is my world";	//크기: 16+1(보이는 문자열 + \0)
	char* ptr;

	ptr = str;
	*(ptr + 4) = '\0';					//this 다음에 \0이 들어감! str이나 ptr로 출력시 This만 나옴(str도 수정됨!)
	//*(str+4) == str[4] == ptr[4] == *(ptr+4)	>> 모두 5번째 요소를 가리킴

	cout << score << endl;		//배열의 시작 주소 출력
	for (int i = 0; i < 10; i++)		//배열의 모든 값 출력
		cout << score[i] << endl;

	cout << str << endl;				//배열값이 출력됨, 앞에서부터 '\0'까지 출력
	cout << ptr << endl;			//str 출력값과 같음! 배열에 저장된 문자열 출력
	cout << ptr + 7 << ":" << str + 7 << endl;			//8번째 요소부터 출력함!
	//>> 위 정의 부분에서 크기를 6으로 설정하면 뒤에 이상한 것 붙음(뒤에 \0이 없기 때문에)
	/*for (int i = 0; i < 10; i++)		//이렇게도 가능, but 번거롭기 때문에 위와 같이 출력함
		cout << str[i] << endl;
	//>>차이점: 숫자형일 때는 반복문으로 모두 출력해야하지만, 
	//		문자형은 배열명만 쓰면 모두 출력해줌.

	//cf.
	cout << &str << str;				//주소 후 값 출력
	*/

	/*		//동적 메모리
	//int score[1000000];		//비효율적
	int* ptr;				//int 포인터 설정
	int* score;
	int num;

	cout << "학생수는? ";
	cin >> num;
	//int score[num];					//오류! 배열을 선언할 때는 크기에 상수값이 들어가야함(num은 변수)
	score = new int[num];			//위와 같이 선언한 것 같은 효과!
	ptr = new int[num];				//(C는 malloc으로) num개 짜리 정수형 배열의 공간을 만들어주세요. 그리고 그 주소값을 ptr에 넘김
	//int ptr[num]으로 설정한 것과 같은 효과를 줌.

	//cout << ptr << endl;			//num크기의 배열이 생성됨!(주소 출력)

	for (int i = 0; i < num; i++)
		cin >> *(score + i);		//==score[i]

	int sum = 0;
	for (int i = 0; i < num; i++)
		sum += score[i];

	double av = (double)sum / num;
	cout << "평균은 = " << av << endl;
	*/

			//구조체
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

	cout << kim.name << ":" << kim.year << endl;			//kim 안에 있는 name/year요소 출력
	cout << ptr->name << ":" << ptr->year << endl;		//ptr->이 kim.이랑 같은 역할
	cout << (*ptr).name << ":" << (*ptr).year << endl;		//(*ptr)이 ptr->과 같은 역할

}