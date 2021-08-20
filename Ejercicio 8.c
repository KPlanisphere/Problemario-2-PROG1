#include <stdio.h>
int main (){
	int hrs;
	float precio_hrs, total_sin, total_con, precio_extra, IVA;
	
	printf("Introduza el valor monetario de una hora laboral: \n");
	scanf("%f",&precio_hrs);
	
	printf("\nIntroduzca las horas trabajadas en la semana: \n");
	scanf("%d",&hrs);
	
	if (hrs <= 35){
		printf("\nUsted ha trabajado las horas reglamentarias de trabajo.\n");
		
				total_sin = hrs * precio_hrs;
		
		if (total_sin <= 600){
			printf("\nEst%c libre de impuestos. Su salario neto es de:$%.2f\n",160,total_sin);
		}
		if (total_sin >= 601 && total_sin <= 1000){
			IVA = total_sin * .20;
			total_sin -= IVA;
			printf("\nSe le ha deducido el 20 por ciento de impuestos. Su salario neto es de:$%.2f\n",total_sin);
		}
		if (total_sin > 1000){
			IVA = total_sin * .30;
			total_sin -= IVA;	
			printf("\nSe le ha deducido el 30 por ciento de impuestos. Su salario neto es de:$%.2f\n",total_sin);
		}
	}
	else if (hrs >= 36){
		printf("\nMaravilloso, ha trabajado horas extra y ser%c recompensado.\n",160);
		
		precio_extra = precio_hrs * 0.5;
		total_sin = hrs * precio_hrs + precio_extra;
		
		if (total_sin <= 600){
			printf("\nEst%c libre de impuestos. Su salario neto es de:$%.2f\n",160,total_sin);
		}
		if (total_sin >= 601 && total_sin <= 1000){
			IVA = total_sin * .20;
			total_sin -= IVA;
			printf("\nSe le ha deducido el 20 por ciento de impuestos. Su salario neto es de:$%.2f\n",total_sin);
		}
		if (total_sin > 1000){
			IVA = total_sin * .30;
			total_sin -= IVA;	
			printf("\nSe le ha deducido el 30 por ciento de impuestos. Su salario neto es de:$%.2f\n",total_sin);
		}
	}
	system ("pause");
	return 0;
}