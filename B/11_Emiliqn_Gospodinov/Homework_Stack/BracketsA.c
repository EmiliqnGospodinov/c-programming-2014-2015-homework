#include<stdio.h>
#include<string.h>



int main(){
	char skob[50];
	scanf("%s", skob);
	int skoblenght;
	skoblenght= strlen(skob);
	int i = 0, br = 0;
	for(skoblenght > 0; i < skoblenght; i++){
		if(skob[i] == '{'){
			br++;		
		}
		if(skob[i] == '}'){
			br--;		
		}
		if(br < 0){
			printf("greshni skobi }\n");
			break;
		}

	}
	
	if(br > 0){
		printf("netochen broi skobi\n");
	}

	if(br == 0){
		printf("pravilni skobi\n");
	}

return 0;
}
