
#include <string.h>

typedef struct{
	char nome[50];
} Dados;


int i=0;

char resp[10];

 Dados dados[1];
 
 
int main(){


      printf(" \n Oh precioso, qual o nome deles: ");
         scanf("%s", &dados[i].nome );
      
    
     	
     	printf(" \n Ah... ola %s , pro precioso deixar voce sair, a charada tem que adivinhar, em letras minusculas deve digitar...", dados[i].nome );
     	printf(" \n  Sem asas volita, Sem voz ele ulula, Sem dentes mordida, Sem boca murmura. ");
        printf(" \n Quem sou eu?");
        printf(" \n");
        scanf("%s", &resp);
        
        char *str1 = "vento";  
		int ret;
		ret = strncmp(str1, resp, 5);
        
        
        if(ret==0){
        	printf(" \n  Proxima charada...");
        	printf(" \n");
        	system("pause");
        	
		}
		else{
			
			printf(" \n  Gollum lhe ataca e esmaga seu cranio nas pedras...");
			printf(" \n");
			system("pause");
			exit(0);
		}
		
			printf(" \n  Tem raizes misteriosas, Mais alta que as frondosa, Sobe, sobe e tambem desce, Mas nao cresce nem descresce. ");
        printf(" \n Quem sou eu?");
        printf(" \n");
        scanf("%s", &resp);
        
        char *str2 = "montanha";  
		int ret2;
		ret2 = strncmp(str2, resp, 8);
        
        
        if(ret2==0){
        	printf(" \n  Ultima charada... E se ele errar precioso? Se ele errar nois mata ele precioso...");
        	printf(" \n");
        	system("pause");
        	
		}
		else{
			
			printf(" \n  Gollum lhe ataca e esmaga seu cranio nas pedras...");
			printf(" \n");
			system("pause");
			exit(0);
		}
		
			printf(" \n  Caixinhas sem gonzos, tampas ou cadeado, La dentro escondido um tesouro dourado.. ");
        printf(" \n Quem sou eu?");
        printf(" \n");
        scanf("%s", &resp);
        
        char *str3 = "ovo";  
		int ret3;
		ret3 = strncmp(str3, resp, 3);
        
        
        if(ret3==0){
        	printf(" \n  Gollum deixa voce em paz na sua jornada, por enquanto...");
        	printf(" \n");
        	system("pause");
        	
		}
		else{
			
			printf(" \n  Gollum lhe ataca e esmaga seu cranio nas pedras...");
			printf(" \n");
			system("pause");
			exit(0);
		}
		
		
   printf(" \n");
   exit(0);
 }
