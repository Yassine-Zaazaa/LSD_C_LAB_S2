#include"header.h"

int main(int ac, char **av)
{
	if(ac >= 2)
	{
		char * string = av[1];
		list L = string_to_list(strlen(string), string);
		print_list(L);
		palindrome_list(L);
	}
	return 0;
}
