/*C program to read and display a username*/
# include <stdio.h>
int main()
{
	char user[10];
	printf("Enter the user_name: ");
	scanf("%s", user);
	printf("You entered username: %s", user);
	return 0;
}

