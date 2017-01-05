#include<stdio.h>
#include<conio.h>
#include<string.h>
struct users{
 char username[20];
 char password[20];
}userOne;

//login example function
void login() {
   int choice;
   char username[20];
   char password[20];
   printf("Welcome to login screen\n");

   //reading username and password from user

   printf("Enter your details\n");

   printf("Username:");
   scanf("%s",username);
   printf("Password:");
   scanf("%s",password);


   //check whether the username and password is correct
   if(strcmp(username,userOne.username)==0 &&strcmp(password,userOne.password)==0){
	printf("login successfull");
   }else{
	printf("login failed\n");
	printf("press 1 to try again 0 to exit\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==1){
		main();
	}

   }

   /*wrong way
   if(username==userOne.username && password == userOne.password)
   */
}

int main() {


    clrscr();

    //storing values for username and password in userOne
    strcpy(userOne.username,"dhoni");
    strcpy(userOne.password,"123");

   /*
    wrong way to set value for a string
    userOne.password ="123";
    userOne.username="kce";
   */



    //invoking login module
    login();

    getch();
    return 0;
}














