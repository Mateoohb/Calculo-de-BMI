#include <stdio.h>

int main(){
	float peso, altura, bmi;

	//solicitar datos al usuario.
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);

	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);

	if(altura <= 0 || peso <= 0){
		printf("ERROR, los datos ingresados deben ser mayores a cero. \n");
		return 1;
	}
	//calculo del BMI
	bmi = peso / (altura * altura);

	//mostrar resultado.
	printf("\n Su indice de masa corporal es de: %.2f", bmi);

	// Mostrar tabla de referencia
    printf("\n%-10s | %s\n", "Índice", "Condición");
    printf("-----------------------------\n");
    printf("<18.5      | Bajo peso\n");
    printf("18.5 - 24.9| Normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf(">=30       | Obesidad\n");
}