#include <iostream>
using namespace std;

//전역 변수: 기본으로 0으로 초기화됨
//하지만 가독성을 위해 int a = 0;으로 하는게 좋음
int a;
void ttt() { //함수도 사용되기 전에 정의 되어야함.
	cout << a * 10 << endl;
}

void main() {
	/*
	//초기화 필요성: B, C 값을 초기화 해야함.
	int A, B, C;

	//초기화>> B = 0; C = 0; || int B = 0, C = 0;
	A = B + C;
	cout << A << endl;
	*/

	/*
	//배열의 초기화
	int score[3] = { 10,20,30 };
	int second[5] = { }; //모든 원소가 0으로 초기화
	int third[] = { 1,2,3,4,5,6,7 }; //컴퓨터가  자동을 7개라고 생각
	*/

	//2차원 배열
	//int score[2][4] = { {1, 2, 3, 4}, {5,6,7,8} }; //4개 짜리 1차원 배열 2개가 있는 것.

	/*
	//3차원 배열
	int score[2][3][4] = { { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} }, 
							{ {13,14,15,16}, {17,18,19,20}, {21,22,23,24} } }; 
							// 2개 짜리 배열인데, 그 요소가 2차원 배열
	*/

	/*
	//전역 변수 초기화
	// 여기에 int a;가 있으면 이것이 전역 변수보다 우선됨.
	cout << a << endl;
	ttt();
	*/



}