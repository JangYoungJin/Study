// chapter12.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int bonbong, bonus, total;//본봉, 보너스,총수입액을 저장할 변수
	double tax, real_income;//세금과 실수입액을 저장할 변수

	bonbong = 150;//본봉은 150만원
	bonus = 60; // 보너스는 60만원

	total = bonbong + bonus;//총수입액은 본봉 +보너스
	tax = total * 0.09;//세금은 총수입액의 9%
	real_income = total - tax;//실수입액은 총수입액 - 세금

	printf("이몽룡의 실수입액은 %lf만원입니다.\n", real_income);//출력
    return 0;
}

