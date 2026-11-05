/** @file */

/* PODSTAWY PROGRAMOWANIA KOMPUTERÓW
 * wykład 5 
 */

#include <iostream>  // input/output stream 
#include <fstream>   // file stream 
#include <sstream>   // string stream 
#include <iomanip>   // manipulatory strumieni
#include <cmath>     // biblioteka matematyczna

void separator ()
{
   std::cout << "------------------" << std::endl;
}

void wypisz (const int n)
{
   std::cout << "liczba calkowita: " << n << std::endl;
}

void wypisz (const double n)
{
   std::cout << "liczba zmiennoprzecinkowa: " << n << std::endl;
}

void wypisz (const int a, const bool b)
{
   std::cout << "calkowita: " << a << ", boolowska: " << b << std::endl;
}

void wypisz_osobe (const std::string & nazwisko, const std::string & imie, const std::string & drugie = "[brak]")
{
   std::cout << imie << " " << drugie << " " << nazwisko << std::endl;
}

int nastepna (int n)
{
   n++;
   return n;
}

void wypisz (const double t[], const int rozmiar)
{
    std::cout << "[ ";
    for (int i = 0; i < rozmiar; ++i)
       std::cout << t[i] << " ";
    std::cout << "]" << std::endl;
}

void wypelnij (double t[], const int rozmiar)
{
    for (int i = 0; i < rozmiar; ++i)
       t[i] = sqrt (rozmiar * i + 1);
}




int main (int ile, char * params[])
{
   { std::cout << "FUNKCJE (dokonczenie)" << std::endl;
      
      // przeciążanie funkcji
      int a {5};
      double pi {3.14};
      wypisz(a);
      wypisz(pi);
      wypisz(46  + 5, false);


      // domyslne parametry funkcji 
      std::string imieA {"Adam"};
      std::string imieB {"Bozydar"};
      std::string nazwisko {"Brzeczyszczykiewicz"};

      wypisz_osobe (nazwisko, imieA, imieB);
      wypisz_osobe (nazwisko, imieA);


      // przekazywanie tablic do funkcji
      separator();
      std::cout << a << std::endl;
      std::cout << nastepna(a) << std::endl;
      std::cout << a << std::endl;

      const int N {7};
      double tablica [N];
  
      wypisz(tablica, N); 
      wypelnij(tablica, N);
      wypisz(tablica, N); 
   }

   {  std::cout << "TYPY WYLICZENIOWE" << std::endl;

      separator();
      // enum 
      enum kierunek { polnoc, wschod = 4, poludnie, zachod }; 
      // typ   zmienna
      kierunek azymut = zachod; //polnoc;

      if (azymut == polnoc)
         std::cout << "Idziemy na polnoc!" << std::endl;
      std::cout << azymut << std::endl;

      switch(azymut)
      {
         case polnoc : std::cout << "N" << std::endl; break; 
         case poludnie : std::cout << "S" << std::endl; break; 
         default : std::cout << "dokads" << std::endl; break;
      }


      // enum class 
      enum class figura { as, krol, krolowa, walet }; 
      enum class bierka { krol, hetman, wieza, goniec, skoczek, pion };
  
      figura karta = figura::krol;
      bierka krol_szachowy = bierka::krol; 

      // std::cout << karta << std::endl;
      switch(karta)
      {
         case figura::krolowa : std::cout << "K" << std::endl; break; 
         case figura::walet   : std::cout << "W" << std::endl; break; 
         default : std::cout << "cos innego" << std::endl; break;
      }

   }

   {  std::cout << "SFORMATOWANE OPERACJE WEJSCIA-WYJSCIA" << std::endl;

      {  std::cout << "   standardowe strumienie wyjsciowe" << std::endl;
         // biblioteka: #include <iostream>
         
         std::cout << "standardowy strumien wyjsciowy" << std::endl;
         std::cerr << "standardowy strumien bledow" << std::endl;
         std::clog << "standardowy strumien logow" << std::endl;

         // std::string a;
         // std::cin >> a;
         // std::cout << "podano " << a << std::endl;

      }

      {  std::cout << "   strumienie plikowe" << std::endl;
         
         {
            std::ofstream strumien_do_pliku;
            strumien_do_pliku.open("wyjscie.txt");
            if (strumien_do_pliku.is_open())
            {
               // std::cout << "Szumia jodly na gor szczycie" << std::endl;
               strumien_do_pliku << "Szumia jodly na gor szczycie" << std::endl;
            }
            strumien_do_pliku.close();  
         }
         {
            std::ofstream strumien_do_pliku ("wyjscie2.txt");
            if (strumien_do_pliku)
            {
               // std::cout << "Szumia jodly na gor szczycie" << std::endl;
               strumien_do_pliku << "Szumia sobie w dal." << std::endl;
            }
         }

         {
            const std::string LICZBY {"liczby.txt"};

            std::ofstream str_liczby (LICZBY);
            if (str_liczby)
            {
                for (int i = 10; i < 20; ++i)
                   str_liczby << i << std::endl;
            }
            str_liczby.close(); 
          }
          {
            const std::string LICZBY {"liczby.txt"};
            std::ifstream str_do_czytania (LICZBY);
            if (str_do_czytania)
            {
               int n;
               str_do_czytania >> n; 
               std::cout << "odczytana liczba: " << n << std::endl;

            }
         }
         separator();
          {
             const std::string LICZBY {"liczby.txt"};
             std::ifstream str_do_czytania (LICZBY);
             while (not str_do_czytania.eof())   //end of file 
             {
                int n;
                str_do_czytania >> n; 
                std::cout << "odczytana liczba: " << n << std::endl;

             }
          }

         
         separator();
          {
             const std::string LICZBY {"liczby.txt"};
             std::ifstream str_do_czytania (LICZBY);
             while (str_do_czytania)   //end of file 
             {
                int n;
                str_do_czytania >> n; 
                std::cout << "odczytana liczba: " << n << std::endl;

             }
          }

         
         
         separator();
          {
             const std::string LICZBY {"liczby.txt"};
             std::ifstream str_do_czytania (LICZBY);
             int n;
             while (str_do_czytania >> n)  
             {
                std::cout << "odczytana liczba: " << n << std::endl;
             }
          }

          separator();
          {
             const std::string PLIK {"wyjscie.txt"};
             std::ifstream str_do_czytania (PLIK);
             std::string s;
             while (str_do_czytania >> s)  
             {
                std::cout << "[" << s << "]" << std::endl;
             }
          }
         

      }

      separator();
      {  std::cout << "   strumienie lancuchowe" << std::endl;
         // biblioteka: #include <sstream>

         // przykład: wyłuskanie słów z napisu
         {
            std::string napis {"Szumia jodly na gor szczycie."};
            std::stringstream ss;
            ss << napis; 
            std::string slowo;
            while (ss >> slowo)  
            {
               std::cout << "[" << slowo << "]" << std::endl;
            }

         }

      separator();
      {  

         {
            // przykład: wyłuskanie liczb z napisu
            std::string napis {"12.0000 3.14 677.0000 88.655"};
            std::stringstream ss;
            ss << napis; 
            double liczba;
            while (ss >> liczba)  
            {
               std::cout << "[" << liczba << "]" << std::endl;
            }

         }
      }
      }

      {  std::cout << "   manipulatory" << std::endl;
         // #include <iomanip>
         const std::string OSOBY{"osoby.txt"};
         const std::string SFORMATOWANI {"sformatowani.txt"};

         std::ifstream plik (OSOBY);
         std::ofstream sformatowani (SFORMATOWANI);
         if (plik and sformatowani)
         {
            std::string imie, nazwisko;
            int dzien, miesiac, rok;
            char znak;
            double waga;
            double punkty;
            int ranga;
            bool zakwalifikowany;


            while (plik >> imie >> nazwisko >> dzien >> znak >> miesiac >> znak >> rok >> waga >> punkty >> ranga >> zakwalifikowany)
            {
               sformatowani
                  << std::left
                  << std::setw(13) 
                  << imie 
                  << std::left
                  << std::setw(13) 
                  << nazwisko
                  << std::endl;
            }
         }
         return 0;
      }

   }
   return 0;
} 
 
