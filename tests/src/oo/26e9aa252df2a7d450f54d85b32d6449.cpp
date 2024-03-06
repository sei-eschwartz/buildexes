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
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_0 func0 (C0 v8, abstract_0* v9);
/* method id 405 */ virtual ~C1 ();
C1 (special_constructor);
C0 v38;
abstract_0** v39;
C0 v40;
C0 v41;
};
struct C2 : public virtual C1 {
/* method id 406 */ virtual ~C2 ();
/* method id 407 */ C2 ();
C2 (special_constructor);
C0 v50;
C0 v51;
abstract_1 v52;
C0 v53;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ ~C3 ();
/* method id 409 */ C3 ();
C3 (special_constructor);
C0 v96;
C0 v97;
abstract_1 v98;
C0 v99;
};
abstract_0 func3 (abstract_1 v100);
abstract_0 func4 (C0 v105, abstract_1 v106);
abstract_0 func5 (abstract_1 v111);
abstract_0 func6 (C0 v115, C0 v116, abstract_0** v117, C0 v118);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return abstract_0();

}
/* method id 403 */ C1::C1 () {
abstract_0* v0 = new abstract_0 ();
abstract_0* v1 = new abstract_0 ();
abstract_0* v2 = new abstract_0 ();
abstract_0* v3 = new abstract_0 ();
return;

}
/* method id 404 */ abstract_0 C1::func0 (C0 v8, abstract_0* v9) {
C0 v10 = *(&(*((new C0 ()))));
C0 v11 = *(&(*((new C0 ()))));
abstract_0* v12 = ((abstract_0*) 0);
C0 v13 = *(&(*((new C0 ()))));
return abstract_0();

}
/* method id 405 */ C1::~C1 () {
C0 v34 = *(((C0*) 0));
C0 v35 = *(((C0*) 0));
C0 v36 = *(((C0*) 0));
C0 v37 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::~C2 () {
C0 v42 = *(((C0*) 0));
C0 v43 = *(((C0*) 0));
C0 v44 = *(((C0*) 0));
abstract_1 v45 = abstract_1();
return;

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
C0 v54 = *(((C0*) 0));
C0 v55 = *(((C0*) 0));
C0 v56 = *(((C0*) 0));
C0 v57 = *(((C0*) 0));
return;

}
/* method id 409 */ C3::C3 () {
abstract_1 v58 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func3 (abstract_1 v100) {
C0 v101;
C0 v102;
C0 v103;
C0 v104;

return ::func4(*(&(v104)), abstract_1());

}
abstract_0 func4 (C0 v105, abstract_1 v106) {
C0 v107;
C0 v108;
C0 v109;
C0 v110;

return abstract_0();

}
abstract_0 func5 (abstract_1 v111) {
C0 v112;
C0 v113;
abstract_1 v114;

return ::func4(v113, abstract_1());

}
abstract_0 func6 (C0 v115, C0 v116, abstract_0** v117, C0 v118) {
C0 v119;
abstract_0** v120;
abstract_2 v121;
C0 v122;

return ::func3(abstract_1());

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var38: ClassType{0}
9    | alignment: 
12   | var39: DeletablePtrType{PtrType{AbstractType{0}}}
16   | var40: ClassType{0}
17   | var41: ClassType{0}
18   | alignment: 
20   +---
20   +--- (virtual base class C0)
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var50: ClassType{0}
5    | var51: ClassType{0}
6    | alignment: 
8    | var52: AbstractType{1}
12   | var53: ClassType{0}
13   | alignment: 
16   +---
16   +--- (virtual base class C0)
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var38: ClassType{0}
25   | alignment: 
28   | var39: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var40: ClassType{0}
33   | var41: ClassType{0}
34   | alignment: 
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(52)
0    +---
0    | {vbptr}
4    | var96: ClassType{0}
5    | var97: ClassType{0}
6    | alignment: 
8    | var98: AbstractType{1}
12   | var99: ClassType{0}
13   | alignment: 
16   +---
16   +--- (virtual base class C0)
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   | var38: ClassType{0}
25   | alignment: 
28   | var39: DeletablePtrType{PtrType{AbstractType{0}}}
32   | var40: ClassType{0}
33   | var41: ClassType{0}
34   | alignment: 
36   +---
36   +--- (virtual base class C2)
36   | {vbptr}
40   | var50: ClassType{0}
41   | var51: ClassType{0}
42   | alignment: 
44   | var52: AbstractType{1}
48   | var53: ClassType{0}
49   | alignment: 
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
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
