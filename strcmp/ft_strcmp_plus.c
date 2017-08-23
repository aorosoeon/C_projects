#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
   int i;
   int g;
   int w;

   i = 0;
   g = 0;
   while (s1[i] != '\0')
       i++;
   while (s2[g] != '\0')
       g++;

   if (i > g)
       w = 1;
   if (i < g)
       w = -1;
   if (i == g)
   {
       i = 0;
       g = 0;
       if ((s1[i] == s2[g]) && (s1[i] != '\0') && (s2[g] != '\0') && (i == g))
       {
           i++;
           g++;
           w = 0;
       }
       if ((s1[i] != s2[g]) && (s1[i] != '\0') && (s2[g] != '\0') && (i == g))
       {
           i++;
           g++;
           w = 2;
       }
   }
   return(w);
}

int main()
{
   char s1[] = "abc123";
   char s2[] = "abc123";
   
   int w;

   w = ft_strcmp(s1, s2);

   if (w == -1)
       printf("s1 is less than s2\n");
   if (w == 1)
       printf("s1 is bigger than s2\n");
   if (w == 0)
       printf("Identical\n");
   if (w == 2)
       printf("Equal number of symbols, but not identical\n");
   return(0);
}
