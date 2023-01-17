//Бариев Абылайхан
//No2 Массив элементтерін жұптастырып орын ауыстырып шығарыныз. 
//1ші элементті 2шімен, 3ші элментті 4шімен, 5шімен 6шы және т.с.с.

#include <iostream>
using namespace std;
 
int main() 
{
   int n;
   cin >> n;
   int arr[n];
   for(int i = 0; i < n; i++)
   {
      cin >> arr[i];
   } 
   for(int i = 1; i < n; i+=2){
      int q = arr[i];
      arr[i] = arr[i-1];
      arr[i-1] = q;
   }
   for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
   return 0;
}

