// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
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
C0* v9;
abstract_0 v10;
C0* v11;
abstract_0 v12;
};
struct C3 : public C2, public virtual C1 {
/* method id 406 */ virtual C0 func0 (C1 v13);
/* method id 407 */ virtual C0 func1 (C1 v18, C1 v19, abstract_0 v20);
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
C0* v37;
C0* v38;
C0* v39;
C0* v40;
};
C0 func3 (C0* v41, C1 v42, C0* v43, C0* v44);
C0 func4 (C0* v49, C1 v50, C0* v51, C0* v52);
C0 func5 (C0* v55, C0* v56, C0* v57, C0* v58);
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
C0* v8 = ((C0*) 0);
delete (new C1 ());
return *(v11);

}
/* method id 404 */ C2::~C2 () {
(((C3*) 0))->C3::func0(*((new C1 ())));
(((C3*) 0))->C3::func0(*((new C1 ())));
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C0 C3::func0 (C1 v13) {
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
C1 v16 = *((new C1 ()));
C1 v17 = *((new C1 ()));
delete (new C1 ());
return ::func4((new C0 ()), v16, (new C0 ()), (new C0 ()));

}
/* method id 407 */ C0 C3::func1 (C1 v18, C1 v19, abstract_0 v20) {
C2 v21 = *(((C2*) 0));
C1 v22 = *(((C1*) 0));
C0* v23 = ((C0*) 0);
abstract_1 v24 = abstract_1();
return *(v9);

}
/* method id 408 */ C3::C3 () {
delete (new C3 ());
return;

}
/* method id 409 */ C3::~C3 () {
C0* v33 = ((C0*) 0);
C0* v34 = ((C0*) 0);
C0* v35 = ((C0*) 0);
C1 v36 = *((new C1 ()));
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()), C1(special_constructor ()) {}

C0 func3 (C0* v41, C1 v42, C0* v43, C0* v44) {
C0* v45;
C0* v46;
C0* v47;
C0* v48;

return *(v41);

}
C0 func4 (C0* v49, C1 v50, C0* v51, C0* v52) {
C0* v53;
C0* v54;

return ::func5(v52, v52, v52, v52);

}
C0 func5 (C0* v55, C0* v56, C0* v57, C0* v58) {
C0* v59;
C0* v60;
C0* v61;
C0* v62;

return *(v60);

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
4    | var9: PtrType{ClassType{0}}
8    | var10: AbstractType{0}
12   | var11: PtrType{ClassType{0}}
16   | var12: AbstractType{0}
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
0    | +--- (base class C2)
0    | | {vfptr}
4    | | +--- (base class C0)
4    | | +---
4    | | var9: PtrType{ClassType{0}}
8    | | var10: AbstractType{0}
12   | | var11: PtrType{ClassType{0}}
16   | | var12: AbstractType{0}
20   | +---
20   | {vbptr}
24   | var37: PtrType{ClassType{0}}
28   | var38: PtrType{ClassType{0}}
32   | var39: PtrType{ClassType{0}}
36   | var40: PtrType{ClassType{0}}
40   +---
40   +--- (virtual base class C1)
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C2 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C2);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C2 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C2 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 40;
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
