// chapter16.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	char blood_type;//문자 변수의 선언
	printf("혈액형을 입력하세요 : ");//입력 안내 메시지 출력
	scanf_s("%c", &blood_type);//혈액형의 입력
	printf("당신의 혈액형은 %c형입니다. \n", blood_type);//혈액형 출력
    return 0;
}

