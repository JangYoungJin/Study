// chapter18.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char age;//문자 변수의 선언
	printf("나이를 입력하세요 : ");//입력 안내 메시지 출력
	scanf_s("%d", &age);//나이를 입력
	printf("당신의 10년 전 나이는 %d살입니다.\n", age - 10);//10년 전 나이를 출력
    return 0;
}

