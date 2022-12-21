#include <unistd.h>
void ft_print_comb2(void)
{
	int a = 0;
	int b = 0;

	int c = 0;
	int d = 0;

	for(int i = 0; i < 9899; i++){
		if(d<9){d++;}
		else{
			d=0;
			if(c<9){c++;}
			else{
				c=0;
				if(b<9){b++;}
				else{
					b=0;
					if(a<9){a++;}
					else{break;}
				}
			}

		}
		if ((a*10+b) != (c*10+d)){
			if (i != 9898){
				char out[] = {a+48,b+48,32,c+48,d+48,44,32};
				write(1,&out,7);
			}
			else{
				char out[] = {a+48,b+48,32,c+48,d+48};
				write(1,&out,5);
			}
		}

	}
}
