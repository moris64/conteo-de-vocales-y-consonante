#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char cadena[20]; 
	int vocales=0; 
	int consonante=0;
	int i;
		
	printf("\ningrese una cadena.\n");
	gets(cadena);	

		for (i=0;i<20;i++){
				switch(cadena[i]){
				case'a':
				case'e':
				case'i':
				case'o':	
				case'u': vocales++;	

				}
	
		}
		
				
		for (i=0;i<20;i++){
				switch(cadena[i]){	
				case'b':
				case'c':	
				case'd':
				case'f':	
				case'g':
				case'h':
				case'j':
				case'k':
				case'l':
				case'm':
				case'n':	
				case'ñ':
				case'p':
				case'q':
				case'r':
				case's':
				case't':
				case'v':
				case'w':
				case'x':
				case'y':
				case'z':consonante=consonante+1;
		
				}			
	
		}
	printf("\nvocales %d.\nconsonantes %d.",vocales,consonante);
		
		
	return 0;
}
