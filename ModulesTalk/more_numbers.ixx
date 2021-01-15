export module more_numbers;

#define MAGIC 21

int helper(int x) { return x + MAGIC; }

int get_magic_number() { return helper(5); }

export int more_magic() { return 1 + get_magic_number(); }
