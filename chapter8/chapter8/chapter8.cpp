// chapter8.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int num;
	printf("정수값 하나를 입력하세요 :");
	scanf_s("%d", &num);
	printf("입력 받은 정수값은 %d입니다.\n", num);
    return 0;
}

