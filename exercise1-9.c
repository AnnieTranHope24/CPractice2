#include <stdio.h>
#define IN 1
#define OUT 0
main(){
	int c, state;
	state = OUT;
	while((c=getchar()) !=EOF){
		if(c!=' '){
			putchar(c);
			state = IN;
		}
		else if(c == ' ' && state == IN){
			putchar(c);
			state = OUT;			
		}
	}
}
