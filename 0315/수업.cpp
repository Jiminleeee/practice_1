#include <stdio.h>
int main()
{
	int inputYear, inputMonth, inputMonthEND;		// inputMonthEND : �Է� ���� ������ �� 
	int totalDate, dayName;							// totalDate : 1900�� 1������ �Է� �������� ��¥�� �� , dayName : ���� 
	const int END_1 = 31, END_3 = 31, END_4 = 30, END_5 = 31, END_6 = 30;					// �� ���� ��¥���� ����� �޴´� 
	const int END_7 = 31, END_8 = 31, END_9 = 30, END_10 = 31, END_11 = 30, END_12 = 31;
	int END_2 = 28;		// ������ �ֱ� ������ ����� ���� �ʰ� ������ ����, ����� 28���̹Ƿ� 28�Ϸ� �켱 ���� 
	
	
	for(;;)			// ���ѷ��� 
	{
		END_2 = 28; 		// ���� ������ ������ ���� ������ �� �� �����Ƿ� ������ END_2�� �ѹ� �� ������ 
		
		printf("�⵵�� �Է��ϼ���  : ");
		scanf("%d", &inputYear);
		
		printf("���� �Է��ϼ��� : ");
		scanf("%d", &inputMonth);
		
		if(inputYear ==0 && inputMonth ==0) {
			printf("����"); 
			break;									// 0�� 0�� �Է� �� ���� 
		} 
		
		//1900����� �Է� ���� inputYear���� �󸶳� �������� Ȯ��
		totalDate = (inputYear - 1900) * 365;
		
		//������ �� �� �ִ°�?
		for(int index = 1900; index < inputYear; index++)
		{
			if(((index % 4 == 0) && (index % 100 != 0) || (index % 400 == 0))) 		//index�� �ؾ� �ϳ��� ���� 
			{
				totalDate++; 		// ������ �ִ� �ش� 366�� 
			}
		} 
		
		if(((inputYear % 4 == 0) && (inputYear % 100 != 0) || (inputYear % 400 == 0)))
		{
			END_2 = 29;		//������ ��� 2���� 29�ϱ���  
		}
		
		//������ ��¥ ���ϱ�
		switch(inputMonth)
		{		//case�� ���� �������鼭 break�� ���� ������ ��� ���� 
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
		
		//���� ���ϱ�
		dayName = (totalDate+1) % 7;		// 0 ~ 6 (�� ~ ��)
		
		printf("%5s %5s %5s %5s %5s %5s %5s\n", "��", "��", "ȭ", "��", "��", "��", "��");
		
		//����  ���� ���
		for(int index=0; index < dayName; index++)
		{		
			printf("%5s ", "");
		}  
		
		// �� ���� ������ ��¥ ���ϱ� 
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
		
		//������� �������� �� �ٲ� 
		for(int index = 1, enter = dayName+1 ; index <= inputMonthEND;index++, enter++)	//dayName�� 1�� ���� 7�� �������� ���� 
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
