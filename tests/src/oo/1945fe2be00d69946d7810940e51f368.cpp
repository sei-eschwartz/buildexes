// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 402 */ C1 ();
C1 (special_constructor);
C0 v0;
};
struct C2 : public virtual C1, public C0 {
/* method id 403 */ C2 ();
C2 (special_constructor);
abstract_0* v1;
C0 v2;
abstract_0* v3;
};
struct C3 : public virtual C0, public C1 {
/* method id 404 */ virtual abstract_0 func4 ();
/* method id 405 */ virtual abstract_0 func0 (abstract_0* v4, C0 v5);
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_0* v21;
abstract_0* v22;
C0 v23;
abstract_0* v24;
};
abstract_0 func5 (C0 v25, abstract_0* v26, abstract_0* v27, abstract_0* v28);
abstract_0 func6 (C0 v33, abstract_0* v34, abstract_0* v35, abstract_0* v36);
abstract_0 func7 (abstract_0* v41, C0 v42, C0 v43, C0 v44);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 404 */ abstract_0 C3::func4 () {
(((C3*) 0))->C3::func0(new abstract_0 (), v23);
(((C3*) 0))->C3::func0(new abstract_0 (), v23);
(((C3*) 0))->C3::func0(new abstract_0 (), v23);
(((C3*) 0))->C3::func0(new abstract_0 (), v23);
return ::func6(v23, new abstract_0 (), new abstract_0 (), new abstract_0 ());

}
/* method id 405 */ abstract_0 C3::func0 (abstract_0* v4, C0 v5) {
abstract_0* v6 = new abstract_0 ();
abstract_0* v7 = new abstract_0 ();
abstract_0* v8 = new abstract_0 ();
abstract_0* v9 = new abstract_0 ();
return ::func6(v5, v24, v24, v24);

}
/* method id 406 */ C3::~C3 () {
abstract_0* v10 = new abstract_0 ();
abstract_0* v11 = new abstract_0 ();
abstract_0* v12 = new abstract_0 ();
C0 v13 = *((new C0 ()));
return;

}
/* method id 407 */ C3::C3 () {
abstract_0* v17 = new abstract_0 ();
abstract_0* v18 = new abstract_0 ();
abstract_0* v19 = new abstract_0 ();
abstract_0* v20 = new abstract_0 ();
return;

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func5 (C0 v25, abstract_0* v26, abstract_0* v27, abstract_0* v28) {
abstract_0* v29;
abstract_0* v30;
abstract_0* v31;
abstract_0* v32;

return abstract_0();

}
abstract_0 func6 (C0 v33, abstract_0* v34, abstract_0* v35, abstract_0* v36) {
abstract_0* v37;
abstract_0* v38;
abstract_0* v39;
abstract_0* v40;

return ::func7(v40, v33, v33, v33);

}
abstract_0 func7 (abstract_0* v41, C0 v42, C0 v43, C0 v44) {

(((C3*) 0))->C3::func0(new abstract_0 (), v44);
(((C3*) 0))->C3::func0(new abstract_0 (), v44);
(((C3*) 0))->C3::func0(new abstract_0 (), v44);
(((C3*) 0))->C3::func0(new abstract_0 (), v44);
return ::func6(v44, new abstract_0 (), new abstract_0 (), new abstract_0 ());

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
class C1    size(4)
0    +---
0    | var0: ClassType{0}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(24)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | {vbptr}
8    | var1: PtrType{AbstractType{0}}
12   | var2: ClassType{0}
16   | var3: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C1)
20   | var0: ClassType{0}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var0: ClassType{0}
8    | +---
8    | {vbptr}
12   | var21: PtrType{AbstractType{0}}
16   | var22: PtrType{AbstractType{0}}
20   | var23: ClassType{0}
24   | var24: PtrType{AbstractType{0}}
28   +---
28   +--- (virtual base class C0)
28   | {vfptr}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
 const size_t model_offset = 4;
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
