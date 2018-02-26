#include<stdio.h>
int main()
{
int l1,l2;
char str1[15],str2[34];
printf("Enter the two strings:\n",str1,str2);
scanf(""%s%s",&str1,&str2);
l1=strlen(str1);
l2=strlen(str2);
if(str1>str2)
printf("str1\n",str1);
elseif(str1<str2)
printf("str2\n",str2);
else(str1=str2)
printf("str1);
return 0;
}
