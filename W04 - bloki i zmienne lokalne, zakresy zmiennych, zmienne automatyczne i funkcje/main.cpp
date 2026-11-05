/** @file */

// PODSTAWY PROGRAMOWANIA KOMPUTERÓW
// wykład 4: funkcje

#include <iostream> 
      
double suma (const double x, const double y)
{
    return x + y;
}

auto roznica (const double x, const double y) -> double
{
   return x - y;
}

auto iloczyn (const double x, const double y) 
{
   return x * y;
}

auto iloraz (const auto x, const auto y)    // szablon funkcji 
{
   return x / y;
}

void wypisz_o_1_wiecej (int a)   // kopia paramteru 
{
    a++;  // inkrementacja parametru (czyli kopii)
    std::cout << a << std::endl;
}
void inkrementuj (int & a)  // brak kopii
{
   a++;
}

void wypisz (const unsigned int a)   // całkowita bez znaku
{
    if (a > 0) // warunek stopu
    {
       std::cout << a << std::endl;
       wypisz(a - 1); // wywolanie rekurencyjne
    }
}

inline 
double modul (const double x)
{
   return x < 0 ? -x : x ;
}

constexpr // Jezeli bedzie sie dalo, kompilator wyznaczy wartosc funkcji w czasie kompilacji.
          // Jezeli nie bedzie sie dalo, wykona sie jak zwykla funkcja.
long unsigned int silnia_iter (const unsigned int n)
{
    long unsigned int wynik = 1;
    for (int i = 2 ; i <= n; ++i)
       wynik *= i;
    return wynik;
}

consteval // Jezeli bedzie sie dalo, kompilator wyznaczy wartosc funkcji w czasie kompilacji.
          // Jezeli nie bedzie sie dalo, bedzie blad kompilacji. 
long unsigned int silnia_rek (const unsigned int n)
{
   if (n > 1)
   {
      return n * silnia_rek (n - 1) ;
   }
   else 
      return 1;
}

int nastepna()
{
    static int liczba = 1; // tylko przy pierwszy wywolaniu wykona sie ta linia
    return liczba++; // po zakonczeniu funkcji zmienna liczba nie znika!
}

void separator ()
{
   std::cout << "------------------" << std::endl;
}



int main (int ile, char * params[])
{

   {  std::cout << "BLOKI I ZMIENNE LOKALNE" << std::endl; 
      {
         int i = 1;                     
         {                             
            int a;                     
            i = 2;                      
            int i = -1;                
            {                          
               i = 3;                 
               int i = 4;              
            }                           
            i = 5;                     
         }                              
         std::cout << i << std::endl;    
      }  
      // std::cout << i << std::endl;  // error: ‘i’ was not declared in this scope
   } 
   {  std::cout << "FUNKCJE" << std::endl; 

      // definiowanie funkcji
      double wynik;
      double a {3.14}, b{2.71};
      //  double suma (const double x, const double y); 
      wynik = suma (a, b);
      std::cout << wynik << std::endl;
      
      wynik = roznica (a, b);
      std::cout << (void *) roznica << std::endl; // wypisuje adres funkcji w pamieci
      std::cout << wynik << std::endl;

      wynik = iloczyn (a, b);
      std::cout << wynik << std::endl;

      wynik = iloraz (a, b);
      std::cout << wynik << std::endl;

      wynik = iloraz (8, 3);  
      std::cout << wynik << std::endl;

      // przekazywanie parametrow do funkcji 
      // ... przez wartość (kopia)

      int i = 10;
      wypisz_o_1_wiecej(i);
      std::cout << i << std::endl;

      // ... przez referencję
      inkrementuj (i); 
      std::cout << i << std::endl;

      // rekurencja 
      separator(); 
      wypisz (10); 
      separator(); 
      wypisz (2); 
      separator(); 
      wypisz (1); 
      separator(); 
      wypisz (0); 
      separator(); 

      // inline 
      a = -234.567;
      wynik = modul (a);
      wynik = a < 0 ? -a : a;

      std::cout << wynik << std::endl;

      // constexpr
      const int DOBA = i; // wartosc inicjująca moze byc nieznana w czasie kompilacji 
      std::cout << DOBA << std::endl;
      // DOBA++; // nie mozna zmienić  

      constexpr int DZIEN = 24 * 60 * 60;   // wartosc przypisywana MUSI byc znana w czasie kompilacji!
      std::cout << DZIEN << std::endl;
      // DZIEN++; // nie mozna zmienić  

      std::cout << silnia_iter (4) << std::endl;   // w czasie kompilacji
      double tablica[silnia_iter(4)];              // dowod na to
      std::cout << silnia_iter (i) << std::endl;   // jak zwykla funkcja 
      // double tablica2[silnia_iter(i)];              // dowod na to

      // consteval 
      std::cout << silnia_rek (4) << std::endl;   // w czasie kompilacji
      // std::cout << silnia_rek (i) << std::endl;   // blad kompilacji 

      // statyczna zmienna w funkcji 
      separator();
      std::cout << nastepna() << std::endl;
      std::cout << nastepna() << std::endl;
      std::cout << nastepna() << std::endl;
      std::cout << nastepna() << std::endl;
      separator();
      // parametry maina
      separator();
      for (int i = 0; i < ile; ++i)
         std::cout << i << ": " << params[i] << std::endl;
      separator();
      
   }

   return 0;
} 

// [PL] Długa jest droga przez regułki. Krótka i skuteczna przez przykłady. (Tomáš Baťa)
// [CZ] Dlouhá je cesta přes pravidla. Krátká a vydatná přes příklady. (Tomáš Baťa)

