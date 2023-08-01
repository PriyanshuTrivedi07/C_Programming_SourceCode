#include<stdio.h>
#include<stdio.h>
typedef struct cricketer cricketer;
int main()
{
    struct cricketer
    {
        char fname[22];
        char lname[22];
        int age;
        int no_of_tests;
        float avrg_runs;
    };

    struct cricketer arr[20];
    for(int i=0;i<3;i++){
        scanf("%s",arr[i].fname);
        scanf("%s",arr[i].lname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].no_of_tests);
        scanf("%f",&arr[i].avrg_runs);
    }
    for(int i=0;i<3;i++){
        printf("Name : %s %s\n",arr[i].fname,arr[i].lname);
        printf("Age : %d\n",arr[i].age);
        printf("Matches : %d\n",arr[i].no_of_tests);
        printf("Avg : %0.1f\n\n",arr[i].avrg_runs);
    }
    
    return 0 ;
}