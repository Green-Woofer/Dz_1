#include <stdint.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	short flag = 0;
	int32_t num;
	scanf_s("%ui", &num);

	

	//num <<= 1;
	for (int i = 0; i < 32; i++)
	{
		if (num & 0x80000000) {
			printf("1");
			flag = 1;
		}
		else if (flag!=0)
			printf("0");
		num <<= 1;
	}
}
