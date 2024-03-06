// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
/* method id 401 */ virtual ~C0 ();
C0 (special_constructor);
abstract_6*** v24;
abstract_6*** v25;
abstract_6*** v26;
};
struct C1 : public virtual C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
abstract_6*** v37;
abstract_6*** v38;
abstract_6*** v39;
};
struct C2 : public virtual C1 {
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
abstract_6*** v105;
abstract_6*** v106;
abstract_6*** v107;
abstract_6*** v108;
};
struct C3 : public virtual C1 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
abstract_6*** v140;
abstract_6*** v141;
};
void* func1 (abstract_6*** v142, abstract_6*** v143, abstract_6*** v144, abstract_6*** v145);
void* func2 (abstract_6*** v150, abstract_6*** v151, abstract_6*** v152);
void* func3 (abstract_6*** v156, abstract_6*** v157);
void** func4 (abstract_6*** v162, abstract_6*** v163);
// definitions
/* method id 400 */ C0::C0 () {
abstract_6*** v0 = ((abstract_6***) 0);
abstract_6*** v1 = ((abstract_6***) 0);
abstract_6*** v2 = ((abstract_6***) 0);
abstract_6*** v3 = ((abstract_6***) 0);
return;

}
/* method id 401 */ C0::~C0 () {
abstract_6*** v12 = ((abstract_6***) 0);
abstract_6*** v13 = ((abstract_6***) 0);
abstract_6*** v14 = ((abstract_6***) 0);
abstract_6*** v15 = ((abstract_6***) 0);
::func2(v15, v15, v15);
::func2(v15, v15, v15);
::func2(v15, v15, v15);
::func2(v15, v15, v15);
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
abstract_6*** v27 = ((abstract_6***) 0);
abstract_6*** v28 = ((abstract_6***) 0);
abstract_6*** v29 = ((abstract_6***) 0);
abstract_6*** v30 = ((abstract_6***) 0);
delete (new C1 ());
return;

}
/* method id 403 */ C1::~C1 () {
abstract_6*** v31 = ((abstract_6***) 0);
abstract_6*** v32 = ((abstract_6***) 0);
::func2(v38, v38, v38);
::func2(v38, v38, v38);
::func2(v38, v38, v38);
::func2(v38, v38, v38);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
abstract_6*** v40 = ((abstract_6***) 0);
abstract_6*** v41 = ((abstract_6***) 0);
abstract_6*** v42 = ((abstract_6***) 0);
abstract_6*** v43 = ((abstract_6***) 0);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
return;

}
/* method id 405 */ C2::C2 () {
abstract_6*** v44 = new abstract_6** ();
abstract_6*** v45 = new abstract_6** ();
abstract_6*** v46 = new abstract_6** ();
abstract_6*** v47 = new abstract_6** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
abstract_6*** v109 = ((abstract_6***) 0);
abstract_6*** v110 = ((abstract_6***) 0);
abstract_6*** v111 = ((abstract_6***) 0);
abstract_6*** v112 = ((abstract_6***) 0);
return;

}
/* method id 407 */ C3::~C3 () {
abstract_6*** v117 = ((abstract_6***) 0);
abstract_6*** v118 = ((abstract_6***) 0);
abstract_6*** v119 = ((abstract_6***) 0);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
::func2(v25, v25, v25);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func1 (abstract_6*** v142, abstract_6*** v143, abstract_6*** v144, abstract_6*** v145) {
abstract_6*** v146;
abstract_6*** v147;
abstract_6*** v148;
abstract_6*** v149;

return ((void*) 0);

}
void* func2 (abstract_6*** v150, abstract_6*** v151, abstract_6*** v152) {
abstract_6*** v153;
abstract_6*** v154;
abstract_6*** v155;

delete (new C1 ());
return ((void*) 0);

}
void* func3 (abstract_6*** v156, abstract_6*** v157) {
abstract_6*** v158;
abstract_6*** v159;
abstract_6*** v160;
abstract_6*** v161;

return ((void*) 0);

}
void** func4 (abstract_6*** v162, abstract_6*** v163) {
abstract_6*** v164;
abstract_6*** v165;
abstract_6*** v166;

::func2(v162, v162, v162);
::func2(v162, v162, v162);
::func2(v162, v162, v162);
return new void* ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var24: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
8    | var25: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
12   | var26: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
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
0    | {vbptr}
4    | var37: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
8    | var38: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
12   | var39: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var24: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
24   | var25: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
28   | var26: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
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
4    | var105: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
8    | var106: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
12   | var107: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
16   | var108: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var24: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
28   | var25: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
32   | var26: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
36   +---
36   +--- (virtual base class C1)
36   | {vbptr}
40   | var37: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
44   | var38: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
48   | var39: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
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
class C3    size(44)
0    +---
0    | {vbptr}
4    | var140: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
8    | var141: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var24: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
20   | var25: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
24   | var26: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var37: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
36   | var38: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
40   | var39: PtrType{DeletablePtrType{PtrType{AbstractType{6}}}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
