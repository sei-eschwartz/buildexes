// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v65;
};
struct C2  {
/* method id 403 */ C2 ();
/* method id 404 */ ~C2 ();
C2 (special_constructor);
C0 v67;
C0 v68;
abstract_0*** v69;
abstract_0*** v70;
};
struct C3 : public C0, public virtual C2, public C1 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ C3 ();
C3 (special_constructor);
};
abstract_0* func2 (abstract_0*** v79, abstract_1 v80, abstract_0*** v81);
abstract_0* func3 ();
abstract_0* func4 ();
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(&(*(((C0*) 0))));
C0 v1 = *(&(*(((C0*) 0))));
C0 v2 = *(&(*(((C0*) 0))));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
v67 = v67;
return;

}
/* method id 404 */ C2::~C2 () {
v68 = *((C0*)((new C3 ())));
v68 = *((C0*)((new C3 ())));
v68 = *((C0*)((new C3 ())));
v68 = *((C0*)((new C3 ())));
return;

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::~C3 () {
C0 v71 = *((new C0 ()));
return;

}
/* method id 406 */ C3::C3 () {
abstract_0*** v76 = new abstract_0** ();
abstract_1 v77 = abstract_1();
abstract_0*** v78 = new abstract_0** ();
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0* func2 (abstract_0*** v79, abstract_1 v80, abstract_0*** v81) {
abstract_1 v82;
abstract_1 v83;
C0 v84;
abstract_0*** v85;

delete (new C2 ());
return new abstract_0 ();

}
abstract_0* func3 () {
C0 v86;

return ((abstract_0*) 0);

}
abstract_0* func4 () {

return ::func3();

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
/*
class C1    size(1)
0    +---
0    | var65: ClassType{0}
1    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | var67: ClassType{0}
1    | var68: ClassType{0}
2    | alignment: 
4    | var69: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var70: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | +--- (base class C1)
4    | | var65: ClassType{0}
5    | +---
5    | alignment: VBPtr aligned to pointer size
8    | {vbptr}
12   +---
12   +--- (virtual base class C2)
12   | var67: ClassType{0}
13   | var68: ClassType{0}
14   | alignment: 
16   | var69: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var70: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
