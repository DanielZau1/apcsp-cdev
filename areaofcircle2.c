#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}


// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaofCircle(float radius)
{
  float area = M_PI * radius * radius;
  
  return area;
}



int main(int argc, char* argv[]) 
{

  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  char input[256];
  float change;
  float start = 5.2;
  float end = 7.2;
  int reps = 3;

  printf("first radius: \n");
while(1)
{
	fgets(input, 256, stdin);
	if((sscanf(input, "%f", &start) == 1) && (start >= 0)) break;


	printf("Not a valid radius");
}

  printf("first radius is now %f\n", start);


printf("second radius: \n");
while(1)
{
        fgets(input, 256, stdin);
        if((sscanf(input, "%f", &end) == 1) && (end > start)) break;
        printf("Not a valid radius");
}

  printf("second radius is now %f\n", end);


  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);


  printf("calculating area of circle starting at %f, and ending at %f\n", start, end);
  
  change = (end - start) / 2;

  // add your code below to call areaOfCircle function with values between
  // start and end
  for (int i = 0; i < reps; i++)
  {

  	printf("%f is the area when the radius is %f\n", areaofCircle(start), start);
  	
  	start = start + change;
  }


  
}
