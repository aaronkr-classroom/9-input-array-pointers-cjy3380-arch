#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_CH 100
#define NUM_CH MAX_CH/2

int numcheck(char ch) {
	return (int)ch >= '0' && ch <= '9';

}

int check0p(char op) {
	return op == '+' || op == '-' || op == '*' || op == '/';

}

int main(void) {
	char input[MAX_CH],
		numStr1[NUM_CH], numStr2[NUM_CH],
		operator = '\0';
	
	int i = 0,
		j = 0;
	printf("Enter a simple math formula(12+34):\n");
	fgets(input, sizeof(input), stdin);


	while (input[i] != '\0' && numcheck(input[i])) {
		numStr1[j++] = input[i++];

	}
	numStr1[j] = '\0';
	if (check0p(input[i])) {
		operator=input[i++];
	}
	else {
		printf("Error:invalid operator\n");
		return 1;
	}

	j = 0;
	while (input[i] != '\0' && numcheck(input[i])) {
		numStr2[j++] = input[i++];

	}
	numStr2[j] = '\0';

	int num1 = atoi(numStr1);
	int num2 = atoi(numStr2);
	int result = 0;

	switch (operator) {
	case'+':
		result = num1 + num2;
		break;
	case'-':
		result = num1 - num2;
		break;
	case'*':
		result = num1 * num2;
		break;
	case'/':
		if(num2>0)result = num1 / num2;
		else {
			printf("error:division by 0\n");
		}
		break;
	default:
		printf("error:invalid operator. use + - * / \n");
		return 1;
	}

	printf("result:%d %c %d = %d", num1, operator,num2, result);
	
	return 0;
}