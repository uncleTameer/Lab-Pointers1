#include <stdio.h>
void inputThree(int *a,int *b,int *c);
void sortThree(int *a,int *b,int*c);
void sortTwo(int *a,int *b);


int main(){
int a,b,c;
while (1){
inputThree(&a,&b,&c);
if (a==0&&b==0&&c==0){
printf("finish.\n");
    break;
}
sortThree(&a,&b,&c);
printf("%d then %d then %d\n",a,b,c);
}
return 0;
}


void inputThree(int *a,int*b,int*c){
    printf("Enter 3 numbers:\n");
    printf("Enter number 1: ");
    scanf("%d", a);
    printf("Enter number 2: ");
    scanf("%d", b);
    printf("Enter number 3: ");
    scanf("%d", c);
}
void sortTwo(int *a,int *b){
 if(*a>*b){
int temp =*a;
*a=*b;
*b=temp;
    }
}
void sortThree(int *a,int *b,int*c){
    sortTwo(a,b);
    sortTwo(a,c);
    sortTwo(b,c);
}
