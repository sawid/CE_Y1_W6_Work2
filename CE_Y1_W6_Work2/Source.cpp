#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 0;
	char str[100];
	scanf("%[^\n]", str);
	while (str[i] != '\0')
	{
		if ((str[i] + 3 > 'z') && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			printf("%c", (str[i] + 3) - 26);
		}
		else if ((str[i] + 3 > 'Z' && str[i] + 3 < 'a') && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			printf("%c", (str[i] + 3) - 26);
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			printf("%c", str[i] + 3);
		}
		i++;
	}
	return 0;
}