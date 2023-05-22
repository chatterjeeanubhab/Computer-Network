#include<stdio.h>
#include<string.h>
int main()
{
char string[100],s1[10]={'0'},s2[10]={'1'},ch;
int c = 0, count=0;
printf("Enter a string\n");
gets(string);
printf("The input string is ");
puts(string);

while (string[c] != '\0') {
if ((string[c] == '1')) {
count++;
}
c++;
}
printf("Total no of 1s: %d",count);

printf("\n Enter the mode of parity:'e' for Even and 'o' for Odd ");
scanf("%c",&ch);
switch(ch)
{
case 'e':
if(count%2==0)
{
strcat(string,s1);
}
else
{
strcat(string,s2);
}
printf("\n Updated string is %s",string);

break;
case 'o':
if(count%2==0)
{
strcat(string,s2);
}
else
{
strcat(string,s1);
}
printf("\n Updated string is %s",string);
break;
}
return 0;
}
