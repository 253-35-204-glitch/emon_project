#include <stdio.h>

struct person{
    int age;
    float salary;
};

int main(){

    struct person person[3];
    int i;

    for(i=0;i<3;i++){
        printf("Enter person %d age: ",i+1);
        scanf("%d",&person[i].age);

        printf("Enter person %d salary: ",i+1);
        scanf("%f",&person[i].salary);
    }

    for(i=0;i<4;i++){
        printf("Person %d age: %d\n",i+1,person[i].age);
        printf("Person %d salary: %.2f\n",i+1,person[i].salary);
    }



    
    return 0;
}