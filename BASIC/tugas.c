//MICHELLA MARIA ANJANI

#include <stdio.h>

int main() {
 
	char ss[] = "10 %% 3 = 1\n";
	char str[] = "Welcome to Binus everyone \n"; 
	
	//the output will be the same if the number of '%' is the same
	printf("print only 1 '%%' from the string ss\n");//%% = print %, applies multiply
	printf(ss);//10 % 3 = 1, print only 1 '%' from the string ss
	
	//the output will be different even if the number of '%' is the same
	printf("print all the % '%%%%' from the string ss\n");//%%%% = print %%, applies multiply
	printf("%s", ss);//10 % 3 = 1, print all the % '%%' from the string ss
	
	//the output will be the same becouse the string str doesn't consist '%'
	printf(str);//Welcome to Binus everyone
	printf("%s", str);//Welcome to Binus everyone

    return 0;//end
}

