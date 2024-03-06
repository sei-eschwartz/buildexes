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
abstract_0*** v0;
abstract_0*** v1;
abstract_0*** v2;
abstract_0*** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ C1 ();
/* method id 403 */ virtual void*** func0 (abstract_0*** v41, abstract_0*** v42, abstract_0*** v43);
/* method id 404 */ virtual abstract_0*** func0 (abstract_0*** v44);
C1 (special_constructor);
abstract_0*** v48;
abstract_0*** v49;
abstract_0*** v50;
abstract_0*** v51;
};
struct C2 : public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0*** v66;
abstract_0*** v67;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual void*** func0 (abstract_0*** v87, abstract_0*** v88, C2 v89);
C3 (special_constructor);
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
abstract_0*** v4 = new abstract_0** ();
abstract_0*** v5 = new abstract_0** ();
abstract_0*** v6 = new abstract_0** ();
abstract_0*** v7 = new abstract_0** ();
return;

}
/* method id 402 */ C1::C1 () {
abstract_0*** v15 = new abstract_0** ();
abstract_0*** v16 = new abstract_0** ();
abstract_0*** v17 = new abstract_0** ();
abstract_0*** v18 = new abstract_0** ();
return;

}
/* method id 403 */ void*** C1::func0 (abstract_0*** v41, abstract_0*** v42, abstract_0*** v43) {
return new void** ();

}
/* method id 404 */ abstract_0*** C1::func0 (abstract_0*** v44) {
abstract_0*** v45 = new abstract_0** ();
abstract_0*** v46 = new abstract_0** ();
abstract_0*** v47 = new abstract_0** ();
return v0;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
abstract_0*** v52 = new abstract_0** ();
abstract_0*** v53 = new abstract_0** ();
abstract_0*** v54 = new abstract_0** ();
abstract_0*** v55 = new abstract_0** ();
return;

}
/* method id 406 */ C2::~C2 () {
abstract_0*** v57 = new abstract_0** ();
abstract_0*** v58 = new abstract_0** ();
abstract_0*** v59 = new abstract_0** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
abstract_0*** v68 = new abstract_0** ();
return;

}
/* method id 408 */ C3::~C3 () {
abstract_0*** v69 = new abstract_0** ();
abstract_0*** v70 = new abstract_0** ();
abstract_0*** v71 = new abstract_0** ();
return;

}
/* method id 409 */ void*** C3::func0 (abstract_0*** v87, abstract_0*** v88, C2 v89) {
C2 v90 = *(&(*((new C2 ()))));
C2 v91 = *(&(*((new C2 ()))));
C2 v92 = *(&(*((new C2 ()))));
C2 v93 = *(&(*((new C2 ()))));
return new void** ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
4    | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
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
/*
class C1    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var48: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var49: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var50: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var51: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   +---
24   +--- (virtual base class C0)
24   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
32   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
40   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(52)
0    +---
0    | {vbptr}
4    | var66: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var67: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   +---
12   +--- (virtual base class C0)
12   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var48: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
40   | var49: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
44   | var50: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
48   | var51: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
52   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var48: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var49: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
40   | var50: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
44   | var51: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
48   +---
48   +--- (virtual base class C2)
48   | {vbptr}
52   | var66: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
56   | var67: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 48;
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
