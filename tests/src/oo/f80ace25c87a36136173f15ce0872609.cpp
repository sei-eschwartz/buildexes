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
struct C1 : public C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 402 */ virtual C0 func1 (abstract_0 v0, C0* v1, C0* v2, C0* v3);
/* method id 403 */ C2 ();
/* method id 404 */ virtual ~C2 ();
/* method id 405 */ virtual C0 func2 (C0* v10, C0* v11, abstract_0 v12, C0* v13);
C2 (special_constructor);
};
struct C3 : public virtual C1 {
/* method id 406 */ C3 ();
/* method id 407 */ virtual C0 func1 ();
/* method id 408 */ virtual C0 func3 (C0* v15, C0* v16, abstract_0 v17, C0* v18);
/* method id 409 */ virtual C0 func0 (C0* v19, C0* v20);
C3 (special_constructor);
C0* v22;
C0* v23;
C0* v24;
C0* v25;
};
C0 func4 (C0* v26, C0* v27, C0* v28);
C0 func5 (C0* v33, C0* v34, abstract_0 v35, C0* v36);
C0 func6 (C0* v41, C0* v42, C0* v43, C0* v44);
C0 func7 (C0* v45, C0* v46);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C0 C2::func1 (abstract_0 v0, C0* v1, C0* v2, C0* v3) {
return *(v1);

}
/* method id 403 */ C2::C2 () {
C0* v4 = ((C0*) 0);
C0* v5 = ((C0*) 0);
C0* v6 = ((C0*) 0);
C0* v7 = ((C0*) 0);
return;

}
/* method id 404 */ C2::~C2 () {
abstract_0 v8 = abstract_0();
return;

}
/* method id 405 */ C0 C2::func2 (C0* v10, C0* v11, abstract_0 v12, C0* v13) {
C0* v14 = &(*(((C0*) 0)));
return *(v11);

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ C3::C3 () {
delete (new C2 ());
return;

}
/* method id 407 */ C0 C3::func1 () {
return *(v25);

}
/* method id 408 */ C0 C3::func3 (C0* v15, C0* v16, abstract_0 v17, C0* v18) {
return *(v25);

}
/* method id 409 */ C0 C3::func0 (C0* v19, C0* v20) {
abstract_0 v21 = abstract_0();
return *(v24);

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

C0 func4 (C0* v26, C0* v27, C0* v28) {
C0* v29;
C0* v30;
C0* v31;
C0* v32;

return *(v27);

}
C0 func5 (C0* v33, C0* v34, abstract_0 v35, C0* v36) {
C0* v37;
C0* v38;
C0* v39;
abstract_0 v40;

return *(v34);

}
C0 func6 (C0* v41, C0* v42, C0* v43, C0* v44) {

return *(v42);

}
C0 func7 (C0* v45, C0* v46) {
C0* v47;
C0* v48;

return *(v48);

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
0    | +--- (base class C0)
0    | +---
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
class C2    size(4)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | +--- (base class C0)
4    | | +---
4    | +---
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
0    | {vfptr}
4    | {vbptr}
8    | var22: PtrType{ClassType{0}}
12   | var23: PtrType{ClassType{0}}
16   | var24: PtrType{ClassType{0}}
20   | var25: PtrType{ClassType{0}}
24   +---
24   +--- (virtual base class C1)
24   | +--- (base class C0)
24   | +---
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
