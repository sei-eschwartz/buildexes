// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v7;
abstract_0** v8;
abstract_0** v9;
};
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
delete (new C0 ());
v0 = ((abstract_0**) 0);
v0 = ((abstract_0**) 0);
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
v2 = v2;
v2 = v2;
v2 = v2;
v2 = v2;
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_1 C0::func0 () {
v8 = ((abstract_0**) 0);
v7 = ((abstract_0**) 0);
v9 = ((abstract_0**) 0);
v8 = ((abstract_0**) 0);
return abstract_1();

}
/* method id 403 */ C0::C0 () {
abstract_0** v3 = new abstract_0* ();
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
return;

}
C0::C0 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var7: PtrType{PtrType{AbstractType{0}}}
8    | var8: PtrType{PtrType{AbstractType{0}}}
12   | var9: PtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
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
