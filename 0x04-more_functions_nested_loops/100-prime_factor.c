#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
long long maxPrimeFactors(long long n)
{
    long long largest_prime = -1, i = 2;
    while (i * i <= n)
{
        while (n % i == 0)
{
            largest_prime = i;
            n = n / i;
}
        i = i + 1;
}
    if (n > 1)
{
        largest_prime = n;
}
    return largest_prime;
}
int main()
{
    long long n = 612852475143;
    printf("%lld", maxPrimeFactors(n));
    return 0;
}

