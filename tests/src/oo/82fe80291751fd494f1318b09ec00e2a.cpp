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
/* method id 409 */ virtual void*** func0 (abstract_0*** v88, abstract_0*** v89, abstract_0*** v90);
/* method id 410 */ virtual abstract_0*** func0 (abstract_0*** v91);
C3 (special_constructor);
abstract_0*** v95;
abstract_0*** v96;
abstract_0*** v97;
abstract_0*** v98;
};
abstract_0* func1 (abstract_0*** v99, abstract_0*** v100, abstract_0*** v101, abstract_0*** v102);
abstract_0** func2 (abstract_0*** v107, abstract_0*** v108);
abstract_0* func3 (abstract_0*** v112, abstract_0*** v113, abstract_0*** v114, abstract_0*** v115);
abstract_0** func4 (abstract_0*** v119);
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
delete (new C2 ());
return new void** ();

}
/* method id 404 */ abstract_0*** C1::func0 (abstract_0*** v44) {
abstract_0*** v45 = new abstract_0** ();
abstract_0*** v46 = new abstract_0** ();
abstract_0*** v47 = new abstract_0** ();
return v2;

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
delete (new C1 ());
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
delete (new C3 ());
return;

}
/* method id 409 */ void*** C3::func0 (abstract_0*** v88, abstract_0*** v89, abstract_0*** v90) {
return new void** ();

}
/* method id 410 */ abstract_0*** C3::func0 (abstract_0*** v91) {
abstract_0*** v92 = new abstract_0** ();
abstract_0*** v93 = new abstract_0** ();
abstract_0*** v94 = new abstract_0** ();
delete (new C3 ());
return v50;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func1 (abstract_0*** v99, abstract_0*** v100, abstract_0*** v101, abstract_0*** v102) {
abstract_0*** v103;
abstract_0*** v104;
abstract_0*** v105;
abstract_0*** v106;

return new abstract_0 ();

}
abstract_0** func2 (abstract_0*** v107, abstract_0*** v108) {
abstract_0*** v109;
abstract_0*** v110;
abstract_0*** v111;

delete (new C1 ());
return ((abstract_0**) 0);

}
abstract_0* func3 (abstract_0*** v112, abstract_0*** v113, abstract_0*** v114, abstract_0*** v115) {
abstract_0*** v116;
abstract_0*** v117;
abstract_0*** v118;

return new abstract_0 ();

}
abstract_0** func4 (abstract_0*** v119) {
abstract_0*** v120;

return ((abstract_0**) 0);

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
class C3    size(76)
0    +---
0    | {vbptr}
4    | var95: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var96: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var97: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   | var98: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
20   +---
20   +--- (virtual base class C0)
20   | var0: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
24   | var1: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
28   | var2: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
32   | var3: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
36   +---
36   | {vtordisp for vbase 1}
40   +--- (virtual base class C1)
40   | {vfptr}
44   | {vbptr}
48   | var48: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
52   | var49: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
56   | var50: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
60   | var51: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
64   +---
64   +--- (virtual base class C2)
64   | {vbptr}
68   | var66: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
72   | var67: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
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
 const size_t model_offset = 64;
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
