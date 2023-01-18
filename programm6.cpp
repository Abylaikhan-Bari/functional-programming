// Bariev Abylaikhan Askarbekuly
/*10)	Требуется отсортировать массив по неубыванию методом "вставок".
Входные данные
В первой строке вводится одно натуральное число, не превосходящее 1000 – размер массива. Во второй строке задаются N чисел – элементы массива (целые числа, не превосходящие по модулю 1000).
Выходные данные
Вывести получившийся массив.
входные данные
5
5 4 3 2 1
выходные данные
1 2 3 4 5 */
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std; 

int main()
{
    srand(time (NULL));
    int size;
    cout << endl << "Massiv olshemin engiziniz: "; cin >> size; cout << endl;
    int arr[size];
 
    for (int i = 0; i < size; i++) {
       arr[i] = rand() % 10;
       cout << "arr[" << i << "] = " << arr[i] << endl; } //massiv elementterin sikldy engizu

    int temp; 
    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            
            if (arr[j] > arr[j - 1]) {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                
            }
        }
    }                           //kopirshik suryptau sikly
    cout << endl;

    cout << endl;
    for (int i = 0; i < size; i++) {
        
        cout << "arr[" << i << "] = " << arr[i] << endl;    //natizheni shygaru                                  
    }
    cout << endl << sany;  ;
    return 0;
}
