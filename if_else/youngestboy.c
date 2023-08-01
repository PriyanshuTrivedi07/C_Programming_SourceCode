#include<stdio.h>

int main()
{
    int ram_age , shyam_age , ajay_age;
    printf("Enter the age of Ram : ");
    scanf("%d", &ram_age);
    printf("Enter the age of shyam : ");
    scanf("%d", &shyam_age);
    printf("Enter the age of ajay : ");
    scanf("%d", &ajay_age);

    if(ram_age < shyam_age && ram_age < ajay_age){
        printf("Ram is youngest");
    }
    else if(shyam_age < ram_age && shyam_age < ajay_age){
        printf("Shyam is youngest");
    }
    else if(ajay_age < shyam_age && ajay_age < ram_age){
        printf("Ajay is youngest");
    }
    else{
        printf("All are of equal age.");

    }
    return 0;
}