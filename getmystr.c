
#include <stdio.h>

#define MAX_CH 100

int getmystr(char buffer[], int limit) {
	int i = 0;
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		if (i < limit - 1) {
			buffer[i++] = (char)ch;
		}
		else {
			while ((ch = getchar()) != '\n' && getchar() != EOF);
			buffer[i] = '\0';
			return 0;
		}
	}
	for (i < limit; i++;) {
		buffer[i] = getchar();
		if (buffer[i] == '\n') {
			buffer[i] = 0;
			return 1;
		}
		buffer[i] = 0;
		rewind(stdin);
	}
	return 0;
	
}

int main(void) {
	char input_str[MAX_CH];
	int state;

	printf("Enter text:");
	state = getmystr(input_str, MAX_CH);

	if (state)printf("input:%s\n", MAX_CH);
	else printf("input:%s->out of range\n", input_str);

	return 0;
}