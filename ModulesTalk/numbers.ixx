export module numbers;

#define MAGIC 42

export int get_magic_number();

int helper(int x) { return x + MAGIC; }

//export int break_my_code() { return 111; };