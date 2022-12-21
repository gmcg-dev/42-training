#include <unistd.h>
void ft_print_comb(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int sum[30] = {};
	for(int i = 0; i < 1000; i++){
		if(c<9){c++;}
		else{c=0;
			if(b<9){b++;}
			else{b=0;
				if(a<9){a++;}
			}
		}
		if (a != b && b != c && a != c){
			int found = 0;

			for(int j = 0; j < 30; j++){
				if((a+b+c) == sum[j]){
					found = 1;
				}
			}
			if (found == 0){
			for(int j = 0; j < 30; j++){
				if(sum[j] == 0){
					sum[j] = (a+b+c);
					break;
				}
			}
			if(i == 11){
				char out[5] = { a+48,b+48,c+48,44,'\0'};
				write(1,&out,5);
			}
			else if(i != 788){
				char out[6] = { 32,a+48,b+48,c+48,44,'\0'};
				write(1,&out,6);
			}
			else{
				char out[5] = { 32,a+48,b+48,c+48,'\0'};
				write(1,&out,5);
			}
		}
	}
}
}
