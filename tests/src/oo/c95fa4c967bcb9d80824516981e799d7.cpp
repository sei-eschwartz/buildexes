// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 402 */ ~C1 ();
/* method id 403 */ virtual abstract_1* func0 (abstract_0 v3);
C1 (special_constructor);
C0 v4;
abstract_0 v5;
C0 v6;
C0 v7;
};
struct C2 : public virtual C1, public virtual C0 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual abstract_1* func1 ();
/* method id 407 */ virtual abstract_1* func1 (abstract_0 v26, abstract_1* v27);
C2 (special_constructor);
C0 v32;
};
struct C3 : public virtual C2 {
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
/* method id 410 */ virtual abstract_1* func0 (C0 v47, abstract_2 v48, C0 v49, C0 v50);
C3 (special_constructor);
C0 v63;
C0 v64;
C0 v65;
C0 v66;
};
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0 v1 = *((new C0 ()));
return;

}
/* method id 402 */ C1::~C1 () {
return;

}
/* method id 403 */ abstract_1* C1::func0 (abstract_0 v3) {
delete (new C1 ());
return new abstract_1 ();

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {
C0 v8 = *(((C0*) 0));
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::~C2 () {
abstract_0 v16 = abstract_0();
delete (new C1 ());
return;

}
/* method id 406 */ abstract_1* C2::func1 () {
C0 v21 = *(&(*((new C0 ()))));
abstract_1* v22 = ((abstract_1*) 0);
abstract_0 v23 = abstract_0();
return ((abstract_1*) 0);

}
/* method id 407 */ abstract_1* C2::func1 (abstract_0 v26, abstract_1* v27) {
abstract_0 v28 = abstract_0();
abstract_2 v29 = abstract_2();
abstract_3 v30 = abstract_3();
C0 v31 = *(((C0*) 0));
return v27;

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 408 */ C3::~C3 () {
C0 v33 = *((new C0 ()));
C0 v34 = *((new C0 ()));
C0 v35 = *((new C0 ()));
abstract_2 v36 = abstract_2();
return;

}
/* method id 409 */ C3::C3 () {
C0 v37 = *((new C0 ()));
C0 v38 = *((new C0 ()));
C0 v39 = *((new C0 ()));
abstract_2 v40 = abstract_2();
delete (new C1 ());
v39 = v64;
v39 = v64;
return;

}
/* method id 410 */ abstract_1* C3::func0 (C0 v47, abstract_2 v48, C0 v49, C0 v50) {
C0 v51 = *(((C0*) 0));
C0 v52 = *(((C0*) 0));
C0 v53 = *(((C0*) 0));
C0 v54 = *(((C0*) 0));
v5 = v5;
delete (new C3 ());
v5 = v5;
return new abstract_1 ();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

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
4    | var4: ClassType{0}
5    | alignment: 
8    | var5: AbstractType{0}
12   | var6: ClassType{0}
13   | var7: ClassType{0}
14   | alignment: 
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var32: ClassType{0}
9    | alignment: 
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var4: ClassType{0}
17   | alignment: 
20   | var5: AbstractType{0}
24   | var6: ClassType{0}
25   | var7: ClassType{0}
26   | alignment: 
28   +---
28   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
32   +--- (virtual base class C0)
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
 const size_t model_offset = 32;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var63: ClassType{0}
9    | var64: ClassType{0}
10   | var65: ClassType{0}
11   | var66: ClassType{0}
12   +---
12   +--- (virtual base class C1)
12   | {vfptr}
16   | var4: ClassType{0}
17   | alignment: 
20   | var5: AbstractType{0}
24   | var6: ClassType{0}
25   | var7: ClassType{0}
26   | alignment: 
28   +---
28   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 0, which leads with zero sized base.
32   +--- (virtual base class C0)
32   +---
32   +--- (virtual base class C2)
32   | {vfptr}
36   | {vbptr}
40   | var32: ClassType{0}
41   | alignment: 
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
