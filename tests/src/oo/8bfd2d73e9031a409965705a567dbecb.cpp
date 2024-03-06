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
struct C3 : public virtual C1 {
/* method id 410 */ C3 ();
/* method id 411 */ virtual ~C3 ();
/* method id 412 */ virtual C0* func1 (C0* v82, C0* v83);
/* method id 413 */ virtual C0* func1 (C0* v194, C0* v195, C0* v196, C0* v197);
C3 (special_constructor);
C0* v202;
C0* v203;
C0* v204;
C0* v205;
};
C0* func5 (C0* v206, C0* v207, C0* v208, C0* v209);
C0* func6 (C0* v214, C0* v215, C0* v216, C0* v217);
C0* func7 (C0* v222, C0* v223, C0* v224, C0* v225);
C0* func8 (C0* v228, C0* v229, C0* v230, C0* v231);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
C0* v0 = ((C0*) 0);
delete (new C2 ());
return v0;

}
/* method id 403 */ C0* C1::func1 () {
return ((C0*) 0);

}
/* method id 404 */ C0 C1::func3 (C0* v1) {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
return *(v1);

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
(((C1*) 0))->C1::func3(v22);
(((C1*) 0))->C1::func3(v22);
(((C1*) 0))->C1::func3(v22);
(((C1*) 0))->C1::func3(v22);
return;

}
/* method id 409 */ C0* C2::func0 (C0* v25, C0* v26, C0* v27, C0* v28) {
C0* v29 = (new C0 ());
C0* v30 = (new C0 ());
C0* v31 = (new C0 ());
C0* v32 = (new C0 ());
delete (new C1 ());
return v28;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ C3::C3 () {
C0* v55 = ((C0*) 0);
C0* v56 = ((C0*) 0);
C0* v57 = ((C0*) 0);
C0* v58 = ((C0*) 0);
return;

}
/* method id 411 */ C3::~C3 () {
C0* v63 = ((C0*) 0);
C0* v64 = ((C0*) 0);
C0* v65 = ((C0*) 0);
C0* v66 = ((C0*) 0);
return;

}
/* method id 412 */ C0* C3::func1 (C0* v82, C0* v83) {
C0* v84 = &(*(((C0*) 0)));
C0* v85 = &(*(((C0*) 0)));
C0* v86 = &(*(((C0*) 0)));
C0* v87 = &(*(((C0*) 0)));
return v84;

}
/* method id 413 */ C0* C3::func1 (C0* v194, C0* v195, C0* v196, C0* v197) {
C0* v198 = &(*(((C0*) 0)));
C0* v199 = &(*(((C0*) 0)));
C0* v200 = &(*(((C0*) 0)));
C0* v201 = &(*(((C0*) 0)));
return v200;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0* func5 (C0* v206, C0* v207, C0* v208, C0* v209) {
C0* v210;
C0* v211;
C0* v212;
C0* v213;

delete (new C2 ());
return v206;

}
C0* func6 (C0* v214, C0* v215, C0* v216, C0* v217) {
C0* v218;
C0* v219;
C0* v220;
C0* v221;

return v220;

}
C0* func7 (C0* v222, C0* v223, C0* v224, C0* v225) {
C0* v226;
C0* v227;

return v223;

}
C0* func8 (C0* v228, C0* v229, C0* v230, C0* v231) {
C0* v232;
C0* v233;
C0* v234;
C0* v235;

return v233;

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
class C3    size(36)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var202: PtrType{ClassType{0}}
12   | var203: PtrType{ClassType{0}}
16   | var204: PtrType{ClassType{0}}
20   | var205: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
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
