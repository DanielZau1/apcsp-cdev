#include <stdio.h>
#include <string.h>


// student structure
//struct Student...
struct Student{
	char firstName[50];
	char lastName[50];
	int age;
	int studentId;
}
void printStudent(struct Student* student)
{
  printf("First name:%s\n", student->firstName);
  printf("Last name:%s\n", student->lastName);
  printf("Enter age: %d\n", student->age);
  printf("Enter id: %d\n", student->studentId);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
  printf("---- student ----\n", );
  printf("Student: %s %s\n",student->firstName, student->lastName);
  printf("age: %d\n", student->age");
  printf("id: %d\n", student->studentId");

}


int main()
{

  // an array of students
  //xxx students;
  char students[20][50];
  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    struct student

      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
