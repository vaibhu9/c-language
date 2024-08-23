#include<iostream>
#include<string.h>
using namespace std;
class Charopration
 {
  private:
       char *ptr;
  public:
	 Charopration(char ch[5][90])
	  {
	   	ptr=ch;
	  }
	 void perform_opration();
  };
void Charopration::perform_opration()
 {
  int line=0,word=0,chara=0,space=0,vowel=0,conso=0;
    for(int i=0;i<5;i++)
     {
      for(int j=0;ptr[j]!='\0';j++)
       {
	if(ptr[i][j]>='A'&&ptr[i][j]<='Z')
	 {
	  ptr[i][j]=ptr[i][j]+32;
	 }
	if(ptr[i][j]>='a'&&ptr[i][j]<='z')
	 {
	  if(ptr[i][j]=='a'||ptr[i][j]=='e'||ptr[i][j]=='i'||ptr[i][j]=='o'||ptr[i][j]=='u')
	   {
	    vowel++;
	   }
	  else
	   {
	     conso++;
	   }
	 }
	if(ptr[i][j]==' ')
	 {
	  space++;
	 }
	 if(ptr[i][j]=='\t'||ptr[i][j]=='\0')
	  {
	   word++;
	  }
	 chara++;
	}
       line++;
      }
      cout<<"No. of vowel is "<<vowel;
      cout<<"No. of consonant is "<<conso;
      cout<<"No. of charactor is "<<chara;
      cout<<"No. of spacees is "<<space;
      cout<<"No. of words is "<<word;
      cout<<"No. of line is "<<line;

  }
void main()
 {
  char ch[5][90];
  cout<<"Enter data in string";
  for(int i=0;i<5;i++)
   {
     gets(ch[i]);
   }
  Charopration co(ch);
  co.perform_opration();
  getch();
 }
