// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
C0* v29;
C0* v30;
C0* v31;
abstract_1** v32;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 405 */ C2 ();
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ virtual abstract_2* func2 (C0* v65, abstract_2** v66);
C2 (special_constructor);
C0* v99;
C0* v100;
abstract_2** v101;
C0* v102;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ ~C3 ();
C3 (special_constructor);
C0* v143;
C0* v144;
abstract_2** v145;
C0* v146;
};
C0* func3 (C0* v147, C0* v148, abstract_1** v149, C0* v150);
C0* func4 (C0* v155, abstract_2** v156, C0* v157, C0* v158);
C0* func5 (abstract_2** v163, C0* v164, abstract_2** v165, C0* v166);
C0 func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
return v30;

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = ((abstract_1**) 0);
delete (new C2 ());
return;

}
/* method id 404 */ C1::C1 () {
abstract_1** v15 = new abstract_1* ();
C0* v16 = ((C0*) 0);
C0* v17 = ((C0*) 0);
abstract_2** v18 = new abstract_2* ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
C0* v33 = ((C0*) 0);
C0* v34 = ((C0*) 0);
abstract_1** v35 = ((abstract_1**) 0);
C0* v36 = ((C0*) 0);
return;

}
/* method id 406 */ C2::~C2 () {
C0* v45 = ((C0*) 0);
C0* v46 = ((C0*) 0);
abstract_2** v47 = new abstract_2* ();
return;

}
/* method id 407 */ abstract_2* C2::func2 (C0* v65, abstract_2** v66) {
C0* v67 = (new C0 ());
C0* v68 = (new C0 ());
C0* v69 = (new C0 ());
C0* v70 = (new C0 ());
return ((abstract_2*) 0);

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
C0* v103 = ((C0*) 0);
abstract_1** v104 = new abstract_1* ();
C0* v105 = ((C0*) 0);
C0* v106 = ((C0*) 0);
return;

}
/* method id 409 */ C3::~C3 () {
C0* v123 = (new C0 ());
C0* v124 = (new C0 ());
abstract_2** v125 = ((abstract_2**) 0);
C0* v126 = (new C0 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0* func3 (C0* v147, C0* v148, abstract_1** v149, C0* v150) {
C0* v151;
C0* v152;
C0* v153;
abstract_1** v154;

return v151;

}
C0* func4 (C0* v155, abstract_2** v156, C0* v157, C0* v158) {
C0* v159;
C0* v160;
abstract_1** v161;
C0* v162;

delete (new C2 ());
return v158;

}
C0* func5 (abstract_2** v163, C0* v164, abstract_2** v165, C0* v166) {
C0* v167;
C0* v168;
C0* v169;
C0* v170;

return v166;

}
C0 func6 () {
C0* v171;
C0* v172;
abstract_2** v173;

return *(v172);

}
#include <iostream>
void check_driver() {
/*
class C0    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var29: PtrType{ClassType{0}}
12   | var30: PtrType{ClassType{0}}
16   | var31: PtrType{ClassType{0}}
20   | var32: PtrType{PtrType{AbstractType{1}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
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
0    | {vfptr}
4    | {vbptr}
8    | var99: PtrType{ClassType{0}}
12   | var100: PtrType{ClassType{0}}
16   | var101: PtrType{PtrType{AbstractType{2}}}
20   | var102: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var29: PtrType{ClassType{0}}
40   | var30: PtrType{ClassType{0}}
44   | var31: PtrType{ClassType{0}}
48   | var32: PtrType{PtrType{AbstractType{1}}}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
class C3    size(48)
0    +---
0    | {vbptr}
4    | var143: PtrType{ClassType{0}}
8    | var144: PtrType{ClassType{0}}
12   | var145: PtrType{PtrType{AbstractType{2}}}
16   | var146: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var29: PtrType{ClassType{0}}
36   | var30: PtrType{ClassType{0}}
40   | var31: PtrType{ClassType{0}}
44   | var32: PtrType{PtrType{AbstractType{1}}}
48   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 48;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
