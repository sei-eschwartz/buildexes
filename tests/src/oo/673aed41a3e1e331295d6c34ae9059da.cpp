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
/* method id 402 */ C0**** func2 (C0** v0, C0** v1, C0** v2, C0** v3);
/* method id 403 */ C1 ();
C1 (special_constructor);
C0** v8;
C0** v9;
C0** v10;
C0** v11;
};
struct C2 : public virtual C1 {
/* method id 405 */ C0*** func0 (C0** v12, C0** v13, C0** v14, C0** v15);
/* method id 406 */ virtual void** func4 (C0** v17, C0** v18, C0** v19);
/* method id 407 */ C2 ();
C2 (special_constructor);
C0** v21;
C0** v22;
C0** v23;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
C0** v24;
C0** v25;
C0** v26;
C0** v27;
};
void** func9 (C0** v28);
void** func10 (C3 v31, C3 v32, C3 v33, C3 v34);
C0** func11 (C3 v36, C3 v37, C3 v38, C3 v39);
C0**** func12 (C3 v44, C3 v45);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0**** C1::func2 (C0** v0, C0** v1, C0** v2, C0** v3) {
C0** v4 = ((C0**) 0);
C0** v5 = ((C0**) 0);
C0** v6 = ((C0**) 0);
C0** v7 = ((C0**) 0);
return new C0*** ();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0*** C2::func0 (C0** v12, C0** v13, C0** v14, C0** v15) {
C0** v16 = new C0* ();
return ((C0***) 0);

}
/* method id 406 */ void** C2::func4 (C0** v17, C0** v18, C0** v19) {
C0** v20 = new C0* ();
return new void* ();

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

void** func9 (C0** v28) {
C0** v29;
C3 v30;

return new void* ();

}
void** func10 (C3 v31, C3 v32, C3 v33, C3 v34) {
C3 v35;

return new void* ();

}
C0** func11 (C3 v36, C3 v37, C3 v38, C3 v39) {
C3 v40;
C3 v41;
C3 v42;
C3 v43;

return new C0* ();

}
C0**** func12 (C3 v44, C3 v45) {
C3 v46;
C3 v47;

::func9(new C0* ());
::func9(new C0* ());
return new C0*** ();

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
4    | var8: PtrType{PtrType{ClassType{0}}}
8    | var9: PtrType{PtrType{ClassType{0}}}
12   | var10: PtrType{PtrType{ClassType{0}}}
16   | var11: PtrType{PtrType{ClassType{0}}}
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
class C2    size(44)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var21: PtrType{PtrType{ClassType{0}}}
12   | var22: PtrType{PtrType{ClassType{0}}}
16   | var23: PtrType{PtrType{ClassType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var8: PtrType{PtrType{ClassType{0}}}
32   | var9: PtrType{PtrType{ClassType{0}}}
36   | var10: PtrType{PtrType{ClassType{0}}}
40   | var11: PtrType{PtrType{ClassType{0}}}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(64)
0    +---
0    | {vbptr}
4    | var24: PtrType{PtrType{ClassType{0}}}
8    | var25: PtrType{PtrType{ClassType{0}}}
12   | var26: PtrType{PtrType{ClassType{0}}}
16   | var27: PtrType{PtrType{ClassType{0}}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   | var8: PtrType{PtrType{ClassType{0}}}
32   | var9: PtrType{PtrType{ClassType{0}}}
36   | var10: PtrType{PtrType{ClassType{0}}}
40   | var11: PtrType{PtrType{ClassType{0}}}
44   +---
44   +--- (virtual base class C2)
44   | {vfptr}
48   | {vbptr}
52   | var21: PtrType{PtrType{ClassType{0}}}
56   | var22: PtrType{PtrType{ClassType{0}}}
60   | var23: PtrType{PtrType{ClassType{0}}}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 const size_t model_offset = 44;
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
