// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 (void** v4, void** v5, void** v6, void** v7);
void func2 (void** v12, void** v13, void** v14, void** v15);
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v2 = v1;
v2 = v1;
return ::func1(v0, v0, v0, new void* ());

}
void func1 (void** v4, void** v5, void** v6, void** v7) {
void** v8;
void** v9;
void** v10;
void** v11;

v10 = new void* ();
v10 = new void* ();
v10 = new void* ();
v10 = new void* ();
return;

}
void func2 (void** v12, void** v13, void** v14, void** v15) {
void** v16;
void** v17;
void** v18;
void** v19;

v12 = v17;
v12 = v17;
return ::func0(v16, v16, new void* (), new void* ());

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
