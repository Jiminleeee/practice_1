#include <stdio.h>
int main()
{
	int index = 1;
	
	while(index <= 100)
	{
		if(index % 3 == 0){
			printf("%d => %dÀÇ ¹è¼ö\n", index, index);
		}
		
		else{
			printf("%d\n", index);
		}
		
		index++;
	} 
	
	return 0;
}
