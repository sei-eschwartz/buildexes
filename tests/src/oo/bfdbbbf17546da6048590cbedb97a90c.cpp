// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
C1 (special_constructor);
};
struct C2 : public C0 {
/* method id 402 */ C0 func0 ();
/* method id 403 */ virtual C0 func1 (C0* v6, abstract_0 v7);
/* method id 404 */ ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
C1 v20;
C0* v21;
C0* v22;
C0* v23;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual ~C3 ();
C3 (special_constructor);
C0* v36;
C0* v37;
};
C0 func2 (C1 v38, C0* v39, C0* v40, C0* v41);
C0 func3 (C0* v46, C0* v47, C0* v48, C0* v49);
C0 func4 (C1 v54, C1 v55, C0* v56, C0* v57);
C0 func5 (C0* v62, C0* v63, C0* v64, C0* v65);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
C1::C1 (special_constructor)  {}

/* method id 402 */ C0 C2::func0 () {
C0* v3 = ((C0*) 0);
C0* v4 = ((C0*) 0);
C1 v5 = *(&(*((new C1 ()))));
return *(v3);

}
/* method id 403 */ C0 C2::func1 (C0* v6, abstract_0 v7) {
abstract_0 v8 = abstract_0();
C0* v9 = ((C0*) 0);
C0* v10 = ((C0*) 0);
C0* v11 = ((C0*) 0);
return *(v22);

}
/* method id 404 */ C2::~C2 () {
C0* v12 = (new C0 ());
abstract_0 v13 = abstract_0();
C0* v14 = (new C0 ());
C0* v15 = (new C0 ());
return;

}
/* method id 405 */ C2::C2 () {
C1 v16 = *(&(*(((C1*) 0))));
C0* v17 = ((C0*) 0);
C0* v18 = ((C0*) 0);
C1 v19 = *(&(*(((C1*) 0))));
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
C0* v24 = (new C0 ());
C0* v25 = (new C0 ());
C0* v26 = (new C0 ());
C0* v27 = (new C0 ());
return;

}
/* method id 407 */ C3::~C3 () {
C1 v28 = *(((C1*) 0));
C0* v29 = ((C0*) 0);
C1 v30 = *(((C1*) 0));
C0* v31 = ((C0*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C0 func2 (C1 v38, C0* v39, C0* v40, C0* v41) {
C0* v42;
C0* v43;
C0* v44;
C0* v45;

return *(v41);

}
C0 func3 (C0* v46, C0* v47, C0* v48, C0* v49) {
C0* v50;
C0* v51;
C0* v52;
C0* v53;

delete (new C1 ());
return *(v47);

}
C0 func4 (C1 v54, C1 v55, C0* v56, C0* v57) {
C0* v58;
C0* v59;
C1 v60;
C0* v61;

return *(v58);

}
C0 func5 (C0* v62, C0* v63, C0* v64, C0* v65) {
C0* v66;
C0* v67;
C0* v68;
C0* v69;

delete (new C1 ());
return ::func3((new C0 ()), (new C0 ()), (new C0 ()), (new C0 ()));

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var20: ClassType{1}
5    | alignment: 
8    | var21: PtrType{ClassType{0}}
12   | var22: PtrType{ClassType{0}}
16   | var23: PtrType{ClassType{0}}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var36: PtrType{ClassType{0}}
12   | var37: PtrType{ClassType{0}}
16   +---
16   +--- (virtual base class C1)
16   +---
16   | alignment: Additional padding between virtual bases 1, which ends with a zero-sized object, and 2, which leads with zero sized base.
20   +--- (virtual base class C2)
20   | {vfptr}
24   | +--- (base class C0)
24   | +---
24   | var20: ClassType{1}
25   | alignment: 
28   | var21: PtrType{ClassType{0}}
32   | var22: PtrType{ClassType{0}}
36   | var23: PtrType{ClassType{0}}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
 const size_t model_offset = 20;
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
