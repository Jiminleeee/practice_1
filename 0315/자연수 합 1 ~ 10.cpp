#include <stdio.h>
int main()
{
	int index, number; 		// index : 단 , number : 곱하는 수
	
	for(index = 2; index < 10; index +=3) 
	{
		if(index !=8)		//2 ~ 7단 
		{ 
			for(number = 1; number < 10; number++) 
			{																	// 구구단 출력(2 * 1 = 2	3 * 1 = 3	4 * 1 = 4...)
				printf("%d * %d = %-2d\t%d * %d = %-2d\t%d * %d = %-2d\n", 		// %-2d는 자리를 맞추기 위함 
						index, number, index*number, index+1, number, (index+1)*number, index+2, number, (index+2)*number);
			}
		
			printf("\n");
		}
		else if(index == 8)		// 8 ~ 9단 
		{
			for(number = 1; number < 10; number++)
			{	
				printf("%d * %d = %-2d\t%d * %d = %-2d\n", index, number, index*number, (index+1), number, (index+1)*number);	
			}	
			printf("\n");
		}
	}
	
		
	 
	
	return 0;	
} 
