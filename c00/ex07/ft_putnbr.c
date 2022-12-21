#include <unistd.h>
void ft_putnbr(int nb)
{
	int negative = 0;
	if(nb < 0){
		negative = 1;
		nb = nb * -1;
	}


	int digit[10] = {};
	int i = 0;
	while(nb>=10){
		digit[i] = nb % 10;
		nb = nb / 10;
		i++;
	}
	if (negative == 1){
		char out = 45;
		write(1,&out,1);
	}
	if (nb<10){
		char out = nb+48;
		write(1,&out,1);
	}
	for(int j = i-1; j >= 0; j--){
		char out = digit[j]+48;
		write(1,&out,1);
	}
}
