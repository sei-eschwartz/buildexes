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
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v14;
C0 v15;
C0 v16;
C0 v17;
};
struct C2 : public C1 {
/* method id 404 */ ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C0 v26;
C0 v27;
C0 v28;
C0 v29;
};
struct C3 : public virtual C2 {
/* method id 406 */ C3 ();
C3 (special_constructor);
C0 v38;
C0 v39;
C0 v40;
C0 v41;
};
C1*** func4 (C0 v42, C0 v43, C0 v44, C0 v45);
C1**** func5 ();
abstract_0** func6 (C3 v54);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C3 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v0 = *(&(*(((C0*) 0))));
C0 v1 = *(((C0*) 0));
C0 v2 = *((new C0 ()));
C0 v3 = *((new C0 ()));
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::~C2 () {
C0 v18 = *(((C0*) 0));
C0 v19 = *(((C0*) 0));
C0 v20 = *(((C0*) 0));
C0 v21 = *(((C0*) 0));
return;

}
/* method id 405 */ C2::C2 () {
C0 v22 = *(((C0*) 0));
C0 v23 = *(((C0*) 0));
C0 v24 = *(((C0*) 0));
C0 v25 = *(((C0*) 0));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
delete (new C3 ());
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

C1*** func4 (C0 v42, C0 v43, C0 v44, C0 v45) {
C0 v46;
C0 v47;
C0 v48;
C0 v49;

return new C1** ();

}
C1**** func5 () {
C0 v50;
C0 v51;
C0 v52;
C0 v53;

return new C1*** ();

}
abstract_0** func6 (C3 v54) {
C0 v55;
C0 v56;

return new abstract_0* ();

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
class C1    size(24)
0    +---
0    | {vbptr}
4    | var14: ClassType{0}
8    | var15: ClassType{0}
12   | var16: ClassType{0}
16   | var17: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | | var14: ClassType{0}
8    | | var15: ClassType{0}
12   | | var16: ClassType{0}
16   | | var17: ClassType{0}
20   | +---
20   | var26: ClassType{0}
24   | var27: ClassType{0}
28   | var28: ClassType{0}
32   | var29: ClassType{0}
36   +---
36   +--- (virtual base class C0)
36   | {vfptr}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(60)
0    +---
0    | {vbptr}
4    | var38: ClassType{0}
8    | var39: ClassType{0}
12   | var40: ClassType{0}
16   | var41: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C2)
24   | +--- (base class C1)
24   | | {vbptr}
28   | | var14: ClassType{0}
32   | | var15: ClassType{0}
36   | | var16: ClassType{0}
40   | | var17: ClassType{0}
44   | +---
44   | var26: ClassType{0}
48   | var27: ClassType{0}
52   | var28: ClassType{0}
56   | var29: ClassType{0}
60   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 60;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
