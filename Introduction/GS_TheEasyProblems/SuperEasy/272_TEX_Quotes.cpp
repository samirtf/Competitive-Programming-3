#include <iostream>
#include <cstdio>
using namespace std;

/*
Author: Samir Trajano Feitosa
Github: https://github.com/samirtf
License: Apache 2.0

272 - TEX Quotes
Time limit: 3.000 seconds
https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=208
*/
int main() {
	
	char c;
	bool quoteFlag = true;
	while (scanf("%c", &c) != EOF) {
		if(c == '"') {
			if(quoteFlag) {
			    printf("``");
			    
			} else {
				printf("''");
			}
			quoteFlag = !quoteFlag;
		} else {
		    printf("%c", c);	
		}
		
	}
	return 0;
}


