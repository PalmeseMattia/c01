void ft_ultimate_div_mod(int *a, int *b)
{
	int cpy_a = *a;
	int cpy_b = *b;

	*a = cpy_a / cpy_b;
	*b = cpy_a % cpy_b;
}
