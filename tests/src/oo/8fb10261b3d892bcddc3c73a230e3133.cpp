// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
abstract_0 func0 ();
abstract_0 func1 (abstract_1 v0, abstract_1 v1, abstract_1 v2);
abstract_0 func2 (abstract_1 v4);
abstract_0 func3 ();
// definitions
abstract_0 func0 () {

::func3();
::func2(abstract_1());
::func2(abstract_1());
::func1(abstract_1(), abstract_1(), abstract_1());
return abstract_0();

}
abstract_0 func1 (abstract_1 v0, abstract_1 v1, abstract_1 v2) {
abstract_1 v3;

::func2(v1);
::func2(v1);
return abstract_0();

}
abstract_0 func2 (abstract_1 v4) {
abstract_1 v5;

return abstract_0();

}
abstract_0 func3 () {
abstract_1 v6;
abstract_1 v7;
abstract_1 v8;

v7 = v8;
return abstract_0();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
