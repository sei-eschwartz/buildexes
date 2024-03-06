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
/* method id 401 */ virtual ~C1 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C0, public C1 {
/* method id 403 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C2 {
/* method id 404 */ virtual void func2 (abstract_0 v1, abstract_0 v2, abstract_0 v3, abstract_0 v4);
/* method id 405 */ C3 ();
C3 (special_constructor);
abstract_0 v5;
};
void func4 (C3 v6, C3 v7, C3 v8, abstract_0 v9);
void func5 (abstract_0 v13, C3 v14, C3 v15, C3 v16);
void func6 (C3 v21, abstract_0 v22, C3 v23, C3 v24);
void func7 (C3 v26, C3 v27);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::~C1 () {
return;

}
/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C2::C2 () {
abstract_0 v0 = abstract_0();
delete (new C1 ());
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

/* method id 404 */ void C3::func2 (abstract_0 v1, abstract_0 v2, abstract_0 v3, abstract_0 v4) {
return;

}
/* method id 405 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func4 (C3 v6, C3 v7, C3 v8, abstract_0 v9) {
C3 v10;
C3 v11;
C3 v12;

return;

}
void func5 (abstract_0 v13, C3 v14, C3 v15, C3 v16) {
C3 v17;
C3 v18;
C3 v19;
C3 v20;

return;

}
void func6 (C3 v21, abstract_0 v22, C3 v23, C3 v24) {
C3 v25;

return;

}
void func7 (C3 v26, C3 v27) {
C3 v28;
C3 v29;
C3 v30;

return ::func6(v27, abstract_0(), v27, v27);

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
class C1    size(4)
0    +---
0    | {vfptr}
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
class C2    size(4)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | +---
4    | +--- (base class C0)
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
 }} {
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
class C3    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var5: AbstractType{0}
12   +---
12   +--- (virtual base class C2)
12   | +--- (base class C1)
12   | | {vfptr}
16   | +---
16   | +--- (base class C0)
16   | +---
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
