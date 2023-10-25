#include <stdio.h>
#include <stdlib.h>

struct user
{
	char *name;
	char *username;
	char *email;
	char *phone1;
	char *address1;
	char *address2;
	char *city;
	char *state;
	int *zip;
};

struct user *new_user(char *name, char *username, char *email, char *phone1, char *address1, char *address2, char *city, char *state, int *zip)
{
	struct user *user;
	
}
