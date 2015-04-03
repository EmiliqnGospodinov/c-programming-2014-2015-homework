#include<stdio.h>
#include<string.h>



int main(){
	char skob[50];
	scanf("%s", skob);
	int skoblenght;
	skoblenght= strlen(skob);
	int i = 0, sb = 0, medb = 0 , bigb = 0;
	char last=skob[0];
	for(skoblenght > 0; i < skoblenght; i++){
		switch(skob[i]){
			case '(':
			sb++;
			break;
			case ')':
			sb--;
				if((last == '[') || (last == '{')){	printf("greshni skobi\n");	break;}
			break;
			case '[':
			medb++;
			break;
			case ']':
			medb--;
				if((last == '(') || (last == '{')) {	printf("greshni skobi\n");	break;}
			break;
			case '{':
			bigb++;
			break;
			case '}':
				if((last == '(') || (last == '[')){	printf("greshni skobi\n");	break;}
			bigb--;
			break;		
		}
		if((sb < 0) || (medb < 0) || (bigb < 0)){
			printf("greshni skobi }\n");
			break;
		}
		last=skob[i];
	}
	
	if((sb > 0) || (medb > 0) || (bigb > 0)){
		printf("netochen broi skobi\n");
	}

	if((sb == 0) && (medb == 0) && (bigb == 0)){
		printf("pravilni skobi\n");
	}

return 0;
}
