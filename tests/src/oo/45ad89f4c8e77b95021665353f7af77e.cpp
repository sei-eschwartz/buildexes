// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
C0 func1 (void* v0, void* v1);
void func2 (void* v3, C0* v4);
void func3 (C0* v7);
void func4 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

C0 func1 (void* v0, void* v1) {
void* v2;

return *(&(*((new C0 ()))));

}
void func2 (void* v3, C0* v4) {
void* v5;
C0* v6;

return;

}
void func3 (C0* v7) {
C0* v8;
C0* v9;
void* v10;
void* v11;

return ::func2(v10, v9);

}
void func4 () {
C0* v12;
C0* v13;
abstract_0 v14;

return ::func3(v13);

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
