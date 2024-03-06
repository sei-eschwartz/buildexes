// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
abstract_0** func0 (abstract_0*** v0);
abstract_0** func1 (abstract_0*** v1, abstract_0*** v2);
// definitions
abstract_0** func0 (abstract_0*** v0) {

return new abstract_0* ();

}
abstract_0** func1 (abstract_0*** v1, abstract_0*** v2) {
abstract_0*** v3;
abstract_0*** v4;

v4 = new abstract_0** ();
return new abstract_0* ();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
