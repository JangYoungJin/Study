// chapter17.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int age;//나이
	char num;//등번호
	double ta;//타율

	printf("등번호를 입력하세요 : ");
	scanf_s("%c", &num);

	printf("타율을 입력하세요 : ");
	scanf_s("%lf", &ta);

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	printf("%c번 선수의 타율은 %lf이고 나이는 %d살입니다.\n", num, ta, age);
    return 0;
}

