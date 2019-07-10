char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, x = 0, in, results;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + x) != '\0')
		x++;

	if (i >= x)
		in = i;
	else
		in = x;

	while (in >= 0)
	{
		results += (*(n1-- + i) - '0') + (*(n2-- + x));
		in--;
	}
	printf ("%d", results);
	return ("done!");
}