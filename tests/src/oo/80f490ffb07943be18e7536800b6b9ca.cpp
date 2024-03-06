// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct abstract_7 { int x; };
struct abstract_8 { int x; };
struct abstract_9 { int x; };
struct abstract_10 { int x; };
struct abstract_11 { int x; };
struct abstract_12 { int x; };
struct abstract_13 { int x; };
struct abstract_14 { int x; };
struct abstract_15 { int x; };
struct abstract_16 { int x; };
struct abstract_17 { int x; };
struct abstract_18 { int x; };
struct abstract_19 { int x; };
struct abstract_20 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ virtual C0** func1 (C0 v0);
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v19;
C0 v20;
};
struct C2 : public virtual C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
C2 (special_constructor);
C0 v29;
C0 v30;
C0 v31;
C0 v32;
};
struct C3 : public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C0 v38;
C0 v39;
C0 v40;
};
abstract_17 func3 (C0 v41, C0 v42, C0 v43, C0 v44);
C0*** func4 (C0 v49, C0 v50, C0 v51, C0 v52);
abstract_0* func5 (C0 v57, C0 v58, C0 v59, C0 v60);
C0*** func6 (C0 v63, C0 v64, C0 v65, C0 v66);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C0** C1::func1 (C0 v0) {
C0 v1 = *(&(*(((C0*) 0))));
return ((C0**) 0);

}
/* method id 402 */ C1::~C1 () {
C0 v2 = *((new C0 ()));
C0 v3 = *((new C0 ()));
C0 v4 = *((new C0 ()));
C0 v5 = *((new C0 ()));
return;

}
/* method id 403 */ C1::C1 () {
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
C0 v9 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
C0 v21 = *(&(*((new C0 ()))));
C0 v22 = *(&(*((new C0 ()))));
C0 v23 = *(&(*((new C0 ()))));
C0 v24 = *(&(*((new C0 ()))));
return;

}
/* method id 405 */ C2::~C2 () {
C0 v25 = *(&(*((new C0 ()))));
C0 v26 = *(&(*((new C0 ()))));
C0 v27 = *(&(*((new C0 ()))));
C0 v28 = *(&(*((new C0 ()))));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0 v33 = *(&(*((new C0 ()))));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_17 func3 (C0 v41, C0 v42, C0 v43, C0 v44) {
C0 v45;
C0 v46;
C0 v47;
C0 v48;

return abstract_17();

}
C0*** func4 (C0 v49, C0 v50, C0 v51, C0 v52) {
C0 v53;
C0 v54;
C0 v55;
C0 v56;

return new C0** ();

}
abstract_0* func5 (C0 v57, C0 v58, C0 v59, C0 v60) {
C0 v61;
C0 v62;

return ((abstract_0*) 0);

}
C0*** func6 (C0 v63, C0 v64, C0 v65, C0 v66) {

delete (new C1 ());
return new C0** ();

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var19: ClassType{0}
5    | var20: ClassType{0}
6    | alignment: 
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(16)
0    +---
0    | {vbptr}
4    | var29: ClassType{0}
5    | var30: ClassType{0}
6    | var31: ClassType{0}
7    | var32: ClassType{0}
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | +--- (base class C0)
12   | +---
12   | var19: ClassType{0}
13   | var20: ClassType{0}
14   | alignment: 
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | {vbptr}
4    | var38: ClassType{0}
5    | var39: ClassType{0}
6    | var40: ClassType{0}
7    | alignment: 
8    +---
8    +--- (virtual base class C1)
8    | {vfptr}
12   | +--- (base class C0)
12   | +---
12   | var19: ClassType{0}
13   | var20: ClassType{0}
14   | alignment: 
16   +---
16   +--- (virtual base class C2)
16   | {vbptr}
20   | var29: ClassType{0}
21   | var30: ClassType{0}
22   | var31: ClassType{0}
23   | var32: ClassType{0}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
