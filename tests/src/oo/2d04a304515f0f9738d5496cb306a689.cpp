// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
abstract_0 func0 ();
abstract_0 func1 ();
abstract_0 func2 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_1 v3);
abstract_0 func3 ();
// definitions
abstract_0 func0 () {

::func3();
::func3();
::func3();
::func3();
return abstract_0();

}
abstract_0 func1 () {

return abstract_0();

}
abstract_0 func2 (abstract_0* v0, abstract_0* v1, abstract_0* v2, abstract_1 v3) {

v3 = v3;
v3 = v3;
return ::func0();

}
abstract_0 func3 () {

return abstract_0();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
