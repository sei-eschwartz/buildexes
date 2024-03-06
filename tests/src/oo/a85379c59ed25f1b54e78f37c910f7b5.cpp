// type for special constructors
struct special_constructor {};
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
/* method id 403 */ virtual C0* func1 ();
/* method id 404 */ virtual C0 func3 (C0* v1);
/* method id 405 */ ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ virtual ~C2 ();
/* method id 408 */ C2 ();
/* method id 409 */ virtual C0* func0 (C0* v25, C0* v26, C0* v27, C0* v28);
C2 (special_constructor);
C0* v53;
C0* v54;
};
struct C3 : public C1 {
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual C0* func1 (C0* v81, C0* v82);
C3 (special_constructor);
C0* v157;
C0* v158;
};
C0* func5 (C0* v159);
C0* func6 (C0* v163, C0* v164);
C0* func7 (C0* v169, C0* v170);
C0* func8 (C0* v174, C0* v175);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
return v0;

}
/* method id 403 */ C0* C1::func1 () {
return &((((C1*) 0))->C1::func3(((C0*) 0)));

}
/* method id 404 */ C0 C1::func3 (C0* v1) {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
return *(v2);

}
/* method id 405 */ C1::~C1 () {
C0* v6 = &(*(((C0*) 0)));
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::~C2 () {
C0* v7 = &(*(((C0*) 0)));
C0* v8 = &(*(((C0*) 0)));
C0* v9 = &(*(((C0*) 0)));
C0* v10 = &(*(((C0*) 0)));
return;

}
/* method id 408 */ C2::C2 () {
C0* v21 = &(*(((C0*) 0)));
C0* v22 = &(*(((C0*) 0)));
C0* v23 = ((C0*) 0);
C0* v24 = ((C0*) 0);
delete (new C1 ());
return;

}
/* method id 409 */ C0* C2::func0 (C0* v25, C0* v26, C0* v27, C0* v28) {
C0* v29 = (new C0 ());
C0* v30 = (new C0 ());
C0* v31 = (new C0 ());
C0* v32 = (new C0 ());
return v28;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::~C3 () {
C0* v55 = (new C0 ());
C0* v56 = (new C0 ());
C0* v57 = (new C0 ());
C0* v58 = (new C0 ());
delete (new C1 ());
return;

}
/* method id 411 */ C3::C3 () {
C0* v66 = &((((C1*) 0))->C1::func3(((C0*) 0)));
C0* v67 = &((((C1*) 0))->C1::func3(((C0*) 0)));
C0* v68 = &((((C1*) 0))->C1::func3(((C0*) 0)));
C0* v69 = &((((C1*) 0))->C1::func3(((C0*) 0)));
::func6(v66, v66);
::func6(v66, v66);
::func6(v66, v66);
::func6(v66, v66);
return;

}
/* method id 412 */ C0* C3::func1 (C0* v81, C0* v82) {
C0* v83 = &(*(((C0*) 0)));
C0* v84 = &(*(((C0*) 0)));
C0* v85 = &(*(((C0*) 0)));
C0* v86 = &(*(((C0*) 0)));
delete (new C3 ());
return v82;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0* func5 (C0* v159) {
C0* v160;
C0* v161;
C0* v162;

delete (new C2 ());
return v160;

}
C0* func6 (C0* v163, C0* v164) {
C0* v165;
C0* v166;
C0* v167;
C0* v168;

return v164;

}
C0* func7 (C0* v169, C0* v170) {
C0* v171;
C0* v172;
C0* v173;

return v170;

}
C0* func8 (C0* v174, C0* v175) {
C0* v176;
C0* v177;
C0* v178;
C0* v179;

delete (new C1 ());
return v174;

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var53: PtrType{ClassType{0}}
12   | var54: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var157: PtrType{ClassType{0}}
12   | var158: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
