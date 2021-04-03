#include <stdio.h>
#include <stdlib.h>
#include "filaprio.h"


int main() {
	int x;
	
	FilaPrio* fp;
	x = insere_FilaPrio(fp, "Branca", 10);
	x = remove_FilaPrio(fp);
	x = consulta_FilaPrio(fp, nome);
}
