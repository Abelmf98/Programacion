#include <stdio.h>

float lado1, lado2;
main(){
	//booleano a true
	while(1){
		scanf("%f", &lado1);
		scanf("%f", &lado2);
		
		if(lado1==0 && lado2==0)
			break;
			
		printf("%.1f\n", ((lado1 * lado2) / 2));
	}
	return 0;
}

