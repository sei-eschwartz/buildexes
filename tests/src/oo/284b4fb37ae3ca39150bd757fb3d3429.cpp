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
abstract_0** v0;
abstract_0** v1;
abstract_0** v2;
abstract_0** v3;
};
struct C1 : public virtual C0 {
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
abstract_0** v15;
abstract_0** v16;
abstract_0** v17;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0** v50;
abstract_0** v51;
abstract_0** v52;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual abstract_0* func0 (abstract_0** v79);
C3 (special_constructor);
abstract_0** v91;
abstract_0** v92;
abstract_0** v93;
abstract_0** v94;
};
abstract_0* func1 (abstract_0** v95, abstract_0** v96, abstract_0** v97, abstract_0** v98);
abstract_0* func2 (abstract_0** v99, abstract_0** v100, abstract_0** v101, abstract_0** v102);
abstract_0* func3 (C3 v107, C3 v108, C3 v109, abstract_0** v110);
abstract_0* func4 (C3 v114, C3 v115, C3 v116, C3 v117);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
abstract_0** v4 = new abstract_0* ();
abstract_0** v5 = new abstract_0* ();
abstract_0** v6 = new abstract_0* ();
abstract_0** v7 = new abstract_0* ();
return;

}
/* method id 402 */ C1::C1 () {
abstract_0** v8 = new abstract_0* ();
abstract_0** v9 = new abstract_0* ();
abstract_0** v10 = new abstract_0* ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 403 */ C2::C2 () {
abstract_0** v18 = new abstract_0* ();
abstract_0** v19 = new abstract_0* ();
abstract_0** v20 = new abstract_0* ();
abstract_0** v21 = new abstract_0* ();
return;

}
/* method id 404 */ C2::~C2 () {
abstract_0** v31 = new abstract_0* ();
abstract_0** v32 = new abstract_0* ();
abstract_0** v33 = new abstract_0* ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_0** v53 = new abstract_0* ();
abstract_0** v54 = new abstract_0* ();
abstract_0** v55 = new abstract_0* ();
abstract_0** v56 = new abstract_0* ();
return;

}
/* method id 406 */ C3::~C3 () {
abstract_0** v57 = new abstract_0* ();
abstract_0** v58 = new abstract_0* ();
abstract_0** v59 = new abstract_0* ();
return;

}
/* method id 407 */ abstract_0* C3::func0 (abstract_0** v79) {
abstract_0** v80 = new abstract_0* ();
return new abstract_0 ();

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func1 (abstract_0** v95, abstract_0** v96, abstract_0** v97, abstract_0** v98) {

return new abstract_0 ();

}
abstract_0* func2 (abstract_0** v99, abstract_0** v100, abstract_0** v101, abstract_0** v102) {
abstract_0** v103;
abstract_0** v104;
C3 v105;
C3 v106;

return ((abstract_0*) 0);

}
abstract_0* func3 (C3 v107, C3 v108, C3 v109, abstract_0** v110) {
C3 v111;
C3 v112;
C3 v113;

return new abstract_0 ();

}
abstract_0* func4 (C3 v114, C3 v115, C3 v116, C3 v117) {
C3 v118;
C3 v119;
C3 v120;
C3 v121;

return ((abstract_0*) 0);

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | var0: DeletablePtrType{PtrType{AbstractType{0}}}
4    | var1: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var2: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var3: DeletablePtrType{PtrType{AbstractType{0}}}
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
class C1    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var15: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: DeletablePtrType{PtrType{AbstractType{0}}}
24   | var1: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var2: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var3: DeletablePtrType{PtrType{AbstractType{0}}}
36   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
4    | var50: DeletablePtrType{PtrType{AbstractType{0}}}
8    | var51: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var52: DeletablePtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C0)
16   | var0: DeletablePtrType{PtrType{AbstractType{0}}}
20   | var1: DeletablePtrType{PtrType{AbstractType{0}}}
24   | var2: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var3: DeletablePtrType{PtrType{AbstractType{0}}}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
44   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
48   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 32;
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
8    | var91: DeletablePtrType{PtrType{AbstractType{0}}}
12   | var92: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var93: DeletablePtrType{PtrType{AbstractType{0}}}
20   | var94: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C0)
24   | var0: DeletablePtrType{PtrType{AbstractType{0}}}
28   | var1: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var2: DeletablePtrType{PtrType{AbstractType{0}}}
36   | var3: DeletablePtrType{PtrType{AbstractType{0}}}
40   +---
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var15: DeletablePtrType{PtrType{AbstractType{0}}}
52   | var16: DeletablePtrType{PtrType{AbstractType{0}}}
56   | var17: DeletablePtrType{PtrType{AbstractType{0}}}
60   +---
60   +--- (virtual base class C2)
60   | {vbptr}
64   | var50: DeletablePtrType{PtrType{AbstractType{0}}}
68   | var51: DeletablePtrType{PtrType{AbstractType{0}}}
72   | var52: DeletablePtrType{PtrType{AbstractType{0}}}
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
 const size_t model_offset = 60;
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
