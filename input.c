#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	char studentName[20];
	int studentID;
	char studentClass[10];
	char parentPhoneNumber[15];

}student;

int main()
{
	student std;
	
	int choice;

	FILE * file;

	printf("\n **** INPUT SYSTEM ****\n\n");

	file = fopen("studentfile.txt", "a");

	if(file == NULL)
	{
		printf("Error opening file");

		return 1;

	}

	do
	{
		printf("\nEnter your Name: ");
		scanf("%19s",std.studentName);

		printf("\nEnter your ID: ");
		scanf("%d", &std.studentID);

		printf("\nEnter your class: ");
		scanf("%9s",std.studentClass);

		printf("\nEnter your parent phone number: ");
		scanf("%14s",std.parentPhoneNumber);

		printf("\n\n---- USER INFORMATION -----\n\n");

		printf("Name. %s\n", std.studentName);
		printf("ID. %d\n", std.studentID);
		printf("Class. %s\n", std.studentClass);
		printf("Phone Number. %s\n", std.parentPhoneNumber);

		printf("Do you want to enter another student? (y/n): ");
		scanf("%c", &choice);

	}while(choice == 'y' || choice == 'Y');

	fclose(file);

	printf("Exiting the system \n");

	return 0;

}	






