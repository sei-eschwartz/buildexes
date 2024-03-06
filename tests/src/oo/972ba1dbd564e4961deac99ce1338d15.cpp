// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 (void** v4, void** v5, void** v6, void** v7);
void func2 (void** v10, void** v11, void** v12, void** v13);
void func3 (void** v18, void** v19);
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v1 = v1;
v1 = v1;
v1 = v1;
return;

}
void func1 (void** v4, void** v5, void** v6, void** v7) {
void** v8;
void** v9;

v6 = v9;
v8 = v9;
v6 = v9;
v5 = v9;
return;

}
void func2 (void** v10, void** v11, void** v12, void** v13) {
void** v14;
void** v15;
void** v16;
void** v17;

v14 = v16;
v15 = v16;
v14 = v16;
v16 = new void* ();
return;

}
void func3 (void** v18, void** v19) {
void** v20;

v18 = v20;
return;

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
