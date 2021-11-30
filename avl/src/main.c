#include "avl.h"

int main(){
    
    //valores a serem inseridos na árvore
	int arv[] = {10,2,7,5,3,9,16,4,11,1,6,23,14};
	//criação árvore e registro
	Tree *t = CreateTree();
	Record r;
	printf("IMPLEMENTAÇÃO DOS MÉTODOS DA AVL\n\n");
	printf("Árvore criada!\nÁrvore preenchida!\n");
	printf("\n");
    //inclusão dos valores iniciais na árvore
	for(int i=0; i<13; i++){
		r.key = arv[i];
		r.value = 1;
		insertTree(&t, r);
	}
    
    printf("Passando para as remoções!\n");
    printf("\n");
	printf("Elemento de valor 10 removido\n");
	r.key = 10;
	removeTree(&t, &t, r);
	printf("\n");
	printf("Elemento de valor 5 removido\n");
	r.key = 5;
	removeTree(&t, &t, r);
	printf("\n");
	printf("Elemento de valor 4 removido\n");
	r.key = 4;
	removeTree(&t, &t, r);
	printf("\n");
	printf("Elemento de valor 11 removido\n");
	r.key = 11;
	removeTree(&t, &t, r);
	printf("\n");
	printf("Elemento de valor 6 removido\n");
	r.key = 6;
	removeTree(&t, &t, r);
	


	
	
	return 0;
}