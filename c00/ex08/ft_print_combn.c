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
int nombre_de_chiffres(int x) {
    if (x == 0) return 1;
    int n = 0;
    while (x != 0) {
        x /= 10;
        n++;
    }
    return n;
}
void ft_print_combn(int n)
{
	int digit = n;
	int nombre_max = 1;
	while(n>0){
		nombre_max = nombre_max * 10;
		n--;
	}
	for(int i = 1; i < nombre_max;i++){
		if (i != 1){		
		char out = 32;
		write(1,&out,1);
		}
		for (int j = 0; j < (digit - nombre_de_chiffres(i));j++){
			char out = 48;
			write(1,&out,1);
		}
		ft_putnbr(i);
		if (i != nombre_max -1){		
		char out = 44;
		write(1,&out,1);
		}
	}
}
