/*
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Niniejszy program jest wolnym oprogramowaniem; mo¿esz go
    rozprowadzaæ dalej i/lub modyfikowaæ na warunkach Powszechnej
    Licencji Publicznej Affero GNU, wydanej przez Fundacjê Wolnego
    Oprogramowania - wed³ug wersji 2 tej Licencji lub (wed³ug twojego
    wyboru) którejœ z póŸniejszych wersji.

    Niniejszy program rozpowszechniany jest z nadziej¹, i¿ bêdzie on
    u¿yteczny - jednak BEZ JAKIEJKOLWIEK GWARANCJI, nawet domyœlnej
    gwarancji PRZYDATNOŒCI HANDLOWEJ albo PRZYDATNOŒCI DO OKREŒLONYCH
    ZASTOSOWAÑ. W celu uzyskania bli¿szych informacji siêgnij do
    Powszechnej Licencji Publicznej GNU.

    Z pewnoœci¹ wraz z niniejszym programem otrzyma³eœ te¿ egzemplarz
    Powszechnej Licencji Publicznej Affero GNU (GNU Affero General Public License);
    jeœli nie - napisz do Free Software Foundation, Inc., 59 Temple
    Place, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));
    
    int i=0;
    int j=0;
    int k=0;
    char tablica[100];
    char znak;
    
    ifstream wczytnik1, wczytnik2, wczytnik3, wczytnik4, wczytnik5;
    wczytnik1.open("txt-all/lalka-tom-pierwszy.txt");
    wczytnik2.open("txt-all/chlopi-czesc-druga-zima.txt");
    wczytnik3.open("txt-all/w-pustyni-i-w-puszczy.txt");
    wczytnik4.open("txt-all/nad-niemnem-tom-pierwszy.txt");
    wczytnik5.open("txt-all/historia-zoltej-cizemki.txt");
    ofstream wyrzutnik;
    wyrzutnik.open("pom.txt");
    
    j=(rand()%30)+4;
    for(i=1;i<j;i++)
    {
      while(1){wczytnik1.get(znak);if(znak=='.') break;}
      while(1){wczytnik2.get(znak);if(znak=='.') break;}
      while(1){wczytnik3.get(znak);if(znak=='.') break;}
      while(1){wczytnik4.get(znak);if(znak=='.') break;}
      while(1){wczytnik5.get(znak);if(znak=='.') break;}
    }
    
    for(k=1;k<15;k++)
    {
      j=(rand()%10)+4;
      for(i=1;i<j;i++)
      {
        while(wczytnik1.get(znak)){if(znak=='.') break;}
      }
      wczytnik1>>tablica;
      wyrzutnik<<tablica<<" ";
      
      j=(rand()%10)+4;
      for(i=1;i<j;i++)
      {
        while(wczytnik2.get(znak)){if(znak=='.') break;}
      }
      wczytnik2>>tablica;      
      wczytnik2>>tablica;
      wyrzutnik<<tablica<<" ";
      
      j=(rand()%10)+4;
      for(i=1;i<j;i++)
      {
        while(wczytnik3.get(znak)){if(znak=='.') break;}
      }
      wczytnik3>>tablica;
      wczytnik3>>tablica;
      wczytnik3>>tablica;
      wyrzutnik<<tablica<<" ";
      
      j=(rand()%10)+4;
      for(i=1;i<j;i++)
      {
        while(wczytnik4.get(znak)){if(znak=='.') break;}
      }
      wczytnik4>>tablica;
      wczytnik4>>tablica;
      wczytnik4>>tablica;
      wczytnik4>>tablica;
      wyrzutnik<<tablica<<" ";
            
      j=(rand()%10)+4;
      for(i=1;i<j;i++)
      {
        while(wczytnik5.get(znak)){if(znak=='.') break;}
      }
      wczytnik5>>tablica;
      wczytnik5>>tablica;
      wczytnik5>>tablica;
      wczytnik5>>tablica;
      wczytnik5>>tablica;
      wyrzutnik<<tablica<<" ";
    }

    wczytnik1.close();
    wczytnik2.close();
    wczytnik3.close();
    wczytnik4.close();
    wczytnik5.close();    
    
    wyrzutnik.close();
    //////////////////////////////////////////////////
    ifstream wej;
    ofstream wyj;
    wej.open("pom.txt");
    wyj.open("pom2.txt");
    
    while(wej.get(znak))
    {              
       if(znak!='!' && znak!='?' && znak!=':' && znak!=',' && znak!='.' && znak!=';')
       {
         if(znak=='A'){wyj.put('a');} else
         if(znak=='¥'){wyj.put('¹');} else
         if(znak=='B'){wyj.put('b');} else
         if(znak=='C'){wyj.put('c');} else
         if(znak=='Æ'){wyj.put('æ');} else
         if(znak=='D'){wyj.put('d');} else
         if(znak=='E'){wyj.put('e');} else
         if(znak=='Ê'){wyj.put('ê');} else
         if(znak=='F'){wyj.put('f');} else
         if(znak=='G'){wyj.put('g');} else
         if(znak=='H'){wyj.put('h');} else
         if(znak=='I'){wyj.put('i');} else
         if(znak=='J'){wyj.put('j');} else
         if(znak=='K'){wyj.put('k');} else
         if(znak=='L'){wyj.put('l');} else
         if(znak=='£'){wyj.put('³');} else
         if(znak=='M'){wyj.put('m');} else
         if(znak=='N'){wyj.put('n');} else
         if(znak=='Ñ'){wyj.put('ñ');} else
         if(znak=='Ó'){wyj.put('o');} else
         if(znak=='Ó'){wyj.put('ó');} else
         if(znak=='P'){wyj.put('p');} else
         if(znak=='R'){wyj.put('r');} else
         if(znak=='S'){wyj.put('s');} else
         if(znak=='Œ'){wyj.put('œ');} else
         if(znak=='T'){wyj.put('t');} else
         if(znak=='U'){wyj.put('u');} else
         if(znak=='W'){wyj.put('w');} else
         if(znak=='Y'){wyj.put('y');} else
         if(znak=='Z'){wyj.put('z');} else
         if(znak==''){wyj.put('Ÿ');} else
         if(znak=='¯'){wyj.put('¿');} else wyj.put(znak);
       }
    }
    wej.close();
    wyj.close();
    
    ifstream wejostat;
    ofstream wyjostat;
    
    wejostat.open("pom2.txt");
    wyjostat.open("lemowiesc.txt");
    
    i=0;
    while(wejostat>>tablica)
    {                    
      if(tablica[0]!=char(-30) && tablica[1]!=char(-128))
      {
        ++i;
        if((i%5)==0)
        {
          cout<<tablica<<".\n";
          wyjostat<<tablica<<".\n";
        }
        else if((i%5)!=1)
        {
          cout<<tablica<<" ";
          wyjostat<<tablica<<" ";
        }
        else
        {
          if(tablica[0]=='a')tablica[0]='A';
          if(tablica[0]=='¹')tablica[0]='¥';
          if(tablica[0]=='b')tablica[0]='B';
          if(tablica[0]=='c')tablica[0]='C';
          if(tablica[0]=='æ')tablica[0]='Æ';
          if(tablica[0]=='d')tablica[0]='D';
          if(tablica[0]=='e')tablica[0]='E';
          if(tablica[0]=='ê')tablica[0]='Ê';
          if(tablica[0]=='f')tablica[0]='F';
          if(tablica[0]=='g')tablica[0]='G';
          if(tablica[0]=='h')tablica[0]='H';
          if(tablica[0]=='i')tablica[0]='I';
          if(tablica[0]=='j')tablica[0]='J';
          if(tablica[0]=='k')tablica[0]='K';
          if(tablica[0]=='l')tablica[0]='L';
          if(tablica[0]=='³')tablica[0]='£';
          if(tablica[0]=='m')tablica[0]='M';
          if(tablica[0]=='n')tablica[0]='N';
          if(tablica[0]=='ñ')tablica[0]='Ñ';
          if(tablica[0]=='o')tablica[0]='O';
          if(tablica[0]=='ó')tablica[0]='Ó';
          if(tablica[0]=='p')tablica[0]='P';
          if(tablica[0]=='r')tablica[0]='R';
          if(tablica[0]=='s')tablica[0]='S';
          if(tablica[0]=='œ')tablica[0]='Œ';
          if(tablica[0]=='t')tablica[0]='T';
          if(tablica[0]=='u')tablica[0]='U';
          if(tablica[0]=='w')tablica[0]='W';
          if(tablica[0]=='y')tablica[0]='Y';
          if(tablica[0]=='z')tablica[0]='Z';
          if(tablica[0]=='Ÿ')tablica[0]='';
          if(tablica[0]=='¿')tablica[0]='¯';
          
          cout<<tablica<<" ";
          wyjostat<<tablica<<" ";
        }
      }
    }
    if((i%5)!=0)cout<<tablica<<".\n";
    if((i%5)!=0)wyjostat<<tablica<<".\n";
    
    wejostat.close();
    wyjostat.close();
    
    return 0;
}
