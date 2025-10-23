#include <iostream>
int main(){
	float nota1, nota2, nota3, nota4;
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	float media = ((nota1*2.0) + (nota2*3.0) + (nota3*4.0) + (nota4*1.0))/10.0;
	printf("Media: %.1f\n", media);
	if (media>=7.0){
		printf("Aluno aprovado.\n");
		}
		else if (media<5.0){
			printf("Aluno reprovado.\n");
		}
			else {
				printf("Aluno em exame.\n");
				
				float nota_exame;
					scanf("%f", &nota_exame);
					printf("Nota do exame: %.1f\n", nota_exame);
					
					float media_final = (media + nota_exame)/2;
					if (media_final >= 5.0){
						printf("Aluno aprovado.\n");
					} 
					else{
						printf("Aluno reprovado.\n");
					}
					printf ("Media final: %.1f\n", media_final);
			}		
}
