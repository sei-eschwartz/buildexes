// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
abstract_0 func0 ();
abstract_0 func1 ();
// definitions
abstract_0 func0 () {

::func1();
::func1();
::func1();
return abstract_0();

}
abstract_0 func1 () {

::func0();
::func0();
::func0();
return ::func0();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
