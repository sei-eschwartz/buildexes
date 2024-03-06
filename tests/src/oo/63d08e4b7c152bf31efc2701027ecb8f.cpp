// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual abstract_0 func0 (C0 v2, C0 v3, abstract_0** v4, abstract_0** v5);
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0** v24;
abstract_0** v25;
abstract_0** v26;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
/* method id 406 */ virtual abstract_0 func1 (abstract_0** v110, abstract_0** v111);
C2 (special_constructor);
abstract_0** v150;
abstract_0** v151;
abstract_0** v152;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual abstract_0 func1 (abstract_0** v275, abstract_0** v276);
C3 (special_constructor);
abstract_0** v315;
abstract_0** v316;
abstract_0** v317;
};
abstract_0 func2 (abstract_0** v318, abstract_0** v319, abstract_0** v320, abstract_0** v321);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
C0 v0 = *(&(*(((C0*) 0))));
C0 v1 = *(&(*(((C0*) 0))));
return;

}
/* method id 402 */ abstract_0 C1::func0 (C0 v2, C0 v3, abstract_0** v4, abstract_0** v5) {
C0 v6 = *((new C0 ()));
return abstract_0();

}
/* method id 403 */ C1::~C1 () {
abstract_0** v7 = new abstract_0* ();
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
abstract_0** v27 = new abstract_0* ();
abstract_0** v28 = new abstract_0* ();
abstract_0** v29 = new abstract_0* ();
abstract_0** v30 = new abstract_0* ();
delete (new C1 ());
return;

}
/* method id 405 */ C2::C2 () {
abstract_0** v31 = new abstract_0* ();
abstract_0** v32 = new abstract_0* ();
abstract_0** v33 = new abstract_0* ();
abstract_0** v34 = new abstract_0* ();
return;

}
/* method id 406 */ abstract_0 C2::func1 (abstract_0** v110, abstract_0** v111) {
abstract_0** v112 = new abstract_0* ();
C0 v113 = *(((C0*) 0));
abstract_0** v114 = new abstract_0* ();
abstract_0** v115 = new abstract_0* ();
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_0** v153 = new abstract_0* ();
abstract_0** v154 = new abstract_0* ();
abstract_0** v155 = new abstract_0* ();
abstract_0** v156 = new abstract_0* ();
return;

}
/* method id 408 */ C3::~C3 () {
abstract_0** v157 = new abstract_0* ();
abstract_0** v158 = new abstract_0* ();
abstract_0** v159 = new abstract_0* ();
return;

}
/* method id 409 */ abstract_0 C3::func1 (abstract_0** v275, abstract_0** v276) {
abstract_0** v277 = new abstract_0* ();
C0 v278 = *(((C0*) 0));
abstract_0** v279 = new abstract_0* ();
abstract_0** v280 = new abstract_0* ();
return abstract_0();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func2 (abstract_0** v318, abstract_0** v319, abstract_0** v320, abstract_0** v321) {
abstract_0** v322;
abstract_0** v323;
abstract_0** v324;
abstract_0** v325;

return abstract_0();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | var24: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var25: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var26: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var150: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var151: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var152: DeletablePtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | var24: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var25: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var26: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
36   +--- (virtual base class C0)
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    | var315: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var316: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var317: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | var24: DeletablePtrType{PtrType{AbstractType{0}}}
24   | var25: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var26: DeletablePtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C0)
32   +---
32   | {vtordisp for vbase 2}
36   +--- (virtual base class C2)
36   | {vfptr}
40   | {vbptr}
44   | var150: DeletablePtrType{PtrType{AbstractType{0}}}
48   | var151: DeletablePtrType{PtrType{AbstractType{0}}}
52   | var152: DeletablePtrType{PtrType{AbstractType{0}}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
