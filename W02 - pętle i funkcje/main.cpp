// podstawy programowania komputerów
// wykład 02


// dolaczone biblioteki standardowe
#include <iostream>   // operacje wejscia/wyjscia
#include <cmath>      // funkcje matematyczne 
#include <iomanip>    // zmiana własności strumieni wejścia-wyjścia


double modul (double x)
{
   if (x >= 0)
      return x; 
   else 
      return -x;
}

void wypisz_podzielniki (int n)
{
    for (int dzielnik {1}; dzielnik <= n; dzielnik++)
    {
       if (n % dzielnik == 0)
          std::cout << dzielnik << std::endl;
    }
}

bool przestepny (unsigned int rok)
{
   if (rok % 400 == 0)
      return true;
   if (rok % 100 == 0)
      return false;
   if (rok % 4 == 0)
      return true; 
   else 
      return false;
}

int main ()
{
   // {}
   double zmienna = 12.3;
   int liczba_studentow {254};

   std::cout << liczba_studentow << std::endl;

   // auto
   auto temperatura = 23.4; 

   std::cout << temperatura << std::endl;


   // operatory: +, -, *, /, ==, !=, >, <, <=, >=
 
   std::cout << 4 * 5 + 2 << std::endl;

   //  ==    równość
   //  =     przypisanie

   std::cout << "liczba studentow: " << liczba_studentow << std::endl;
   if (liczba_studentow = 100)
      std::cout << "Mamy stu studentow." << std::endl;

   // int / int --> int
   int a {4}, b {3};
   std::cout << a << " / " << b << " == " << a / b << std::endl;


   int liczba_wystapien {123};
   int liczba_wszystkich_przypadkow {250};
    
   std::cout << "prawdopodobienstwo: " << liczba_wystapien / liczba_wszystkich_przypadkow << std::endl;
   std::cout << "prawdopodobienstwo: " << 1.0 * liczba_wystapien / liczba_wszystkich_przypadkow << std::endl;
   std::cout << "prawdopodobienstwo: " << (double) liczba_wystapien / liczba_wszystkich_przypadkow << std::endl;

   // modulo % 

   if (liczba_wystapien % 2)
      std::cout << "Liczba wystapien jest nieparzysta." << std::endl;

   a = 5; 
   b = 3;

   std::cout << a << " modulo " << b << ": " << a % b << std::endl;

   a = -a; 
   std::cout << a << " modulo " << b << ": " << a % b << std::endl;

   // przesuniecie bitowe 
   a = 5;
   std::cout << a << std::endl; // 101 
   
   int przesuniete_a;
   przesuniete_a = a << 2;      // 10100
   std::cout << przesuniete_a << std::endl;
   przesuniete_a = przesuniete_a >> 1; 
   std::cout << przesuniete_a << std::endl;
   
   // OPERATOR TROJARGUMENTOWY: ?:

   a = -5;
   if (a > 0)
      std::cout << "dodatnie" << std::endl;
   else 
      std::cout << "niedodatnie" << std::endl;

   std::cout << (a > 0 ? "dodatnie" : "niedodatnie") << std::endl;

   int modul_a = a > 0 ? a : -a; 

   std::cout << modul_a << std::endl;

   // c++, ++c, c--, --c
   
   // c++: najpierw wartosciowanie, potem inkrementacja
   // ++c: najpierw inkrementacja, potem wartosciowanie 

   std::cout << "--------------" << std::endl;
   a = 5; 
   std::cout << a << std::endl;
   std::cout << a++  << std::endl;
   std::cout << a << std::endl;

   std::cout << "--------------" << std::endl;
   a = 5; 
   std::cout << a << std::endl;
   std::cout << ++a  << std::endl;
   std::cout << a << std::endl;

   a = 5; 
   // std::cout << ++a++  << std::endl;  // nie kompiluje sie :-) 

   double wartosc = -30;
   auto  pierwiastek = sqrt(wartosc);
   std::cout << __LINE__  << ": "  << pierwiastek << std::endl;

   if (pierwiastek < 5)
      std::cout << __LINE__  << ": "  << "mniej" << std::endl;
   else 
      std::cout << __LINE__  << ": "  << "niemniej" << std::endl;

   auto porownanie = pierwiastek <=> 5;  // operator porównania
   if (porownanie < 0)
      std::cout << __LINE__  << ": "  << "mniej" << std::endl;
   else if (porownanie > 0)
      std::cout << __LINE__  << ": "  << "wiecej" << std::endl;
   else if (porownanie == 0)
      std::cout << __LINE__  << ": "  << "to samo" << std::endl;
   else 
      std::cout << __LINE__  << ": "  << "porownanie niemozliwe" << std::endl;

   // PETLE

   // while
   std::cout << "--------------" << std::endl;
   a = 5;
   while (a > 0)
      std::cout << a-- << std::endl;

   std::cout << "--------------" << std::endl;
   a = 5;
   while (a > 0)
      std::cout << --a << std::endl;

   std::cout << "--------------" << std::endl;
   a = 5;
   short int aa = 5;
   // while (aa > 0)
   //    std::cout << ++aa << std::endl;

   std::cout << "--------------" << std::endl;
   // do-while 
   a = 5;
   do 
   {
      std::cout << a-- << std::endl;
   } while (a > 0); 

   std::cout << "--------------" << std::endl;

   // for 
   for (int a = -5; a < 10 ; a++)
      std::cout << a << std::endl;

   short int c { 15 };
   std::cout << "--------------" << std::endl;
   for (std::cout << "zaczynamy petle " << std::endl; c < 25;  std::cout << c << " " << std::endl)
      c++;
   
   std::cout << "--------------" << std::endl;
   c = 15; 
   for (std::cout << "zaczynamy petle " << std::endl; c < 25;  std::cout << c++ << " " << std::endl)
      ;

   std::cout << "--------------" << std::endl;
   std::cout << sin(0.34) << std::endl;
   std::cout << modul(-45.6) << std::endl;
   std::cout << modul(145.6) << std::endl;
   
   std::cout << "--------------" << std::endl;
   wypisz_podzielniki (100); 
   std::cout << "--------------" << std::endl;
   wypisz_podzielniki (1337); 
   std::cout << "--------------" << std::endl;
   wypisz_podzielniki (123456); 
   std::cout << "--------------" << std::endl;
   std::cout << przestepny (2026) << std::endl;
   std::cout << przestepny (2027) << std::endl;
   std::cout << przestepny (2028) << std::endl;
   std::cout << przestepny (2029) << std::endl;
   std::cout << przestepny (2030) << std::endl;
   std::cout << przestepny (2000) << std::endl;
   std::cout << przestepny (1900) << std::endl;

   return 0;
} 


// Ważne jest, żeby nie przestać pytać. (Albert Einstein) 
// Wichtig ist, dass man nicht aufhört zu fragen. (Albert Einstein) 


