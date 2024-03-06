// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 (void** v4, void** v5);
void func2 (void** v6, void** v7);
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v0 = new void* ();
v2 = new void* ();
v3 = new void* ();
v2 = new void* ();
return ::func2(v0, new void* ());

}
void func1 (void** v4, void** v5) {

v4 = v5;
v5 = v5;
v5 = v5;
v5 = v5;
return;

}
void func2 (void** v6, void** v7) {

return ::func1(v7, v7);

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
