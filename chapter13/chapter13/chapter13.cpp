// chapter13.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int gi,sa;//기본요금,사용량
	double kw, total, tax, last;//kw당 사용요금, 전체요금, 세금, 최종사용요금
	
	printf("전기 사용량을 입력하세요(kw) :");//전기사용량을 입력할 부분
	scanf_s("%d", &sa);

	gi = 660;//기본요금 660원
	kw = 88.5;//kw당 사용요금 88.5원
	total = gi + (sa*kw);//기본요금 + 사용량*kw당 사용요금
	tax = total * 0.09;//세금은 전체요금의 9%
	last = total + tax;//최종사용요금

	//printf("전기 사용량을 입력하세요(kw) :");   실수 한 곳
	//scanf_s("%d", &sa);

	printf("전기 사용 요금은 %lf원 입니다.\n",last);//출력
    return 0;
}

