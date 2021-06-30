#include <stdio.h>
#include <assert.h>
#include <string.h>
#include<math.h>
#include <cs50.h>

string ari(string);

int main(void)
{
 float aris;
 string grade;
 string ari;
  if(score == 1)
   grade = "Kindergarten";
  if(score == 2)
   grade = "First/Second Grade";
  if(score== 3)
   grade = "Third Grade";
  if(score == 4)
   grade = "Fourth Grade";
  if(score == 5)
   grade = "Fifth Grade";
  if(score== 6)
   grade = "Sixth Grade";
  if(score == 7)
   grade = "Seventh Grade";
  if(score == 8)
   grade = "Eighth Grade";
  if(score == 9)
   grade = "Ninth Grade";
  if(score == 10)
   grade = "Tenth Grade";
   if(score == 11)
   grade = "Eleventh Grade";
   if(score== 12)
   grade = "Twelfth Grade";
   if(score == 13)
   grade = "College student";
    if(score == 14)
   grade = "Professor";
return grade;
}

string ari(string s)
{
  string chara,words,sen;
  float ari;
  s = get_string();
  for(int i=0; i<=strlen(s) ; i++)
  {
  if(isalnum(s[i])
  {
    chara += 1;
  }
  if(s[i] == " ")
  {
    words += 1;
  }
  if(s[i] == '.' || s[i] == '?' || s[i] == ',' )
  {
    sen += 1;
  }
  aris = 4.71 * (chara/words) + 0.5 * (words/sen) - 21.43;
  int score = round(aris);
  }
  }
