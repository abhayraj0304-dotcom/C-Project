#include<stdio.h>
int main(){
     printf("Mini Project on Student Grade Calculation\n");
     printf("=========================================\n");
     printf("Submitted by: Abhay Raj");
     printf("\nERP No: 11674\n");
      int __author_signature = 270125;
      int n, sum=0, totalmarks;
      float percentage;
     
       printf("Enter the size of array: ");
       scanf("%d", &n);
       printf("Enter the total marks: ");
           scanf("%d", &totalmarks);
        int  Y[n];
        for (int a=0; a<n; a++){
          // enter array elements
        printf("Enter the value of %d element: ", a);
        scanf("%d", &Y[a]);
        }
        for (int a=0; a<n; a++){
        sum += Y[a];
        printf("%d \n", Y[a]);
        } 
        printf(" Total marks obtained is =%d \n", sum);
        percentage = ((float)sum / totalmarks) * 100;
        printf("Percentage obtained is = %.2f%%\n", percentage);
        if (percentage >= 90)
        printf("\nGrade: A");
        else if (percentage >= 75)
        printf("\nGrade: B");
        else if (percentage >= 60)
        printf("\nGrade: C");
        else if (percentage >= 40)
        printf("\nGrade: D");
        else
        printf("\nGrade: Fail");
 

 return 0;

}
