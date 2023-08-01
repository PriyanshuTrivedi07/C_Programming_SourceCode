//create a structure type 'book' with name , price and number of pages as its attributes
#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[22];
        float price;
        int noOfpages;
    }a,b,c;
    
    // a.name[22] = "secret seven"; //this will throw an error
    strcpy(a.name,"Secret Seven");
    a.price = 343.34;
    a.noOfpages = 190;

    strcpy(b.name,"Time Management");
    b.price = 443.34;
    b.noOfpages = 290;

    printf("Rs %0.2f\n",a.price);
    printf("%d\n",a.noOfpages);
    printf("%s\n",a.name);


    printf("Rs %0.2f\n",b.price);
    printf("%d\n",b.noOfpages);
    printf("%s\n",b.name);
    return 0 ;
}