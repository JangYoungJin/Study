// chapter7.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int height = 168, weight = 48, cha = height - weight;
	
	printf("키 : %dcm\n몸무게 : %dkg\n키에서 몸무게를 뺀 값은 %d입니다.\n", height, weight, cha);
    return 0;
}

