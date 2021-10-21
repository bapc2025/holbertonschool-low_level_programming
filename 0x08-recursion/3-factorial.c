
/**
 * factorial - return factorial number of n
 * @n: int number find factorial number
 * Return: factorial number of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
