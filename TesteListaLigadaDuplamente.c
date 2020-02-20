/*
*
* Computer Science Section
* Faculdades Doctum de Caratinga
* Caratinga, MG, Brazil
* Feb. 20, 2020
* author: Elias Goncalves
* email: falarcomelias@gmail.com
* Licensed under the Apache License, Version 2.0
*
*/

#include "ListaLigadaDuplamenteTAD.c"

int main ( void ){
	setlocale(LC_ALL, "Portuguese");
	
	/*
	 * Para melhor utilização, add nesse programa um menu para 
	 * informar ao usuário as opções que o programa implementa. 
	 * Desenvolva casos de teste para cada função do programa.
	 */

	// Criar e preencher nós a serem inseridos na lista. Dica: Pegue esses dados do usuário.
	NO *p1, *p2, *p3, *procurar;
	p1 = criar_no(10);
	p2 = criar_no(3);
	p3 = criar_no(100);
		
	// Criar a lista dupla
	LISTA_DUPLA *L;
	L = criar_lista();

	return 0;
}