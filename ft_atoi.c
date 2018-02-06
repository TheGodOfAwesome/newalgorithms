#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int neg;
	int num;

	
	i = 0;
	neg = 1;
	num = 0;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if(str[i] == '\n' && str[i] == '\t' && str[i] == '\v')
			i++;
		if(str[i] >= 48 && str[i] <= 57)
		{
			num  = num * 10 + str[i] - '0';
		} 
		i++;
	}
	return(num * neg);
}

int main()
{
	int  num;
	char *str;

	num = 0;
	str = "1234";
	num = ft_atoi(str);
	printf("Num: %d", num);
}
