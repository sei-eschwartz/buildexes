// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void** func2 ();
C0 (special_constructor);
void** v2;
abstract_0 v3;
};
// definitions
/* method id 400 */ C0::~C0 () {
((new C0 ()))->C0::func2();
((new C0 ()))->C0::func2();
((new C0 ()))->C0::func2();
((new C0 ()))->C0::func2();
return;

}
/* method id 401 */ C0::C0 () {
void** v0 = ((void**) 0);
return;

}
/* method id 402 */ void** C0::func2 () {
void** v1 = ((void**) 0);
delete (new C0 ());
v2 = v1;
return new void* ();

}
C0::C0 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | var2: PtrType{PtrType{VoidType{}}}
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
