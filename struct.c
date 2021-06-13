#include<stdio.h>
#include<stdlib.h>
struct student{
    int id;
    char name[30];
    float marks;
    };

int main(){
    struct student *std;
    std=(struct student*)malloc(sizeof(struct student));
    if(std==NULL){
        printf("Overflow");
    }else{
    printf("Enter your Deatails:");
    scanf("%d",&std->id);
    scanf("%s",std->name);
    scanf("%f",&std->marks);

    printf("Details are:");
    printf("\n%d",std->id);
    printf("\n%s",std->name);
    printf("\n%.2f",std->marks);
    }
    return 0;
}
