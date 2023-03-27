/**
 * swap_int -swaps two int values
 * @a : integer to swap
 * @b : integer to swap
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
