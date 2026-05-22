#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    int i=0;
    while(1)
    {

        if(a[i]== '\0' && b[i]== '\0'){
            printf("A & B are equall");
            break;
    
        }


        if(a[i]== '\0'){
            printf("A is smaller");
            break;
            
        }  
        
        if(b[i]== '\0'){
        printf("B is smaller");
        break;  }

         

         if(a[i]< b[i]){
             printf("A is smaller");
             break;

         }
        

         if(a[i]> b[i]){
             printf("B is smaller");
             break;

         }
        

         if(a[i]==b[i])
         {
            i++;
            
         }
         
    
    }

    return 0;
}



// #include<stdio.h>
// #include<string.h>
// int main()
// {    

//      char a[101];
//     char b[101];
//     scanf("%s",&a);
//     scanf("%s",&b);
//     int x= strcmp(a,b);
//     if(x<0)
//     printf("%s",a);

//     if(x>0)
//     printf("%s",b);

//     if(x==0)
//     printf("%s",a);

    
    
//     return 0;
// }
