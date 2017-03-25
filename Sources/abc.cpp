#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char sa[50], sb[50];
char a[50], b[50], r[50];
int n;

void read() {
    scanf("%s", &sa);        
    scanf("%s", &sb);     
     memset( a, 0, sizeof (a));
     memset( b, 0, sizeof (b));
     memset( r, 0, sizeof (r));
     for (int i = 0; i< strlen(sa); i++) {
         a[strlen(sa) - i - 1] = sa[i] - 48;
         }
         
     for (int i = 0; i< strlen(sb); i++) {
         b[strlen(sb) - i - 1] = sb[i] - 48;    
         }
     n = (strlen(sa) > strlen(sb))? strlen(sa) : strlen(sb);    
}

void calc() {
     int rem = 0;
     for (int i = 0; i<=n ;i ++) {
         r[i] = a[i] + b[i] + rem;
         if (r[i] >= 10) {
                  r[i]-= 10;
                  rem = 1;                  
         }
         else rem = 0;
     }
}

void display() {
     int begin_pos = n;
     while (r[begin_pos] == 0 && begin_pos > 0) begin_pos--;
     for (int i = begin_pos; i>=0;  i--)
         printf("%c", r[i] + 48);
}

int main() {
    //freopen("test.txt", "rt", stdin);
    read();
    calc();
    display();
}
