#include <stdio.h>
int main()
{
	int index = 1;
	
	while(index <= 100)
	{
		if(index % 3 == 0){
			printf("%d => %d�� ���\n", index, index);
		}
		
		else{
			printf("%d\n", index);
		}
		
		index++;
	} 
	
	return 0;
}
