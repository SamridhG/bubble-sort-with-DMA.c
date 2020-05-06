#include<stdio.h> //header file stdio.h include for using function printf &scanf
#include<stdlib.h>//header file stdlib.h include for using malloc Which is dynamic memory allocation
#include<math.h>// header file math.h include for using to resolve mathmatical error
int main()
{
    int i,j,number_of_elements;
    printf("Enter the number of elements:");// number of element means size which allocate to exe file during user input
    scanf("%d",&number_of_elements);
    printf("Enter your elements\n");
    int *p=(int *)malloc(number_of_elements*sizeof(int));// malloc return addres that why we used here pointer
    for(i=0;i<number_of_elements;i++) // here we entering all elements
    {
          scanf("%d",(p+i));
    }
    printf("\nElements after sorting\n");// here we are sorting elements

    for(i=1;i<number_of_elements;i++) // here we running loop, number of loop equal to number of element enter
    {
       for(j=0;j<number_of_elements-i;j++) //here also we running our loop but this time number of loop run n time minus i cause every set of one loop fix largestt number at last
       {
             if(*(p+j)>*(p+j+1)) // first element greater than 2nd element if yes the we swap it
             {
                  int temp=*(p+j+1); // how to swap
                  *(p+j+1)=*(p+j);
                  *(p+j)=temp;
             }
       }
    }
        for(i=0;i<number_of_elements;i++) // last printing our sorted elements
    {
          printf("%d\n",*(p+i));
    }

}
