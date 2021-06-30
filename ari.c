#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h>

string ari(string s)
{
  int chara = 0, words = 0, sen = 0, ari_total=0;
  for (int i=0; i < strlen(s) ; i++)
  {
   if (isalnum(s[i]))
     {
      chara++;
     }
   if (s[i] ==' ')
    {
      words++;
    }
   if (s[i] == '.' || s[i] == '?' || s[i] == ',' )
    {
      sen++;
    }
  }
  ari_total = ceil( 4.71 * ((float)chara/words) + 0.5*((float)words/sen) - 21.43) ;
 
switch (ari_total) {
 case 1:
  return "Kindergarten";
 case 2:
  return "First/Second Grade";
 case 3:
  return "Third Grade";
 case 4:
  return "Fourth Grade";
 case 5:
  return "Fifth Grade";
 case 6:
  return "Sixth Grade";
 case 7:
  return "Seventh Grade";
 case 8:
  return "Eight Grade";
 case 9:
  return "Ninth Grade";
 case 10:
  return "Tenth Grade";
 case 11:
  return "Eleventh Grade";
 case 12:
  return "Twelfth Grade";
 case 13:
  return "College student";
 case 14:
  return "Professor";
    }
}
