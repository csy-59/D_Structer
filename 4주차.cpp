#include <iostream>
using namespace std;

//swap 실습
/*
void swap(int *x, int *y) {//값 교환| 포인터로 받아야 주소를 받을 수 있음!
	//(int x, int y) >> 함수 내에서만 바뀜(값만 가져오는 것)
	//(int *x, int *y) >> i,j의 주소를 가져오기 때문에 main에서도 바뀜
	int temp;
	//x주소가 가리키는 값, y주소가 가리키는 값을 바꾸는 것
	temp = *x;		
	*x = *y;
	*y = temp;
}

void main() {
	int i, j;

	i = 10;
	j = 20;
	swap(&i, &j);		//swap에 주소를 넘겨 줌

	cout << "i=" << i << endl;
	cout << "j=" << j << endl;

	/*
	int i;
	scanf("%d", i);		//i값은 바뀌지 않음
	scanf("%d", &i);		//i값의 주소를 주고, 여기에 입력해줘!( 값이 바뀜!)
	
}
*/


/*
//배열의 주소 알아보기
void main() {
	int score[10] = { 10,20,30,40,50,60,70,80,90,100 };

	cout << score << endl;	//배열 시작 주소 출력(원소값 출력 안됨!)
	cout << &score << endl;	//배열 주소 출력
	cout << &score[0] << endl;	//배열의 첫 요소 주소 출력
	//>>모두 같음!!

	//각 원소의 주소값 출력: 4씩 증가(int가 4바이트라서/double로 바꾸면 8바이트 차이남)
	for (int i = 0;i < 10;i++) {
		cout << "index = " << i << " 주소값: " << &score[i] << endl;
		//score은 배열명, 여기에 0~9까지 더함 >> 주소 값에 +함 
		//>> 바로 위 값과 같은 주소 출력
		//즉, &score[i] == score+i
		cout << score + i << endl;		//인덱스가 i인 원소의 주소
		//주소가 가리키는 값을 출력! 즉, score[i]와 같음!
		cout << *(score + i) << endl;		//인덱스가 i인 원소의 값, score과 같은 표현!!
	}

	//score += 1; score++; score--;	//에러!: score은 배열명, 포인터 변수 같은 거지만 절대 수정 불가(상수 성격)

	//실습2
	int *ptr;

	ptr = score;		//ptr = score +1 >> ptr이 score의 두번째 값의 주소를 갖게 됨.
	cout << score << endl;
	cout << ptr << endl;
	//>> 같은 값!

	for (int i = 0;i < 10;i++) {
		//각 원소의 주소를 출력하시오.
		cout << "index = " << i << " 주소값: " << &score[i] << endl;
		cout << "index = " << i << " 주소값: " << (score + i) << endl;
		cout << "index = " << i << " 주소값: " << (ptr + i) << endl;	//score과 ptr이 같은 주소이기 때문
		//각 원소의 값을 출력하시오.
		cout << "score[" << i << "] = " << score[i] << endl;
		cout << "score[" << i << "] = " << ptr[i] << endl;		//컴퓨터가 내부적으로 ptr[i] >> *(ptr+i)/score[i]>>*(score+i)로 바꾸기 때문
		cout << "score[" << i << "] = " << *(score + i) << endl;
		cout << "score[" << i << "] = " << *(ptr + i) << endl;		//score과 ptr이 같은 주소를 가리키기 때문에 가능
		cout << "score[" << i << "] = " << *(ptr++) << endl;		//ptr은 score 변수명 값을 갖고 있는 포인터 변수이기 때문에 가능
		//cout << "score[" << i << "] = " << *(score++) << endl;	//불가능! score은 상수 성격!
	}
}
*/

//
void main() {
	int score[3][4] = { {10,20,30,40}, {50, 60, 70, 80 }, { 90,100,110,120} };
	//socre[0] >> {10, 20, 30, 40} 이걸 대표하는 주소
	//score[1] >> {50, 60, 70, 80} 이걸 대표하는 주소
	//score[2] >> {90, 100, 110, 120} 이걸 대표하는 주소

	//int *ptr;			//에러! score안에는 또다른 배열이 있는 격
	int(*ptr)[4];		//이런식으로 해야지 가능함. [4] >> 이것 때문에 4짜리 배열을 가리키는 포인터 ptr이 됨!

	ptr = score;	

	//주소값 출력
	cout << score << ":" << &score << ":" << &score[0][0] << endl;	//모두가 2차원 배열의 시작주소를 가리킴
	//각 원소(1차원 배열)의 시작주소 출력: 각각 16바이트(인트 4바이트 * 4)씩 떨어져있음
	cout << score[0] << ":" << score[1] << ":" << score[2] << endl;	//서울여대로 가요!(같음)
	cout << &score[0] << ":" << &score[1] << ":" << &score[2] << endl; //서울여대 주소로 가요!(같음)
	//첫 원소(1차원 배열)의 원소들 출력
	cout << score[0][0] << ":" << score[0][1] << ":" << score[0][2] << ":" << score[0][3] << endl;
	//각 원소(1차원 배열)의 첫 원소들 출력
	cout << *score[0] << ":" << *score[1] << ":" << *score[2] << endl;
	//각 원소(1차원 배열)의 2,3,4번째 원소들 출력
	cout << *(score[0]+1) << ":" << *(score[1]+2) << ":" << *(score[2]+3) << endl;

}