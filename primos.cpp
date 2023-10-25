
#include <bits/stdc++.h>
using namespace std;

bool testaPrimo(int n, int i = 2)
{

    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;

    return testaPrimo(n, i + 1);
}
 
int main()
{
    int n = 0;
    do{
    
    printf("Digite um numero ou zero para sair: \n");
    scanf("%d",&n);
    getchar();
    if (testaPrimo(n))
        printf("O numero %d é primo\n",n);
    else
        printf("O numero %d não primo\n",n);
    }while(n!=0);
}