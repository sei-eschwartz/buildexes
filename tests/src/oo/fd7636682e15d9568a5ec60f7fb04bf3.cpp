// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ abstract_0 func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3);
C0 (special_constructor);
abstract_0** v8;
abstract_0** v9;
abstract_0** v10;
abstract_0** v11;
};
struct C1 : public C0 {
/* method id 403 */ abstract_0 func0 (abstract_0** v12);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v17;
abstract_1 v18;
C0 v19;
C0 v20;
};
abstract_0 func3 (abstract_0** v21, abstract_0** v22, abstract_1 v23, C0 v24);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
/* method id 401 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 402 */ abstract_0 C0::func1 (abstract_0** v0, abstract_0** v1, abstract_0** v2, abstract_0** v3) {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
return abstract_0();

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0** v12) {
delete (new C1 ());
delete (new C0 ());
return ::func3(v9, v9, abstract_1(), v20);

}
/* method id 404 */ C1::C1 () {
abstract_0** v13 = new abstract_0* ();
abstract_0** v14 = new abstract_0* ();
abstract_1 v15 = abstract_1();
abstract_0** v16 = new abstract_0* ();
delete (new C1 ());
delete (new C0 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_0 func3 (abstract_0** v21, abstract_0** v22, abstract_1 v23, C0 v24) {
C0 v25;

v25 = v25;
return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var8: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var9: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var10: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var11: DeletablePtrType{PtrType{AbstractType{0}}}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(68)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | | var8: DeletablePtrType{PtrType{AbstractType{0}}}
8    | | var9: DeletablePtrType{PtrType{AbstractType{0}}}
12   | | var10: DeletablePtrType{PtrType{AbstractType{0}}}
16   | | var11: DeletablePtrType{PtrType{AbstractType{0}}}
20   | +---
20   | var17: PtrType{AbstractType{0}}
24   | var18: AbstractType{1}
28   | var19: ClassType{0}
48   | var20: ClassType{0}
68   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 68;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
