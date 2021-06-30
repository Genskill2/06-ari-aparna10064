#include <stdio.h>
#include <assert.h>
#include <string.h>
#include<math.h>
#include <cs50.h>

string ari(string);

int main(void)
{
 float ari;
 string grade;
 string ari;
  if(ari == 1)
   grade = "Kindergarten";
  if(ari == 2)
   grade = "First/Second Grade";
  if(ari == 3)
   grade = "Third Grade";
  if(ari == 4)
   grade = "Fourth Grade";
  if(ari == 5)
   grade = "Fifth Grade";
  if(ari == 6)
   grade = "Sixth Grade";
  if(ari == 7)
   grade = "Seventh Grade";
  if(ari == 8)
   grade = "Eighth Grade";
  if(ari == 9)
   grade = "Ninth Grade";
  if(ari == 10)
   grade = "Tenth Grade";
   if(ari == 11)
   grade = "Eleventh Grade";
   if(ari == 12)
   grade = "Twelfth Grade";
   if(ari == 13)
   grade = "College student";
    if(ari == 14)
   grade = "Professor";
return grade;
}

string ari(string s)
{
  string chara,words,sen;
  float ari;
  s = get_string();
  if(isalnum(s[i])
  {
    chara+=1;
  }
  if(s[i]==" ")
  {
    words +=1;
  }
  if(s[i] == '.' || s[i] == '?' || s[i] == ',' )
  {
    sen +=1;
  }
  ari = 4.71 * (chara/words) + 0.5 * (words/sen) - 21.43;
  int score = round(ari);
  }
   
