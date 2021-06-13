#include <stdio.h>
#include <stdlib.h>
struct emp
{
    int eno;
    char name[30];
    float esal;
};
int main()
{
    struct emp *ptr;
    ptr = (struct emp *) malloc(sizeof(struct emp));
    if(ptr == NULL)
    {
        printf("out of memory");
    }
    else
    {
        printf("Enter the emp details of employee as Number, Name and Salary respectively:\n");
        scanf("%d",&ptr-> eno);
        scanf("%s",ptr-> name);
        scanf("%f",&ptr-> esal);

        printf("Entered details");
        printf("%d\t%s\t%f",ptr-> eno,ptr-> name,ptr-> esal);
        return 0;
    }
    return 0;
}
