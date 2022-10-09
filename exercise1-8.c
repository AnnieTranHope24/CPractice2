#include <stdio.h>
/*count blanks, tabs, and newlinesin input*/
main(){
	int c, bl, t, nl;
	bl = t = nl= 0;
	while((c = getchar()) != EOF){
		if(c == ' ' ){
			++bl;
		}else if(c == '\t'){
			++t;
		}else if(c == '\n'){
			++nl;
		}
	}
	printf("%d %d %d", bl, t, nl);
	
	
}
