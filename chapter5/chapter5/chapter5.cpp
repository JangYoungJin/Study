// chapter5.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int height, days;

	height = 0;
	days = 0;

	//height = height + 55;

	for (int height = 55; height < 300;)//chapter1예제 응용 for문을 이용함
	{
		height = height - 13;
		days = days + 1;
		height = height + 55;
	}
	printf("며칠 걸렸습니까?\n");
	printf("%d일 입니다.\n", days);
	

	
    return 0;
}

