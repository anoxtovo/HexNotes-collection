#include <stdio.h>
#include <string.h>

int main(){
	
	int result;
	
	char key[65]="SEVSRSwgVEhJUyBJUyBZT1VSIEtFWSA6IFEyOXVaM0poZEhWc1lYUnBiMjV6SVE";
	char pass[15]="hellocracker";
	char input[15];
	
	printf("\t\t\t-----------------------------------------------------\n\n\t\t\t[+]             Find Out The Password             [+]\n\n\t\t\t-----------------------------------------------------\n\n");
	
	printf("Password: ");
	gets(input);
	
	result = strcmp(input, pass);
	
	if (result !=0){
			printf("ERROR\n");
			getch();
	} else {
		printf("\n::: Congratulations! :::\n\nKEY: %s", key);
		getch();
	}
	
	return 0;
}
