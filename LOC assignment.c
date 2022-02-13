// Q1
#include<stdio.h>
int main()
{
        char a[40],b[40],c[100],d[30];
        
        printf("\nName:");
        scanf("%s",a);
         printf("\nRegd.no.:");
        scanf("%s",b);
        printf("\nBranch:");
        scanf("%s",c);
        printf("\nHobbies:");
        scanf("%s",d);
        printf("Name: %s\n",a);
        printf("\nRegd.no.: %d\n",b);
        printf("Branch: %s\n",c);
        printf("\nHobbies: %s\n",d);
        return 0;
        
}
      

        // Q2
#include<stdio.h>
int main()
{
    int a,b;
    printf("Please enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("\n %d is the maximum number ",a);
    }
     else if(b>a)
    {
        printf("\n %d is the maximum number",b);
    }
     else
    {
    printf("both numbers are same");
    }

    return 0;
}


     //Q3
#include<stdio.h>
int main()
{
    int n,a;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    
    switch (a%2)
         {
        case 0 :
            printf("%d is even",a);
            break;
        case 1:
            printf("%d is odd",a);
            break;
        }
    return 0;
}
     

     //Q 4
#include<stdio.h>
int main()
{
    float a,b;
    int n;
    printf("1:Addision");
    printf("2:Subtractionn");
    printf("3:Multiplication");
    printf("4:Division");
    printf(" enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("enter your choice:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\n addision of %f and %f is %f",a,b,a+b);
        case 2:
            printf("\n subtraction of %f and %f is %f",a,b,a-b);
        case 3:
            printf("\n multiplication of %f and %f is %f",a,b,a*b);
        case 4: 
            printf("\n division  of %f and %f is %f",a,b,a/b);
        default:
                printf("invalid choice");
    }
    return 0;
}
       


      // Q5
#include<stdio.h>
int main()
{
    float r,d,c,area,PI=3.14;
    printf("enter the radius of circle: \n");
    scanf("%f",&r);
    d=r*2;
    printf("\n Diameter is %f",d);
    
    c=2*PI*r;
    printf("\n Cicumference is %f",c);
    
    area=PI*r*r;
    printf("\n Area is %f",area);

    return 0;
} 

     
