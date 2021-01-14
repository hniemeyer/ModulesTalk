module numbers;

#define MAGIC 42

int get_magic_number()
{
	return helper(5);
}

int helper(int x)
{
	return x + MAGIC;
}