#include <unistd.h>
#include <stdio.h>
void ft_print_comb(void)
{
	struct resultat {
		int a;
		int b;
		int c;
	};
	struct resultat compteur[1000] = {};
	int j = 0;
	for(int i = 0; i < 1000; i++){
		j++;
		if (i>1){compteur[j] = compteur[i];}
		if(compteur[i].c<9){compteur[j].c++;} //la partie avec les if imbriqués fait passer le compteur abc de 000 à 999
		else{compteur[j].c=0;
			if(compteur[i].b<9){compteur[j].b++;}
			else{compteur[j].b=0;
				if(compteur[i].a<9){compteur[j].a++;}
			}
		}

		if (compteur[i].a != compteur[i].b && compteur[i].b != compteur[i].c && compteur[i].a != compteur[i].c){ 
			int found = 0;
			for (int k = 0;k < 1000;k++){
				printf("boucle found");
				if (compteur[i].a == compteur[k].a || compteur[i].b == compteur[k].a || compteur[i].c == compteur[k].a){found = 1;}
				if (compteur[i].a == compteur[k].b || compteur[i].b == compteur[k].b || compteur[i].c == compteur[k].b){found = 1;}
				if (compteur[i].a == compteur[k].c || compteur[i].b == compteur[k].c || compteur[i].c == compteur[k].c){found = 1;}
			}
			if (found == 0){
				if(i == 11){
					char out[5] = { compteur[i].a+48,compteur[i].b+48,compteur[i].c+48,44,'\0'};
					write(1,&out,5);
				}
				else if(i != 790){
					char out[6] = { 32,compteur[i].a+48,compteur[i].b+48,compteur[i].c+48,44,'\0'};
					write(1,&out,6);
				}
				else{
					char out[5] = { 32,compteur[i].a+48,compteur[i].b+48,compteur[i].c+48,'\0'};
					write(1,&out,5);
					break;
				}
			}	
		}
		else{
			printf("raz");
			compteur[i].a = 0;
			compteur[i].b = 0;
			compteur[i].c = 0;
		}
		
		
	}
}
