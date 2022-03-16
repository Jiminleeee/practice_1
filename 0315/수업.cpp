#include <stdio.h>
int main()
{
	int inputYear, inputMonth, inputMonthEND;		// inputMonthEND : 입력 월의 마지막 날 
	int totalDate, dayName;							// totalDate : 1900년 1월부터 입력 월까지의 날짜의 합 , dayName : 요일 
	const int END_1 = 31, END_3 = 31, END_4 = 30, END_5 = 31, END_6 = 30;					// 각 달의 날짜들을 상수로 받는다 
	const int END_7 = 31, END_8 = 31, END_9 = 30, END_10 = 31, END_11 = 30, END_12 = 31;
	int END_2 = 28;		// 윤년이 있기 때문에 상수로 하지 않고 변수로 지정, 평년은 28일이므로 28일로 우선 지정 
	
	
	for(;;)			// 무한루프 
	{
		END_2 = 28; 		// 무한 루프를 돌리다 보면 오류가 날 수 있으므로 변수인 END_2를 한번 더 적어줌 
		
		printf("년도를 입력하세요  : ");
		scanf("%d", &inputYear);
		
		printf("월을 입력하세요 : ");
		scanf("%d", &inputMonth);
		
		if(inputYear ==0 && inputMonth ==0) {
			printf("종료"); 
			break;									// 0년 0월 입력 시 종료 
		} 
		
		//1900년부터 입력 받은 inputYear까지 얼마나 지났는지 확인
		totalDate = (inputYear - 1900) * 365;
		
		//윤년은 몇 개 있는가?
		for(int index = 1900; index < inputYear; index++)
		{
			if(((index % 4 == 0) && (index % 100 != 0) || (index % 400 == 0))) 		//index를 해야 하나씩 증가 
			{
				totalDate++; 		// 윤년이 있는 해는 366일 
			}
		} 
		
		if(((inputYear % 4 == 0) && (inputYear % 100 != 0) || (inputYear % 400 == 0)))
		{
			END_2 = 29;		//윤년인 경우 2월은 29일까지  
		}
		
		//월별로 날짜 더하기
		switch(inputMonth)
		{		//case를 따라 내려가면서 break를 만날 때까지 모두 수행 
			case 12:
				totalDate += END_11;
			case 11:
				totalDate += END_10;
			case 10:
				totalDate += END_9;
			case 9:
				totalDate += END_8;
			case 8:
				totalDate += END_7;
			case 7:
				totalDate += END_6;
			case 6:
				totalDate += END_5;
			case 5:
				totalDate += END_4;
			case 4:
				totalDate += END_3;
			case 3:
				totalDate += END_2;
			case 2:
				totalDate += END_1;
			break;
		} 
		
		//요일 구하기
		dayName = (totalDate+1) % 7;		// 0 ~ 6 (일 ~ 토)
		
		printf("%5s %5s %5s %5s %5s %5s %5s\n", "일", "월", "화", "수", "목", "금", "토");
		
		//앞의  공백 출력
		for(int index=0; index < dayName; index++)
		{		
			printf("%5s ", "");
		}  
		
		// 각 달의 마지막 날짜 구하기 
		switch(inputMonth)	
		{ 
			case 12:
				inputMonthEND = END_12;
				break;
			case 11:
				inputMonthEND = END_11;
				break;
			case 10:
				inputMonthEND = END_10;
				break;
			case 9:
				inputMonthEND = END_9;
				break;
			case 8:
				inputMonthEND = END_8;
				break;
			case 7:
				inputMonthEND = END_7;
				break;
			case 6:
				inputMonthEND = END_6;
				break;
			case 5:
				inputMonthEND = END_5;
				break;
			case 4:
				inputMonthEND = END_4;
				break;
			case 3:
				inputMonthEND = END_3;
				break;
			case 2:
				inputMonthEND = END_2;
				break;
			case 1:
				inputMonthEND = END_1;
				break;
		} 
		
		//토요일을 기준으로 줄 바꿈 
		for(int index = 1, enter = dayName+1 ; index <= inputMonthEND;index++, enter++)	//dayName에 1을 더해 7을 기준으로 만든 
		{
			printf("%5d ", index);
			
			if(enter%7 == 0)
			{
				printf("\n");
			}
		}
		
		printf("\n"); 
		 
	}
	
	return 0;
}
