#include <stdio.h>
#define IN 1
#define OUT 0
main(){
	int c, state, temp;
	state = IN;
	while((c=getchar())!=EOF){
		if((c == '/')||(c=='*')){
			state = OUT;
			temp = c;
		}
		if( ((c=='\n')&& (temp == '/')) || ((c == '/') && (temp == '*'))){
			state = IN;
			temp = 0;
			c=0;
		}
		else if(state==IN){
			putchar(c);
		}
	}
}