#include <stdio.h>
#include <string.h>

int main()
{
	size_t size;

	printf("%s\n", "Welcome to ipRC");

	char* nick = NULL;
	bool nickEntered = false;
	printf("%s", "Enter your nickname: ");

	while(!nickEntered)
	{
		getline(&nick, &size, stdin);
		strlen(nick) == 1 ? printf("Please, enter your nickname: ") : nickEntered = true;
	}

	char* server = NULL;
	bool serverEntered = false;
	printf("%s", "Enter server url: ");
	while(!serverEntered)
	{
		getline(&server, &size, stdin);
		strlen(server) == 1 ? printf("Please, enter server url: ") : serverEntered = true;
	}

	char* channel = NULL;
	bool channelEntered = false;
	printf("%s", "Enter channel name: ");
	while(!channelEntered) 
	{
		getline(&channel, &size, stdin);
		strlen(channel) == 1 ? printf("Pleasa, enter channel name: ") : channelEntered = true;
	}


	printf("Goodbye!");
	return 0;
}
