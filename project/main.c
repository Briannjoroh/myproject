#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  //student data
  //char studentName[20];
  int studentID;
  int studentAge;
  float studentFee;

  //printf("Enter the student Name: \n");
 // scanf("%19s",studentID);

  printf("Enter the student Id: \n");
  scanf("%d", &studentID);

  printf("Enter the student age: \n");
  scanf("%d", &studentAge);

  printf("Enter the student Fee: \n");
  scanf("%f", &studentFee);

  //printf("Name. %19s\n", studentName);
  printf("\nID. %d\n", studentID);
  printf("AGE. %d\n", studentAge);
  printf("Fee. %.2f\n", studentFee);

  return 0;
}
