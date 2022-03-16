#include <stdio.h>
int main()
{
	int inputYear, inputMonth;
	int days, dayName ;
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("년도 입력: ");
	scanf("%d", &inputYear);
	
	printf("월 입력: ");
	scanf("%d", &inputMonth); 
	
	
	printf("================ %d년 %d월 ================\n", inputYear, inputMonth);
	 
	//1900부터 입력받은 inputYear까지 몇년  지났는지 확인 
	days = (inputYear - 1900) * 365+1;
	
	//윤년 몇개 있나?
	for(int index = 1900; index < inputYear; index++)
	{
		//if... 윤년 확인 코딩 
		if(((index%4==0) && (index%100 !=0)) || (index%400 ==0)){	//index로 해야 숫자가 늘어난다 
			days++;
		}
	 } 
	
	//각 달의 마지막 날짜 구하기
	if(((inputYear%4==0) && (inputYear%100 !=0)) || (inputYear%400 ==0)){
		month[2] = 29;
	}
	
	//inputMonth에 더하기 
	for(int index= 1; index < inputMonth; index++){
		days += month[index];
	}
	
	
	
	
	
	//무슨 요일?
	dayName = days % 7; 	//0~6(일 ~토)까지 나옴 
	
	 
	printf("%5s %5s %5s %5s %5s %5s %5s\n", "일", "월", "화", "수", "목", "금", "토");
	
	//앞에 공백 출력
	for(int index=0; index < dayName; index++){
		printf("%5s ", "");
	} 
	
	for(int index = 1, enter = dayName+1 ; index <= 31; index++, enter++)
	{
		printf("%5d ", index);
		if(enter%7 == 0){
			printf("\n");
		}
	}
	
	return 0;
}
