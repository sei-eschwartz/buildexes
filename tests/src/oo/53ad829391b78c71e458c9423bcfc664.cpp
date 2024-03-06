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
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public virtual C1 {
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ void func1 (C1 v10, C1 v11, C1 v12, C1 v13);
C2 (special_constructor);
abstract_0 v18;
C1 v19;
C0 v20;
};
struct C3 : public virtual C2, public virtual C0 {
/* method id 406 */ C3 ();
/* method id 407 */ ~C3 ();
C3 (special_constructor);
C1 v58;
C1 v59;
abstract_1 v60;
C1 v61;
};
void func2 (C1 v62, abstract_1 v63);
void func3 (C1 v68, C1 v69, C1 v70, abstract_0 v71);
void func4 (C1 v75, C1 v76, abstract_0 v77, C1 v78);
void func5 (abstract_1 v81, C1 v82, C1 v83, abstract_1 v84);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C1 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
delete (new C1 ());
return;

}
/* method id 404 */ C2::~C2 () {
C0 v8 = *(((C0*) 0));
C0 v9 = *(((C0*) 0));
return;

}
/* method id 405 */ void C2::func1 (C1 v10, C1 v11, C1 v12, C1 v13) {
C1 v14 = *((new C1 ()));
C1 v15 = *((new C1 ()));
C1 v16 = *((new C1 ()));
C1 v17 = *((new C1 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C1 v21 = *((new C1 ()));
C1 v22 = *((new C1 ()));
C1 v23 = *((new C1 ()));
abstract_0 v24 = abstract_0();
delete (new C2 ());
return;

}
/* method id 407 */ C3::~C3 () {
C1 v25 = *(((C1*) 0));
C1 v26 = *(((C1*) 0));
C1 v27 = *(((C1*) 0));
C1 v28 = *(((C1*) 0));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C0(special_constructor ()) {}

void func2 (C1 v62, abstract_1 v63) {
C1 v64;
C1 v65;
abstract_1 v66;
C1 v67;

return;

}
void func3 (C1 v68, C1 v69, C1 v70, abstract_0 v71) {
C1 v72;
C1 v73;
abstract_1 v74;

return;

}
void func4 (C1 v75, C1 v76, abstract_0 v77, C1 v78) {
C1 v79;
abstract_1 v80;

return;

}
void func5 (abstract_1 v81, C1 v82, C1 v83, abstract_1 v84) {
C1 v85;
C1 v86;
C1 v87;
C1 v88;

return;

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
class C1    size(3)
0    +---
0    | var1: ClassType{0}
1    | var2: ClassType{0}
2    | var3: ClassType{0}
3    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 3;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(19)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: AbstractType{0}
12   | var19: ClassType{1}
15   | var20: ClassType{0}
16   +---
16   +--- (virtual base class C1)
16   | var1: ClassType{0}
17   | var2: ClassType{0}
18   | var3: ClassType{0}
19   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 19;
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
class C3    size(44)
0    +---
0    | {vbptr}
4    | var58: ClassType{1}
7    | var59: ClassType{1}
10   | alignment: 
12   | var60: AbstractType{1}
16   | var61: ClassType{1}
19   | alignment: 
20   +---
20   +--- (virtual base class C1)
20   | var1: ClassType{0}
21   | var2: ClassType{0}
22   | var3: ClassType{0}
23   +---
23   | alignment: 
24   +--- (virtual base class C2)
24   | {vfptr}
28   | {vbptr}
32   | var18: AbstractType{0}
36   | var19: ClassType{1}
39   | var20: ClassType{0}
40   +---
40   | alignment: Additional padding between virtual bases 2, which ends with a zero-sized object, and 0, which leads with zero sized base.
44   +--- (virtual base class C0)
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 44;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
