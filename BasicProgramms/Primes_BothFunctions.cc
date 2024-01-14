#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}

/////
#include <stdio.h>
int main()
{
    int n;
    bool Primo = true;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(int i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            Primo = false;
            break;
        }
    }

    if (Primo)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
