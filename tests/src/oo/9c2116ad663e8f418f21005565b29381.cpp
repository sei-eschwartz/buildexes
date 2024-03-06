// type for special constructors
struct special_constructor {};
struct C0;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
C0 func1 (void* v0, void* v1);
void func2 (void* v3, C0* v4, C0* v5);
C0 func3 (C0* v7, void* v8, void* v9, C0* v10);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

C0 func1 (void* v0, void* v1) {
void* v2;

delete (new C0 ());
return ::func3(((C0*) 0), v2, v2, ((C0*) 0));

}
void func2 (void* v3, C0* v4, C0* v5) {
C0* v6;

v3 = v3;
v3 = v3;
return;

}
C0 func3 (C0* v7, void* v8, void* v9, C0* v10) {
C0* v11;
void* v12;
C0* v13;
C0* v14;

return ::func1(v12, v12);

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
