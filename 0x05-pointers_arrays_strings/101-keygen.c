#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 10

void generate_password(char *password, int length)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charset_size = sizeof(charset) - 1;

for (int i = 0; i < length; i++)
{
int key = rand() % charset_size;
password[i] = charset[key];
}
password[length] = '\0';
}
int main(void)
{
char password[PASSWORD_LENGTH + 1];
/*seeds the rand num generator*/
srand(time(0));
/*generates random password*/
generate_password(password, PASSWORD_LENGTH);
/*Prints the generated password*/
printf("Generated password: %s\n", password);

return(0);
}
