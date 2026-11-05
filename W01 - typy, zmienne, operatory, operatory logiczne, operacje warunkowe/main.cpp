

/*
 PODSTAWY PROGRAMOWANIA KOMPUTERÓW
 
 * Krzysztof Simiński 
   https://platforma.polsl.pl/rau2/course/view.php?id=116 
   krzysztof.siminski@polsl.pl (w nagłówku mejla proszę dodać [PPK-SSI-GLI])
   
 * strona przedmiotu na platformie zdalnej edukacji  
   https://platforma.polsl.pl/rau2/course/view.php?id=44 
   login + hasło do platformy jak do usosa
   
*  kompilator i środowisko: dowolne, byle spełniało standard przynajmniej C++11 
   
   C++
   - język wysokiego poziomu
   - przenośny, kompilatory na bardzo wiele platform
   - wszechstronny pod względem sprzętu i paradygmatów programowania
   - zasada wstecznej kompilowalności
   - kompilowany do szybkiego kodu maszynowego (wysoka wydajność niskopoziomowa)
   - bezpośrednie przełożenie konstrukcji języka na warstwę sprzętową
   - zasada zerowego narzutu (użycie abstrakcji nie powoduje przyrostu wynikowego kodu maszynowego)
   - wysoce niezawodny
   - starannie zaprojektowany i starannie standardyzowany
   - biblioteka standardowa (z algorytmami i strukturami danych)

   zastosowania C++:
   - programowanie większości systemów operacyjnych (Linux, Windows, Apple)
   - interpretery Javascriptu, maszyny wirtualne Javy, szkielet .NET-u, parsery XML i JSON
   - przeglądarki internetowe (IE, Firefox, Safari, Chrome)
   - zastosowania komercyjne (Amazon, Amadeus, Google, Facebook, AT&T, Ericsson, Huawei, Siemens, gry, Alibaba,  PayPal, Yandex, ...)
   - obsługa dalekich połączeń telefonicznych (0-800...)
   - przemysł transportowy: łaziki marsjańskie NASA, CERN, silniki okrętowe MAN, skanery CAT, kontrola lotów Lockheed-Martin, Aerospace, BMW, Mercedes, Tesla, GM, Toyota, Volvo, Volkswagen, Waymo (samochody autonomiczne),
   - systemu wbudowane: Olympus, Canon, Nespresso, TomTom, Carlsberg
   - systemy bezpieczeństwa: Kaspersky, Symantec
   - przetwarzanie danych medycznych: Siemens, Toshiba, Phillips, tomografia komputerowa, analiza genomu, bioinformatyka
 */


// dolaczone biblioteki standardowe
#include <iostream>   // operacje wejscia/wyjscia  
#include <cmath>      // biblioteka matematyczna 
 

// najprostszy program w C++:
/* int main () 
{
   // program zaczyna się tutaj
    
   std::cout              // strumien wyjsciowy do pisania na ekranie 
              <<          // operator wypisania do strumienia   
                  "Hello, world!"  // łancuch znakowy
                  << 
                  std::endl   // koniec linii
                  ;           // koniec instrukcji 


	// ciało programu

	// program kończy się tutaj
} 
*/

//int main () {}   // najprostszy program w C++

////////////////////////////////////////////
int main ()
{
   // Hello, world!
   std::cout              // strumien wyjsciowy do pisania na ekranie 
              <<          // operator wypisania do strumienia   
                  "Hello, world!"  // łancuch znakowy
                  << 
                  std::endl   // koniec linii
                  ;           // koniec instrukcji 
   
   // int 

   int calkowita;  // zmienna 
   calkowita = 6; // przypisanie 
   std::cout << "liczba calkowita: " << calkowita << std::endl;

   // char 
   char znak = 'h';  // utworzenie zmiennej i przypisane wartosci, znak -- pojedynczy cudzysłow
   std::cout << "znak: " << znak << std::endl;

   znak = '6'; 
   std::cout << "znak: " << znak << std::endl;


   // std::string 
   std::string napis = "Kocham PPK!";    // łancuch znakowy, napis -- podwojny cudzyslow
   std::cout << napis << std::endl;

   // double  liczba zmiennoprzecinkowa podwójnej precyzji 
   double temperatura = -123.789; 
   std::cout << temperatura << std::endl;

   // bool  Boole 
   bool warunek = true; 
   std::cout << warunek << std::endl;
   
   std::cout << "-------------------" << std::endl;

   // if 
   calkowita = -123456 * 0;
   if (calkowita > 0) 
   {
      std::cout << "wartosc dodatnia" << std::endl;
      std::cout << calkowita << std::endl;
   }
   else if (calkowita < 0) 
   {
      std::cout << "wartosc ujemna" << std::endl;
   }
   else 
   {
      std::cout << "zero!" << std::endl;
   }

   int a; 
   int zmienna_123;
   int __;
   int ______________________________________________________________;


   return 0;   // tutaj kończy się program.
}

///////////////////

// Study hard what interests you the most in the most undisciplined, irreverent and original manner possible. (Richard Feynmann)

