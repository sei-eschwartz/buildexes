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
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
C1 v26;
C1 v27;
C1 v28;
C1 v29;
};
struct C3 : public virtual C1 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ abstract_0 func4 (C1 v60);
C3 (special_constructor);
C1 v65;
C0 v66;
C0 v67;
C1 v68;
};
abstract_0 func5 ();
abstract_0 func6 ();
abstract_0 func7 ();
abstract_0 func8 (C1 v73, C1 v74, C3 v75);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
return ::func5();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func2 () {
return abstract_0();

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ C2::~C2 () {
C1 v12 = *(&(*(((C1*) 0))));
C1 v13 = *(&(*(((C1*) 0))));
C1 v14 = *(&(*(((C1*) 0))));
return;

}
C2::C2 (special_constructor)  {}

/* method id 408 */ C3::C3 () {
C1 v30 = *((new C1 ()));
C0 v31 = *(&(*(((C0*) 0))));
C1 v32 = *((new C1 ()));
C1 v33 = *((new C1 ()));
return;

}
/* method id 409 */ C3::~C3 () {
C1 v42 = *(&(*((new C1 ()))));
C1 v43 = *(&(*((new C1 ()))));
return;

}
/* method id 410 */ abstract_0 C3::func4 (C1 v60) {
C1 v61 = *(((C1*) 0));
C0 v62 = *((C0*)(&(*((new C1 ())))));
C0 v63 = *((C0*)(&(*((new C1 ())))));
C0 v64 = *((C0*)(&(*((new C1 ())))));
return abstract_0();

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func5 () {
C0 v69;

return abstract_0();

}
abstract_0 func6 () {

return ::func5();

}
abstract_0 func7 () {
C1 v70;
C1 v71;
C1 v72;

return ::func5();

}
abstract_0 func8 (C1 v73, C1 v74, C3 v75) {
C1 v76;
C3 v77;
C1 v78;
C1 v79;

return ::func6();

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
class C2    size(52)
0    +---
0    | {vfptr}
4    | var26: ClassType{1}
16   | var27: ClassType{1}
28   | var28: ClassType{1}
40   | var29: ClassType{1}
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
}
/*
class C3    size(48)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var65: ClassType{1}
20   | var66: ClassType{0}
21   | var67: ClassType{0}
22   | alignment: 
24   | var68: ClassType{1}
36   +---
36   +--- (virtual base class C0)
36   +---
36   +--- (virtual base class C1)
36   | {vfptr}
40   | {vbptr}
44   | var0: ClassType{0}
45   | var1: ClassType{0}
46   | var2: ClassType{0}
47   | var3: ClassType{0}
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
 const size_t model_offset = 36;
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
