#include <unistd.h>
void ft_print_comb(void)
{
	int a = 0;// a b et c designent les 3 chiffres du nombre
	int b = 0;
	int c = 0;
	// int sum[30] = {}; // tableau des somme des 3 chiffres (sert à être sûr que les chiffres ne se repetent pas 012 021 sera evité
	for(int i = 0; i < 788; i++){ //on itere 1000 fois pour la forme, on aurait pu s'arreter bien avant
		if(c<9){c++;} //la partie avec les if imbriqués fait passer le compteur abc de 000 à 999
		else{c=b+1;
			if(b<9){b++;}
			else{b=a+1;
				if(a<9){a++;}
			}
		}
		if (a != b && b != c && a != c){ // tres certainement superflue mais empeche les meme chiffres par exemple (011 001 110 101) 
			// int found = 0;

			if((a+b+c) == 3){
				char out[5] = { a+48,b+48,c+48,44,'\0'};
				write(1,&out,5);
			}
			else if((a+b+c)!= 24){
				char out[6] = { 32,a+48,b+48,c+48,44,'\0'};
				write(1,&out,6);
			}
			else{
				char out[5] = { 32,a+48,b+48,c+48,'\0'};
				write(1,&out,5);
				break;
			}
			
		}
	}
}