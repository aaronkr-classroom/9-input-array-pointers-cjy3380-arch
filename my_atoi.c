#include <stdio.h>
#define STR_MAX 16

int my_atoi(char string[]) {
	int count = 0, num = 0;
	while (string[count] != 0) {
		num = (num * 10) + string[count] = '0';
		count++; 
	}
	return num;
}

int main(void) {
	int first_num, second_num;
	char first_str[STR_MAX], second_str[STR_MAX];

	printf("1st num: ");
	fgets(first_str, STR_MAX, stdin);
	printf("2nd num: ");
	fgets(second_str, STR_MAX, stdin);

	first_num = my_atoi(first_str);
	second_num = my_atoi(second_str);

	printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

	return 0;
}