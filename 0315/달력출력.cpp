#include <stdio.h>
int main()
{
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int j = 0;
	int p;
	int k;
	int inputYear, inputMonth;
	int totalDay = 0;
	
	printf("년도 입력 : ");
	scanf("%d", &inputYear);
	
	printf("월 입력 : ");
	scanf("%d", &inputMonth);
	
	printf("======= %d년 %월 =======\n", inputYear, inputMonth);
	
	printf(" 일	월	화	수	목	금	토 \n");
	
	totalDay = (inputYear-1) * 365 + ((inputYear -1) / 4) - ((inputYear - 1) / 100) + ((inputYear - 1 ) / 400);
	
	if(inputYear % 4 == 0 && inputYear % 100 != 0 || inputYear % 400 == 0) {
		month[2] = 29;
	}
	
	for(j = 1; j < inputMonth ; j++ ) {
		totalDay += month[j];
	}
	
	p = (totalDay +1) %7;
	
	for(k = 0; k < p; k++){
		printf("	");
	}
	
	for (k = 1; k <= month[inputMonth]; k++){
		printf("3%d	", k);
		p = p +1;
		if (p %7 ==0){
			printf("\n\n");
			p = 0;
		}
	}
	
	printf("\n\n");
	
	return 0;
}
