// podstawy programowania komputerów
// wykład 03


// dolaczone biblioteki standardowe
#include <iostream>   // operacje wejscia/wyjscia
#include <cmath>      // funkcje matematyczne
#include <random>     // generator liczb pseudolosowych
#include <chrono>     // biblioteka czasu


void wypisz (int t[], const int N)
{
    std::cout << "[ ";
    for (int i = 0; i < N; ++i)
       std::cout << t[i] << " ";
    std::cout << "]" << std::endl;
}

void wypelnij (int t[], const int N)
{
    int i = 0;
    while (i < N) 
    {
       t[i] = i * i;
       i++;
    }
}


int main ()
{
   // instrukcja wyboru:
   // switch (break, [[fallthrough]])
   
   std::cout << "------------------------------" << std::endl; 
   int ile_kropek_na_kostce {5};

   if (ile_kropek_na_kostce == 6)
      std::cout << "******" << std::endl;
   else if (ile_kropek_na_kostce == 5)
      std::cout << "*****" << std::endl;
   else if (ile_kropek_na_kostce == 4)
      std::cout << "****" << std::endl;
   else if (ile_kropek_na_kostce == 3)
      std::cout << "***" << std::endl;
   else if (ile_kropek_na_kostce == 2)
      std::cout << "**" << std::endl;
   else if (ile_kropek_na_kostce == 1)
      std::cout << "*" << std::endl;
   else 
      std::cout << "???" << std::endl; 


   // switch 
   std::cout << "------------------------------" << std::endl;
   ile_kropek_na_kostce = 4;
   switch (ile_kropek_na_kostce) 
   {
      case 6 : std::cout << "******" << std::endl; break;
      case 5 : std::cout << "*****" << std::endl; break;
      case 4 : std::cout << "****" << std::endl; break;
      case 3 : std::cout << "***" << std::endl; break;
      case 2 : std::cout << "**" << std::endl; break;
      case 1 : std::cout << "*" << std::endl; break;
      default : std::cout << "???" << std::endl; break;
      
   }
   std::cout << "------------------------------" << std::endl;
   // switch, [[fallthrough]]
   switch (ile_kropek_na_kostce) 
   {
      case 6 : std::cout << "*"; [[fallthrough]];
      case 5 : std::cout << "*"; 
      case 4 : std::cout << "*"; 
      case 3 : std::cout << "*"; 
      case 2 : std::cout << "*"; 
      case 1 : std::cout << "*" << std::endl; break;
      default : std::cout << "???" << std::endl; 
                break;
   }
   std::cout << "------------------------------" << std::endl;

   // TABLICE
   int a; 
   // deklaracja 
   int tab[5]; // tablica 5 intów 

   // const 
   const int ROZMIAR = 6;
   int t2[ROZMIAR] ;
   // dostęp do elementów tablicy
   // odwolanie do elementu

   std::cout << t2[4] << std::endl;
   // wypisanie wartości przechowywanej w tablicy
   std::cout << "[ "; 
   for (int i = 0; i < ROZMIAR; ++i)
      std::cout << t2[i] << " ";
   std::cout << "]" << std::endl;
   // przekroczenie zakresu tablicy
   std::cout << t2[ROZMIAR] << std::endl; // WYSZLISMY POZA TABLICE!!!
   //std::cout << t2[10000] << std::endl; // WYSZLISMY POZA TABLICE!!!
   std::cout << t2[-1] << std::endl; // WYSZLISMY PRZED TABLICE!!!

   t2[3] = 1234567;
   std::cout << t2[3] << std::endl; 
   std::cout << 3[t2] << std::endl;


   // inicjalizacja tablic: 
   double niewyzerowana[15]; 
   for (int i = 0; i < 15; i++)
      std::cout << niewyzerowana[i] << " ";
   std::cout << std::endl;

   // zainicjowana
   double zainicjowana[6] = {34.54, 56.43, 87.65, 12.54, 98.78, 45.76};
   for (int i = 0; i < 6; i++)
       std::cout << zainicjowana[i] << " ";
   std::cout << std::endl;

   // zainicjowana_2
   double zainicjowana_2[] = {34.54, 56.43, 87.65, 12.54, 98.78, 45.76};
   for (int i = 0; i < 6; i++)
       std::cout << zainicjowana_2[i] << " ";
   std::cout << std::endl;

   // czesciowo_zainicjowana
   double czesciowo_zainicjowana[15] = {34.54, 56.43, 87.65, 12.54, 98.78, 45.76};
   for (int i = 0; i < 15; i++)
      std::cout << czesciowo_zainicjowana[i] << " ";
   std::cout << std::endl;

   // wyzerowana
   double wyzerowana[15] = {}; 
   for (int i = 0; i < 15; i++)
      std::cout << wyzerowana[i] << " ";
   std::cout << std::endl;


   std::cout << sizeof(ROZMIAR) << std::endl;
   std::cout << sizeof(wyzerowana) << std::endl;
   std::cout << sizeof(wyzerowana) / sizeof(double) << std::endl;

   ////////////////////////

   std::default_random_engine silnik (std::chrono::system_clock::now().time_since_epoch().count());
   std::normal_distribution<double> rozklad (170, 15);

   const int size {12};

   double tablica [size] ;
   for (int i = 0; i < size; i++)
      tablica[i] = rozklad(silnik);

   int i = 0;
   while (i < size)
   {
      std::cout << tablica[i++] << " ";
   }
   std::cout << std::endl;

   int Tablica[ROZMIAR]; 
   //  void wypisz (int t[], const int N); 
   wypisz (Tablica, ROZMIAR);
   // void wypelnij (int t[], const int N);
   wypelnij (Tablica, ROZMIAR);
   wypisz (Tablica, ROZMIAR);


   //////////////////////////

   // tablice wielowymiarowe
   const int W = 5;
   const int K = 9;
   int tab2d[W][K];
   // wypelnienie tablicy 
   for (int wiersz = 0; wiersz < W; ++wiersz) // dla kazdego wiersza
   {
      for (int kolumna = 0; kolumna < K; ++kolumna) // dla każdej kolumny w wierszu
      {
         tab2d [wiersz][kolumna] = wiersz * 100 + kolumna; 
      }
   }

   // wypisanie tablicy
   for (int wiersz = 0; wiersz < W; ++wiersz) // dla kazdego wiersza
   {
      for (int kolumna = 0; kolumna < K; ++kolumna) // dla każdej kolumny w wierszu
      {
         std::cout << tab2d[wiersz][kolumna] << '\t';
      }
      std::cout << std::endl;
   }

   // tablica dwuwymiarowa
   int t2d [][2] = 
   { 
      {1, 2},   
      {3, 4}, 
      {5, 6}
   };



   // tablica trójwymiarowa
   int tab3d[2][3][4] = {
      { { 1, 2, 3, 4}, { 5, 6, 7, 8}, { 3, 5, 7, 9}  },
      { { 5, 7, 8, 0}, { 0, 6, 5, 6}, { 3, 4, 5, 6}  }
   } ;

   // tablica czterowymiarowa
   int czasoprzestrzen[][3][4][2] = {
      {
         { { 1, 2 }, { 1, 2 }, { 1, 2 } }, 
         { { 5, 6 }, { 7, 8 }, { 3, 5 } },
         { { 5, 6 }, { 3, 5 }, { 7, 9 } }
      },
      { 
         { { 1, 2 }, { 1, 2 }, { 1, 2 } }, 
         { { 5, 6 }, { 7, 8 }, { 3, 5 } },
         { { 5, 6 }, { 3, 5 }, { 7, 9 } }
      }
   } ;     

   czasoprzestrzen[0][1][2][1] = 4;                            
   std::cout << czasoprzestrzen[0][1][2][1] << std::endl;                            

} 
//
// [CZ] 99 nezdarů – stý úspěch! (Tomáš Baťa)
// [PL] 99 porażek – setny sukces! (Tomáš Baťa)

