// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
void* func0 ();
abstract_0*** func1 ();
void func2 ();
abstract_0* func3 (abstract_1 v0);
// definitions
void* func0 () {

return ((void*) 0);

}
abstract_0*** func1 () {

return new abstract_0** ();

}
void func2 () {

::func0();
::func1();
::func1();
::func1();
return;

}
abstract_0* func3 (abstract_1 v0) {
abstract_1 v1;
abstract_1 v2;
abstract_1 v3;
abstract_1 v4;

v2 = v2;
v2 = v2;
return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
