#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter the string: ");
    gets(a);
    printf("Enter the substring: ");
    gets(b);
    int l = strlen(b);
    int ans = 0;
    int m=0;
    for(int i=0; i<a[i]; i++){
        if(a[i]==b[m]){
            m++;
            l--;
            for(int j=i+1; j<a[i]; j++){
                if(l==0){
                    break;
                }else if(a[j]=b[m]){
                    ans++;
                    m++;
                    l--;        
                }else{
                    ans = 0;
                    break;
                }
            }
        }
        if(ans==0){
            break;
        }
    }
    if(ans==0){
        printf("Given substring is not present in the string");
    }else{
        printf("Given substring is present in the string");
    }
}