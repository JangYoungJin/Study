// chapter10.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int a;
	printf("숫자를 입력하세요 :");
	scanf_s("%d", &a);
	printf("입력된 숫자는 %d입니다.\n", a);
    return 0;
}

