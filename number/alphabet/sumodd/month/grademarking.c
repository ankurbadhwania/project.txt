//Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
// Calculate percentage and grade according to following:
#include<stdio.h>
int main(){
  int physicsmarks,chemistrymarks,biomarks,mathmarks,computermarks;
  printf("enter marks of maths: ");
  scanf("%d",&mathmarks);

  printf("enter marks of bio: ");
  scanf("%d",&biomarks);

  printf("enter marks of chemistry : ");
  scanf("%d",&chemistrymarks);

  printf("enter marks of physics: ");
  scanf("%d",&physicsmarks);

  printf("enter marks of computer: ");
  scanf("%d",&computermarks);
int percentage= (physicsmarks+chemistrymarks+biomarks+mathmarks+computermarks)/5;
if(percentage>=90){
    printf("Grade A");
}
else if(percentage>=80){
    printf("Grade B");
}
else if(percentage>=70){
    printf("Grade C");
}
else if(percentage>=60){
    printf("Grade D");
}
else if(percentage>=40){
    printf("Grade E");
}
else if(percentage<40){
    printf("Grade F");
}
    return 0;
}