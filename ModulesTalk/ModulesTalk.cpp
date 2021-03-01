import numbers;
import more_numbers;
import printer;

int main() {

  // const auto res2 = helper(5); //Will not compile since not exported.
  const auto res = get_magic_number();
  print_stuff(res);
  const auto res3 = more_magic();
  print_stuff(res3);
  print_stuff(3.14);
  print_stuff("Hallo");
  //return break_my_code();
}
