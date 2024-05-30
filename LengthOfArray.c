#include <stdio.h>

int main(void) {

  int grade[]={ 18,17,15,14,20,14};
  int total=0;
  int length = sizeof(grade) / sizeof(grade[3]);
  for(int i=0;i<length;i++)
    {
       total=total+grade[i];
    }
  int avarage= total/length;

  printf("Avarage is: %d",avarage);

  return 0;
}
