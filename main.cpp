#include <iostream>
#include <fstream>

using namespace std;

void zad1()
{
    ifstream file ("liczby_przykladowe.txt");

    if(file.is_open())
    {
        int liczba[100] = {};

        for(int i = 0; i< 100; i++)
        {
            file >> liczba[i];
        }

        int odp;

        for(int i = 0, j = 100; i < 49, j > 50; i++, j--)
        {


            odp = (liczba[j] + liczba[i]) / 2;

        }


        cout << odp;




        file.close();
    }
    else
    {
        cout << "error";
    }
}



void zad2()
{
    ifstream file ("liczby_przykladowe.txt");

    if(file.is_open())
    {
        int makspierwsza;

         int liczba[100] = {};

        for(int i = 0; i< 100; i++)
        {
            file >> liczba[i];
        }
        for(int j = 0; j < 100; j++)
        {
             for(int i = 0; i*i < liczba[j]; i++)
             {
                 if(liczba[j] ==   )
             }
        }






        file.close();
    }
    else
    {
        cout << "error";
    }
}

int main()
{
    zad2();
}
