// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
abstract_0 func0 ();
abstract_0 func1 (abstract_0* v0);
abstract_0 func2 (abstract_0* v2, abstract_1 v3);
abstract_0 func3 (abstract_1 v4, abstract_0* v5, abstract_0* v6, abstract_0* v7);
// definitions
abstract_0 func0 () {

::func2(new abstract_0 (), abstract_1());
::func1(((abstract_0*) 0));
::func1(((abstract_0*) 0));
::func1(((abstract_0*) 0));
return ::func3(abstract_1(), new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
abstract_0 func1 (abstract_0* v0) {
abstract_0* v1;

return abstract_0();

}
abstract_0 func2 (abstract_0* v2, abstract_1 v3) {

return abstract_0();

}
abstract_0 func3 (abstract_1 v4, abstract_0* v5, abstract_0* v6, abstract_0* v7) {
abstract_0* v8;
abstract_0* v9;
abstract_1 v10;
abstract_1 v11;

return ::func2(new abstract_0 (), abstract_1());

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
