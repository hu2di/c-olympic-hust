#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100],c[100],bn=0;
    int l,i,s0; 
    scanf("%s",a);
    scanf("%s",b);
    if (strlen(a)>strlen(b))
       {
          s0 = strlen(a)-strlen(b);
          for (i=strlen(a)-1;i>=0;i--)
              if (i>s0-1) b[i]=b[i-s0];
              else b[i]=48;     
          b[strlen(a)]='\0';           
       }
    else if (strlen(a)<strlen(b)){
          s0 = strlen(b)-strlen(a);
          for (i=strlen(b)-1;i>=0;i--)
              if (i>s0-1) a[i]=a[i-s0];
              else a[i]=48;                
          a[strlen(b)]='\0';
    } 
    l = strlen(a);
    for (i=l-1;i>=0;i--)    
        if (a[i]+b[i]-48>57){
           c[i]=a[i]+b[i]-58;
           if (i==0)               
              bn=1;
           else a[i-1] = a[i-1]+1;
        }
        else {
            c[i]=a[i]+b[i]-48; 
        }
    if (bn==1) printf("%d",bn);
    for (i=0;i<l;i++)
    {
     printf("%d",c[i]-48);         
    }
    scanf("%d",&i);
    return 0;
}
