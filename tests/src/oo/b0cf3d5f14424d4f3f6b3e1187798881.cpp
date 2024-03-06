// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
abstract_0 func0 ();
abstract_0 func1 (abstract_0* v0);
abstract_0 func2 (abstract_0* v2);
abstract_0 func3 ();
// definitions
abstract_0 func0 () {

::func1(((abstract_0*) 0));
return ::func3();

}
abstract_0 func1 (abstract_0* v0) {
abstract_0* v1;

return abstract_0();

}
abstract_0 func2 (abstract_0* v2) {

::func1(((abstract_0*) 0));
return ::func3();

}
abstract_0 func3 () {

::func1(((abstract_0*) 0));
return ::func1(((abstract_0*) 0));

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
