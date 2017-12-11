#include <iostream>
using namespace std;


int ggt(int a, int b)
{
int i, k ;


  while (true)
  {
    if(a==0)
        {
            k = b;
            break;
        }
  else if (b==0)
  {
    k = a;
    break;
  }
  else if (b > a)
  {
    b = b-a;
  }
  else
    a = a-b;
  }
}


int main(int argc, char *argv[])
{
  int a, b;  // die ganzen Zahlen, deren ggT berechnet werden soll
  int k;   // Variable zum Speichern des ggT
cout << "Bitte geben sie zwei natürliche Zahlen ein" << endl;
cin >> a;

cin >> b;

k = ggt(a, b);

  cout << "Der groesste gemeinsame Teiler ist:  " << k << endl;
  
  return 0;
}
