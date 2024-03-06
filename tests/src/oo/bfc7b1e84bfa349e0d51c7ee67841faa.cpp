// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 (void** v4, void** v5);
void func2 (void** v6, void** v7);
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v0 = new void* ();
v2 = new void* ();
v0 = new void* ();
return;

}
void func1 (void** v4, void** v5) {

v5 = new void* ();
return;

}
void func2 (void** v6, void** v7) {

v6 = v7;
v7 = v7;
::func1(v6, v6);
::func1(v6, v6);
return;

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
