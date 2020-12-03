#include <stdio.h>
#include<string.h>
int main() {
char str[100];
int i,end; 
printf("enter the string");
gets(str);
end=(strlen(str))-1;
for(i=end;i>-1;i--)
printf("%c",str[i]);
return 0;
}
