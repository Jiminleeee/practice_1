#include <stdio.h>
int main()
{
	int index, number; 		// index : �� , number : ���ϴ� ��
	
	for(index = 2; index < 10; index +=3) 
	{
		if(index !=8)		//2 ~ 7�� 
		{ 
			for(number = 1; number < 10; number++) 
			{																	// ������ ���(2 * 1 = 2	3 * 1 = 3	4 * 1 = 4...)
				printf("%d * %d = %-2d\t%d * %d = %-2d\t%d * %d = %-2d\n", 		// %-2d�� �ڸ��� ���߱� ���� 
						index, number, index*number, index+1, number, (index+1)*number, index+2, number, (index+2)*number);
			}
		
			printf("\n");
		}
		else if(index == 8)		// 8 ~ 9�� 
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
