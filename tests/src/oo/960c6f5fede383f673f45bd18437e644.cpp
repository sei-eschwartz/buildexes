// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual void func0 (void** v0, abstract_0 v1, void** v2);
/* method id 401 */ C0 ();
C0 (special_constructor);
abstract_0 v3;
};
void func2 (void** v4, void* v5, void* v6, void** v7);
void func3 (abstract_0 v11, void** v12, abstract_1 v13, void** v14);
// definitions
/* method id 400 */ void C0::func0 (void** v0, abstract_0 v1, void** v2) {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

void func2 (void** v4, void* v5, void* v6, void** v7) {
abstract_0 v8;
abstract_0 v9;
void* v10;

return;

}
void func3 (abstract_0 v11, void** v12, abstract_1 v13, void** v14) {
abstract_0 v15;

delete (new C0 ());
return ::func2(v12, ((void*) 0), ((void*) 0), v12);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var3: AbstractType{0}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
