#include <stdio.h>
#include <string.h>

int main()
{

	char* input = NULL;

	size_t size;
	printf("Welcome to ipRC!\n");

	int nickEntered = 0;
	printf("Enter your nickname: \n");
	while(nickEntered == 0)
	{
		getline(&input, &size, stdin);

		printf("Your nikcname: "); 
		printf("%s\n", input);
		int n_len = strlen(input);
		if(n_len == 1) 
		{
			printf("Please, enter your nickname!");
		}
		else
		{
			nickEntered = 1;
		}

	 	printf("Your nick length: %d\n", n_len);
	}
	printf("hello!;");
//	while(getline(&nick, &size, stdin)) {
//		printf("Please enter your nick! \n");
//	}
	printf("Goodbye!");
	return 0;
}
