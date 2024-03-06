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

::func3(abstract_1());
return ((void*) 0);

}
abstract_0*** func1 () {

::func2();
return ((abstract_0***) 0);

}
void func2 () {

return;

}
abstract_0* func3 (abstract_1 v0) {
abstract_1 v1;
abstract_1 v2;
void**** v3;
void**** v4;

v2 = v2;
v4 = new void*** ();
v0 = v2;
v4 = new void*** ();
return new abstract_0 ();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
