// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
abstract_0* func0 (abstract_1 v0, abstract_1 v1);
// definitions
abstract_0* func0 (abstract_1 v0, abstract_1 v1) {

v0 = abstract_1();
v0 = v1;
v0 = abstract_1();
v0 = v0;
return new abstract_0 ();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
