#include <stdio.h>
int main()
{
	char word;
		
	
	do
 	{
 		printf("문자를 입력하세요:");
 		scanf("%c", &word);
 		
	} while(word != 'q');
	
 	printf("종료\n");
	
	
	return 0;
}
