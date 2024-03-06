// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 ();
void func2 ();
void func3 ();
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v1 = v1;
v1 = v1;
v1 = v1;
return ::func1();

}
void func1 () {
void** v4;

v4 = new void* ();
v4 = new void* ();
v4 = new void* ();
v4 = new void* ();
return;

}
void func2 () {

return;

}
void func3 () {
void** v5;
void** v6;
void** v7;
void** v8;

v6 = v7;
v6 = v7;
v8 = v7;
v8 = v7;
return ::func0(v8, v8, v8, v8);

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
