#include <stdio.h>
int main()
{
	int inputYear, inputMonth;
	int days, dayName ;
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("�⵵ �Է�: ");
	scanf("%d", &inputYear);
	
	printf("�� �Է�: ");
	scanf("%d", &inputMonth); 
	
	
	printf("================ %d�� %d�� ================\n", inputYear, inputMonth);
	 
	//1900���� �Է¹��� inputYear���� ���  �������� Ȯ�� 
	days = (inputYear - 1900) * 365+1;
	
	//���� � �ֳ�?
	for(int index = 1900; index < inputYear; index++)
	{
		//if... ���� Ȯ�� �ڵ� 
		if(((index%4==0) && (index%100 !=0)) || (index%400 ==0)){	//index�� �ؾ� ���ڰ� �þ�� 
			days++;
		}
	 } 
	
	//�� ���� ������ ��¥ ���ϱ�
	if(((inputYear%4==0) && (inputYear%100 !=0)) || (inputYear%400 ==0)){
		month[2] = 29;
	}
	
	//inputMonth�� ���ϱ� 
	for(int index= 1; index < inputMonth; index++){
		days += month[index];
	}
	
	
	
	
	
	//���� ����?
	dayName = days % 7; 	//0~6(�� ~��)���� ���� 
	
	 
	printf("%5s %5s %5s %5s %5s %5s %5s\n", "��", "��", "ȭ", "��", "��", "��", "��");
	
	//�տ� ���� ���
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
