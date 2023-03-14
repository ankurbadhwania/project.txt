// #include<stdio.h>
// int main(){
//     int n,sum_odd=0,sum_even=0,c_odd=0,c_even=0;
//     int a;
//     printf("Enter a number");
//     scanf("%d",&n);
//     answer:
//     a=n%10;
//         if (a%2==0){
//             c_even+=1;
//             sum_even+=a;
//             n=n/10;
//         }
//         else{
//             c_odd+=1;
//             sum_odd+=a;
//             n=n/10;
//         }
// if (n>0){
//     goto answer;
// }
// else{
//     if (c_even>c_odd){
//         printf("%d",sum_even);

//     }
//     else{
//         printf("%d",sum_odd);
//     }
// }
// }
// #include<stdio.h>
// int main(){
//     int n,c_even=0,c_odd=0,s_even=0,s_odd=0;
//     scanf("%d",&n);
//     if((n%10)%2==0){
//         c_even+=1;
//         s_even+=n%10;
//     }
//     else {
//         c_odd+=1;
//         s_odd+=n%10;
//     }
//     n=n/10;
//     if((n%10)%2==0){
//         c_even+=1;
//         s_even+=n%10;
//     }
//     else {
//         c_odd+=1;
//         s_odd+=n%10;
//     }
//     n=n/10;
//     if((n%10)%2==0){
//         c_even+=1;
//         s_even+=n%10;
//     }
//     else {
//         c_odd+=1;
//         s_odd+=n%10;
//     }
//     n=n/10;
//     if((n%10)%2==0){
//         c_even+=1;
//         s_even+=n%10;
//     }
//     else {
//         c_odd+=1;
//         s_odd+=n%10;
//     }
//     n=n/10;
//     if((n%10)%2==0){
//         c_even+=1;
//         s_even+=n%10;
//     }
//     else {
//         c_odd+=1;
//         s_odd+=n%10;
//     }
//     if (c_even > c_odd) printf("%d",s_even);
//     else printf("%d",s_odd);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,c_even=0,c_odd=0,s_even=0,s_odd=0;
//     scanf("%d",&n);
//     while(n!=0){
//         if((n%10)%2==0){
//             c_even+=1;
//             s_even+=n%10;
//         }
//         else {
//             c_odd+=1;
//             s_odd+=n%10;
//         }
//         n=n/10;
//     }
//     if (c_even > c_odd) printf("%d",s_even);
//     else printf("%d",s_odd);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,c_even=0,c_odd=0,s_even=0,s_odd=0;
//     int x =5;
//     scanf("%d",&n);
//     while(x!=0){
//         if((n%10)%2==0){
//             c_even+=1;
//             s_even+=n%10;
//         }
//         else {
//             c_odd+=1;
//             s_odd+=n%10;
//         }
//         n=n/10;
//         x--;
//     }
//     if (c_even > c_odd) printf("%d",s_even);
//     else printf("%d",s_odd);
//     return 0;
// }