#include <stdio.h>
struct person{
    int age;
    float salary;
};

int main(){
    struct person person[4];
    int i;
    for(i=0;i<4;i++){
        printf("Enter person %d age:");
        scanf("%d",&person[i].age);
        printf("Enter person %d salary:");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<4;i++){
        printf(" person %d age:%d",person[i].age);
        
        printf("person %d salary:%f",person[i].salary);
        
    }
    
    
    return 0;


}