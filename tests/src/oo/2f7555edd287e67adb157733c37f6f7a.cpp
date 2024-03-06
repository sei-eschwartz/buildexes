// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
void func0 (abstract_0 v0);
// definitions
void func0 (abstract_0 v0) {
abstract_0 v1;
abstract_0 v2;

v2 = abstract_0();
return;

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
