// chapter11.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int V = 150, B = 60,total;
	float S, SI;

	total = V+B;
	S = total * 0.09;
	SI = total - S;

	printf("실 입금액은 : %f\n", SI);


    return 0;
}

