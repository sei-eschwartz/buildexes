// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2  {
/* method id 405 */ abstract_0 func2 ();
/* method id 406 */ C2 ();
/* method id 407 */ abstract_0 func0 (C1 v8, C1 v9, C1 v10, C1 v11);
/* method id 408 */ ~C2 ();
C2 (special_constructor);
C1 v44;
C1 v45;
C1 v46;
C1 v47;
};
struct C3 : public C1, public virtual C2 {
/* method id 409 */ C3 ();
/* method id 410 */ virtual ~C3 ();
/* method id 411 */ abstract_0 func1 ();
C3 (special_constructor);
C1 v107;
C1 v108;
C1 v109;
};
abstract_0 func4 ();
abstract_0 func5 (C1 v114);
abstract_0 func6 (C1 v119, C1 v120, C1 v121);
abstract_0 func7 (abstract_0** v125, abstract_0** v126, C1 v127, abstract_0** v128);
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

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return ::func5(v46);

}
/* method id 406 */ C2::C2 () {
::func5(v46);
::func5(v46);
::func5(v46);
::func5(v46);
return;

}
/* method id 407 */ abstract_0 C2::func0 (C1 v8, C1 v9, C1 v10, C1 v11) {
C1 v12 = *((new C1 ()));
C1 v13 = *((new C1 ()));
C1 v14 = *((new C1 ()));
::func5(*(((C1*) 0)));
::func5(*(((C1*) 0)));
::func5(*(((C1*) 0)));
return ::func5(v10);

}
/* method id 408 */ C2::~C2 () {
C1 v40 = *(((C1*) 0));
C1 v41 = *(((C1*) 0));
C1 v42 = *(((C1*) 0));
C1 v43 = *(((C1*) 0));
return;

}
C2::C2 (special_constructor)  {}

/* method id 409 */ C3::C3 () {
C1 v48 = *(&(*((new C1 ()))));
C1 v49 = *(&(*((new C1 ()))));
C1 v50 = *(&(*((new C1 ()))));
C1 v51 = *(&(*((new C1 ()))));
return;

}
/* method id 410 */ C3::~C3 () {
C1 v52 = *((new C1 ()));
C1 v53 = *((new C1 ()));
::func5(*((new C1 ())));
::func5(*((new C1 ())));
::func5(*((new C1 ())));
return;

}
/* method id 411 */ abstract_0 C3::func1 () {
::func5(v46);
::func5(v46);
::func5(v46);
::func5(v46);
return ::func6(v46, v46, v46);

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func4 () {
C1 v110;
C0 v111;
C1 v112;
C1 v113;

return (&(v112))->C1::func1();

}
abstract_0 func5 (C1 v114) {
C0 v115;
C0 v116;
C0 v117;
C0 v118;

return ::func6(v114, v114, v114);

}
abstract_0 func6 (C1 v119, C1 v120, C1 v121) {
C1 v122;
C1 v123;
C0 v124;

delete (new C1 ());
return abstract_0();

}
abstract_0 func7 (abstract_0** v125, abstract_0** v126, C1 v127, abstract_0** v128) {
C1 v129;
C1 v130;
C1 v131;

return ::func5(v131);

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
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
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | var44: ClassType{1}
12   | var45: ClassType{1}
24   | var46: ClassType{1}
36   | var47: ClassType{1}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(96)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var0: ClassType{0}
9    | | var1: ClassType{0}
10   | | var2: ClassType{0}
11   | | var3: ClassType{0}
12   | +---
12   | var107: ClassType{1}
24   | var108: ClassType{1}
36   | var109: ClassType{1}
48   +---
48   +--- (virtual base class C0)
48   +---
48   +--- (virtual base class C2)
48   | var44: ClassType{1}
60   | var45: ClassType{1}
72   | var46: ClassType{1}
84   | var47: ClassType{1}
96   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 96;
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
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 48;
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
