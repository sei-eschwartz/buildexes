// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
void* func0 ();
abstract_0*** func1 ();
void func2 ();
abstract_0 func3 ();
// definitions
void* func0 () {

::func2();
return ((void*) 0);

}
abstract_0*** func1 () {

::func2();
::func2();
::func2();
return ((abstract_0***) 0);

}
void func2 () {

::func3();
::func3();
return;

}
abstract_0 func3 () {
abstract_0*** v0;
abstract_1 v1;
abstract_0*** v2;
abstract_0*** v3;

return abstract_0();

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
