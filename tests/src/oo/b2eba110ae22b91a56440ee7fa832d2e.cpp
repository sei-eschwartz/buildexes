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
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ abstract_0 func2 (abstract_0* v1, abstract_0* v2);
/* method id 404 */ C1 ();
C1 (special_constructor);
abstract_0* v3;
abstract_0* v4;
};
struct C2  {
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C2, public C1 {
/* method id 406 */ virtual abstract_0 func3 (abstract_0* v5, abstract_0* v6, abstract_0* v7, abstract_0* v8);
/* method id 407 */ ~C3 ();
/* method id 408 */ C3 ();
C3 (special_constructor);
abstract_0* v9;
};
abstract_0 func5 (C3 v10, C3 v11, C3 v12, C3 v13);
abstract_0 func6 (C1 v18, C3 v19, C3 v20);
abstract_0 func7 (C3 v24, C3 v25, C3 v26, C3 v27);
abstract_0 func8 (C3 v32, C3 v33, C1 v34, C3 v35);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
v3 = v4;
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1, abstract_0* v2) {
return abstract_0();

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::C2 () {
return;

}
C2::C2 (special_constructor)  {}

/* method id 406 */ abstract_0 C3::func3 (abstract_0* v5, abstract_0* v6, abstract_0* v7, abstract_0* v8) {
delete (new C1 ());
return abstract_0();

}
/* method id 407 */ C3::~C3 () {
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()), C1(special_constructor ()) {}

abstract_0 func5 (C3 v10, C3 v11, C3 v12, C3 v13) {
C1 v14;
C3 v15;
C3 v16;
C3 v17;

return abstract_0();

}
abstract_0 func6 (C1 v18, C3 v19, C3 v20) {
C3 v21;
C3 v22;
C3 v23;

return abstract_0();

}
abstract_0 func7 (C3 v24, C3 v25, C3 v26, C3 v27) {
C3 v28;
C3 v29;
C3 v30;
C1 v31;

delete (new C1 ());
return abstract_0();

}
abstract_0 func8 (C3 v32, C3 v33, C1 v34, C3 v35) {
C3 v36;
C3 v37;
C3 v38;
C3 v39;

return ::func5(v37, v37, v37, v36);

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
0    | {vbptr}
4    | var3: PtrType{AbstractType{0}}
8    | var4: PtrType{AbstractType{0}}
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
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | +---
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var3: PtrType{AbstractType{0}}
12   | | var4: PtrType{AbstractType{0}}
16   | +---
16   | var9: PtrType{AbstractType{0}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
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
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
