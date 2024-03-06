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
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual C0* func1 ();
/* method id 404 */ virtual C0* func3 (C0* v1);
/* method id 405 */ virtual C0 func3 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
C0* v3;
};
struct C2  {
/* method id 408 */ C0* func1 ();
/* method id 409 */ C2 ();
C2 (special_constructor);
C0* v8;
C0* v9;
C0* v10;
C1 v11;
};
struct C3 : public C1, public virtual C2 {
/* method id 410 */ virtual void func0 ();
/* method id 411 */ C3 ();
C3 (special_constructor);
C1 v22;
C1 v23;
C1 v24;
C1 v25;
};
abstract_0 func8 (C1 v26, C1 v27);
C0* func9 (C0* v31, C1 v32, C1 v33, C1 v34);
C0* func10 (C1 v39, C1 v40, C1 v41, C1 v42);
abstract_0 func11 (C1 v47, C1 v48, C1 v49);
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
return v3;

}
/* method id 403 */ C0* C1::func1 () {
return v3;

}
/* method id 404 */ C0* C1::func3 (C0* v1) {
return v3;

}
/* method id 405 */ C0 C1::func3 () {
C0* v2 = (new C0 ());
return *(v3);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C0* C2::func1 () {
C0* v4 = &(*(((C0*) 0)));
C0* v5 = &(*(((C0*) 0)));
C0* v6 = &(*(((C0*) 0)));
C0* v7 = &(*(((C0*) 0)));
return v10;

}
/* method id 409 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 410 */ void C3::func0 () {
C0* v12 = &(*(((C0*) 0)));
C1 v13 = *(((C1*) 0));
delete (new C2 ());
return;

}
/* method id 411 */ C3::C3 () {
C1 v14 = *(((C1*) 0));
C1 v15 = *(((C1*) 0));
C0* v16 = ((C0*) 0);
C1 v17 = *(((C1*) 0));
delete (new C1 ());
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0 func8 (C1 v26, C1 v27) {
C1 v28;
C1 v29;
C1 v30;

delete (new C3 ());
return ::func11(v27, v27, v27);

}
C0* func9 (C0* v31, C1 v32, C1 v33, C1 v34) {
C1 v35;
C1 v36;
C1 v37;
C1 v38;

return v31;

}
C0* func10 (C1 v39, C1 v40, C1 v41, C1 v42) {
C1 v43;
C0* v44;
C1 v45;
C1 v46;

return v44;

}
abstract_0 func11 (C1 v47, C1 v48, C1 v49) {
C1 v50;
C1 v51;

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var3: PtrType{ClassType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
class C2    size(28)
0    +---
0    | var8: PtrType{ClassType{0}}
4    | var9: PtrType{ClassType{0}}
8    | var10: PtrType{ClassType{0}}
12   | var11: ClassType{1}
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
}
/*
class C3    size(108)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var3: PtrType{ClassType{0}}
12   | +---
12   | var22: ClassType{1}
28   | var23: ClassType{1}
44   | var24: ClassType{1}
60   | var25: ClassType{1}
76   +---
76   +--- (virtual base class C0)
76   | {vfptr}
80   +---
80   +--- (virtual base class C2)
80   | var8: PtrType{ClassType{0}}
84   | var9: PtrType{ClassType{0}}
88   | var10: PtrType{ClassType{0}}
92   | var11: ClassType{1}
108  +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 108;
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
 const size_t model_offset = 80;
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
