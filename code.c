#include<stdio.h>
struct student{
    char name[20];
    int rollno;
};

int main(){
struct student s1[20];    

int a[5];
int n=5;
int temp;

 for (int o=0;o<5;o++)
    {
        printf("Enter name of the student :");
        scanf("%s",&s1[o].name);


        printf("Enter the roll no of the student :");
        scanf("%d",&s1[o].rollno);


        printf("enter the marks of the students :");
        scanf("%d",&a[o]);
       
           printf("_____________________________________________________\n");
       
    }
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
    }
}
printf("The data of the students is saved successfully\n calculating the ranks.........\n");

   printf("Rank 1 is student with marks: %d\n",a[4]);
   printf("Rank 2 is student with marks: %d\n",a[3]);
   printf("Rank 3 is student with marks: %d\n",a[2]);
   printf("Rank 4 is student with marks: %d\n",a[1]);
   printf("Rank 5 is student with marks: %d\n",a[0]);
return 0;
}
