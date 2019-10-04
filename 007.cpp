int reverse(long long x) {
	int X = x;
	int count = 0;
	int p = 1;
	int r = 0;
	while (X != 0)
	{
		X = X / 10;
		count++;
	}
	if (x < 0)
	{
		p = -1;
		x = -x;
	}
	for (int i = count; i >0; i--)
	{
		r = r + x%10*pow(10, i - 1);
		x = x / 10;
	}
	if (r < 0)
		return 0;
	return r*p;
}
