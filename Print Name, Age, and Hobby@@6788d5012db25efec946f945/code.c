#include <stdio.h>
int main() {
    char name[25];
    int age;
    char hobby[20];
    scanf("%s %d",&name,&age);
    scanf("%s",&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);

    return 0;
}