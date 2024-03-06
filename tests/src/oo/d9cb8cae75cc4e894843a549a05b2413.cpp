// type for special constructors
struct special_constructor {};
void func0 (void** v0, void** v1, void** v2, void** v3);
void func1 (void** v4, void** v5, void** v6, void** v7);
void func2 (void** v12, void** v13, void** v14, void** v15);
void func3 (void** v20, void** v21, void** v22, void** v23);
// definitions
void func0 (void** v0, void** v1, void** v2, void** v3) {

v2 = new void* ();
v2 = v2;
v2 = v2;
v2 = new void* ();
return ::func2(v2, v2, v2, v3);

}
void func1 (void** v4, void** v5, void** v6, void** v7) {
void** v8;
void** v9;
void** v10;
void** v11;

v9 = v9;
v9 = v9;
v9 = v9;
v9 = v9;
return ::func2(v7, v7, v7, v7);

}
void func2 (void** v12, void** v13, void** v14, void** v15) {
void** v16;
void** v17;
void** v18;
void** v19;

v18 = v17;
return;

}
void func3 (void** v20, void** v21, void** v22, void** v23) {
void** v24;
void** v25;
void** v26;

v21 = v24;
v21 = v24;
return ::func1(v23, v22, v23, v22);

}
#include <iostream>
void check_driver() {
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
