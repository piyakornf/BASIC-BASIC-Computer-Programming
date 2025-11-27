
#include <stdio.h>

int main() {
  int num1, num2, operationCode, result;
  
   if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        return 1;
    }
  
  switch(operationCode) {
     case 1:
        result = num1 + num2;
        printf("%d\n", result);
        break;
     case 2:
        result = num1 - num2;
        printf("%d\n", result);
        break;
    case 3:
        result = num1 * num2;
        printf("%d\n", result);
        break;
    case 4:
       if(num2 ==0){
           printf("Cannot divide by zero\n");
       } else{
           result = num1 / num2;
           printf("%d\n", result);
       }
       break;
       
    default:
        printf("Invalid Operation\n");
        break;
  }
    return 0;
}