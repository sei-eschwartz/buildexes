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
/* method id 401 */ C1 ();
/* method id 402 */ virtual ~C1 ();
C1 (special_constructor);
abstract_0*** v35;
abstract_0*** v36;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_0*** v37;
abstract_0*** v38;
abstract_0*** v39;
abstract_0*** v40;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual abstract_0** func0 (abstract_0*** v64);
C3 (special_constructor);
abstract_0*** v76;
abstract_0*** v77;
abstract_0*** v78;
abstract_0*** v79;
};
abstract_0* func3 (abstract_0*** v80, abstract_0*** v81, abstract_0*** v82, abstract_0*** v83);
abstract_0* func4 (abstract_0*** v84, abstract_0*** v85, abstract_0*** v86, abstract_0*** v87);
abstract_0* func5 (C3 v92, C3 v93, abstract_0*** v94, C3 v95);
abstract_0* func6 (C3 v98, C3 v99, C3 v100, C3 v101);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0*** v4 = new abstract_0** ();
abstract_0*** v5 = new abstract_0** ();
abstract_0*** v6 = new abstract_0** ();
abstract_0*** v7 = new abstract_0** ();
return;

}
/* method id 402 */ C1::~C1 () {
abstract_0*** v8 = new abstract_0** ();
abstract_0*** v9 = new abstract_0** ();
abstract_0*** v10 = new abstract_0** ();
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_0*** v41 = new abstract_0** ();
return;

}
/* method id 406 */ C3::~C3 () {
abstract_0*** v42 = new abstract_0** ();
abstract_0*** v43 = new abstract_0** ();
abstract_0*** v44 = new abstract_0** ();
return;

}
/* method id 407 */ abstract_0** C3::func0 (abstract_0*** v64) {
abstract_0*** v65 = new abstract_0** ();
return new abstract_0* ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func3 (abstract_0*** v80, abstract_0*** v81, abstract_0*** v82, abstract_0*** v83) {

delete (new C1 ());
return ((abstract_0*) 0);

}
abstract_0* func4 (abstract_0*** v84, abstract_0*** v85, abstract_0*** v86, abstract_0*** v87) {
abstract_0*** v88;
abstract_0*** v89;
C3 v90;
C3 v91;

return new abstract_0 ();

}
abstract_0* func5 (C3 v92, C3 v93, abstract_0*** v94, C3 v95) {
C3 v96;
C3 v97;

return ((abstract_0*) 0);

}
abstract_0* func6 (C3 v98, C3 v99, C3 v100, C3 v101) {
C3 v102;
C3 v103;
C3 v104;
C3 v105;

return ((abstract_0*) 0);

}
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
class C1    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var35: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var36: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   +---
16   +--- (virtual base class C0)
16   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
32   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
4    | var37: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var38: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var39: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var40: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
32   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var35: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
48   | var36: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const size_t model_offset = 36;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(76)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var76: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var77: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var78: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   | var79: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   +---
24   +--- (virtual base class C0)
24   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
32   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
36   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var35: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
52   | var36: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
56   +---
56   +--- (virtual base class C2)
56   | {vbptr}
60   | var37: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
64   | var38: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
68   | var39: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
72   | var40: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
76   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 76;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
 const size_t model_offset = 56;
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
