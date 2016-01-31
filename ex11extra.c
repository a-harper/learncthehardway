#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv

	int i = argc;
	while(i > -1){
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

	// Let's make our own array of strings
	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};

	int num_states = 4;
	i = 0; // lel
	while(i < num_states){
		printf("state %d: %s\n", i, states[i]);
		states[i] = argv[i];
		printf("new value: %s\n", states[i]);
		i++;
	}
	return 0;
}
