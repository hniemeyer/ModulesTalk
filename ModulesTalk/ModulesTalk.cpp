import numbers;
import more_numbers;
import printer;

//TODO
//2. module parts / fragments
//3. Header units
//5. export structs / classes

int main()
{
	
	//const auto res2 = helper(5); //Will not compile since not exported.
	const auto res = get_magic_number();
	print_stuff(res);
	const auto res3 = more_magic();
	print_stuff(res3);
}

