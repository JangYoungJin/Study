// chapter9.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a, b;

	printf("두 정수값을 입력하세요 :");
	scanf_s("%d%d", &a, &b);
	printf("두 정수의 합은 %d입니다.", a + b);
    return 0;
}

