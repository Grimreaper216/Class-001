#pragma once //한번만 컴파일 하도록 해준다.

/*
캡슐화
객체의 내부 구현부와 외부 사용자 부분을 분리
내부는 은닉하여 가릴수있고
사용자 부분만 노출하여 사용에 편리하도록 함
*/ 

/*
클래스 이름: Counter
-숫자를 1씩 증가시킬수 있다.(입력값 : X 출력값 : X)
-0으로 초기화를 할수있다 (입력값 : X 출력값 : X)
-현재 카운팅한 값을 알려준다 (입력값 : X 출력값 : count)
*/
class Counter
{
	int Count;

	
public:
	Counter() : count{ 0 }// ()사용 가능하지만 {}를 사용하면 명확한 값을 가용해야 하기 때문에 안전하다
	{
		count = 0;
	}
	int count; //카운팅 하는 값을 저장
	// count를 1씩 증가.
	void counting()
	{
		count++;
	}
	// count 가 0으로 초기화.
	void reset()
	{
		count = 0;
	}
	//count 값을 알려준다.
	int getCount()
	{
		return count;
	}
public :// 모든곳에서 접근
private://접근불가능
protected: //
	
};