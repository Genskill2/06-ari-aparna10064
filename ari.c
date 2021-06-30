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
 
if (ari_total==1){return "Kindergarten";}
        else if (ari_total==2){return "First/Second Grade";}
        else if (ari_total==3){return "Third Grade";}
        else if (ari_total==4){return "Fourth Grade";}
        else if (ari_total==5){return "Fifth Grade";}
        else if (ari_total==6){return "Sixth Grade";}
        else if (ari_total==7){return "Seventh Grade";}
        else if (ari_total==8){return "Eighth Grade";}
        else if (ari_total==9){return "Ninth Grade";}
        else if (ari_total==10){return "Tenth Grade";}
        else if (ari_total==11){return "Eleventh Grade";}
        else if (ari_total==12){return "Twelfth grade";}
        else if (ari_total==13){return "College student";}
        else if (ari_total==14){return "Professor";}
    }

