// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
void* func0 ();
abstract_0*** func1 ();
void func2 ();
void func3 (abstract_1* v0);
// definitions
void* func0 () {

::func3(((abstract_1*) 0));
return ((void*) 0);

}
abstract_0*** func1 () {

return ((abstract_0***) 0);

}
void func2 () {

return ::func3(new abstract_1 ());

}
void func3 (abstract_1* v0) {

return ::func2();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
