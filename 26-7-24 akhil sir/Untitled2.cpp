#include <stdio.h>

int main() {
    int a;
    printf("Enter A : ");
    scanf("%d",&a);

 int b;
    printf("Enter B : ");
    scanf("%d",&b);

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf(" a = %d\n",a);
    printf(" a = %d\n",b);

  
}
