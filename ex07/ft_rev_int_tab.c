void ft_rev_int_tab(int *tab, int size)
{
	int n;
	int tmp;
	n = 0;

	while(n < size / 2){
		tmp = tab[n]
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = tmp;
	}
}
