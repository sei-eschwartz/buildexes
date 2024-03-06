// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v9;
C0 v10;
C0 v11;
C0 v12;
};
struct C2 : public virtual C1 {
/* method id 404 */ void*** func1 (C1 v13, C1 v14, C1 v15);
/* method id 405 */ virtual void* func0 (C0 v20);
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v45;
abstract_2 v46;
C1 v47;
C1 v48;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
C1 v49;
C1 v50;
abstract_3 v51;
C1 v52;
};
void* func4 (C1 v53, abstract_3 v54);
C0*** func5 ();
void* func6 (C1 v63, abstract_3 v64, C1 v65, abstract_3 v66);
abstract_0 func7 (C1 v71, C1 v72, C1 v73, C1 v74);
// definitions
/* method id 400 */ C0::~C0 () {
::func5();
::func5();
::func5();
::func5();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
::func5();
::func5();
::func5();
::func5();
return;

}
/* method id 403 */ C1::C1 () {
C0 v0 = *((new C0 ()));
C0 v1 = *((new C0 ()));
C0 v2 = *((new C0 ()));
C0 v3 = *((new C0 ()));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ void*** C2::func1 (C1 v13, C1 v14, C1 v15) {
C1 v16 = *(&(*(((C1*) 0))));
C1 v17 = *(&(*(((C1*) 0))));
C0 v18 = *(((C0*) 0));
abstract_2 v19 = abstract_2();
return new void** ();

}
/* method id 405 */ void* C2::func0 (C0 v20) {
abstract_3 v21 = abstract_3();
C1 v22 = *(&(*(((C1*) 0))));
abstract_3 v23 = abstract_3();
C1 v24 = *(&(*(((C1*) 0))));
return ::func6(v22, v21, v22, v21);

}
/* method id 406 */ C2::C2 () {
C1 v25 = *(&(*(((C1*) 0))));
C1 v26 = *(&(*(((C1*) 0))));
C1 v27 = *(&(*(((C1*) 0))));
C0 v28 = *(&(*(((C0*) 0))));
delete (new C2 ());
return;

}
/* method id 407 */ C2::~C2 () {
C1 v41 = *(((C1*) 0));
C1 v42 = *(((C1*) 0));
C1 v43 = *(((C1*) 0));
C1 v44 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void* func4 (C1 v53, abstract_3 v54) {
C1 v55;
abstract_3 v56;
C1 v57;
C1 v58;

return ((void*) 0);

}
C0*** func5 () {
C1 v59;
C1 v60;
abstract_3 v61;
C1 v62;

return ((C0***) 0);

}
void* func6 (C1 v63, abstract_3 v64, C1 v65, abstract_3 v66) {
C1 v67;
C1 v68;
abstract_3 v69;
C1 v70;

return ((void*) 0);

}
abstract_0 func7 (C1 v71, C1 v72, C1 v73, C1 v74) {
abstract_3 v75;
C1 v76;
C1 v77;
abstract_3 v78;

::func5();
::func5();
::func5();
::func5();
return abstract_0();

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
class C1    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var9: ClassType{0}
8    | var10: ClassType{0}
12   | var11: ClassType{0}
16   | var12: ClassType{0}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(92)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var45: ClassType{1}
28   | var46: AbstractType{2}
32   | var47: ClassType{1}
52   | var48: ClassType{1}
72   +---
72   +--- (virtual base class C1)
72   | +--- (base class C0)
72   | | {vfptr}
76   | +---
76   | var9: ClassType{0}
80   | var10: ClassType{0}
84   | var11: ClassType{0}
88   | var12: ClassType{0}
92   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 92;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 72;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(88)
0    +---
0    | {vbptr}
4    | var49: ClassType{1}
24   | var50: ClassType{1}
44   | var51: AbstractType{3}
48   | var52: ClassType{1}
68   +---
68   +--- (virtual base class C1)
68   | +--- (base class C0)
68   | | {vfptr}
72   | +---
72   | var9: ClassType{0}
76   | var10: ClassType{0}
80   | var11: ClassType{0}
84   | var12: ClassType{0}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 68;
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
