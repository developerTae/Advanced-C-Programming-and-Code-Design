#include<stdio.h>

int main(void)
{
	int num1, num2;
	char ham;

	printf("���� �Է�(��: 10+20) : ");
	scanf("%d %c %d", &num1, &ham, &num2);

	switch (ham)
	{
	case '+':
		printf("%d %c %d=%d", num1, ham, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d=%d", num1, ham, num2, num1 - num2);
	case '*':
		printf("%d %c %d=%d", num1, ham, num2, num1 * num2);
	case '/':
		if (num2 == 0)
		{
			printf("Error:������ �Է� ����!!!");
			break;
		}
		else
			printf("%d %c %d=%d", num1, ham, num2, num1 / num2);
		break;
	default:
		printf("��Ȯ�� ������ �Է����ֽʽÿ�!");
	}
	return 0;
}
