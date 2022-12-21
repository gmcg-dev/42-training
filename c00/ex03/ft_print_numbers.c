#include <unistd.h>
void ft_print_numbers(void)
{
	char chiffres[10] = {0,1,2,3,4,5,6,7,8,9};
	char out = 0;
	for(int i = 0;i < 10;i++){
		out = chiffres[i] + 48;
		write(1,&out,1);
	}
}
