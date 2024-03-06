// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0 func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
C0 v3;
};
struct C2 : public C1 {
/* method id 405 */ abstract_0 func3 (C0 v4, C0 v5, C0 v6, C0 v7);
/* method id 406 */ C2 ();
C2 (special_constructor);
C0 v11;
};
struct C3 : public C1 {
/* method id 408 */ C3 ();
C3 (special_constructor);
C0 v12;
C1 v13;
C1 v14;
C2 v15;
};
abstract_0 func7 (C0 v16, C1 v17, C3 v18, C3 v19);
abstract_0 func8 (C1 v22, C0 v23);
abstract_0 func9 ();
abstract_0 func10 (abstract_0* v32, C1 v33, C0 v34, abstract_0* v35);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0 C1::func1 () {
v2 = v0;
v2 = v0;
return ::func9();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ abstract_0 C2::func3 (C0 v4, C0 v5, C0 v6, C0 v7) {
C0 v8 = *(&(*((C0*)(((C1*) 0)))));
C0 v9 = *(&(*((C0*)(((C1*) 0)))));
C0 v10 = *(&(*((C0*)(((C1*) 0)))));
delete (new C3 ());
return abstract_0();

}
/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
v2 = *(((C0*) 0));
v2 = *(((C0*) 0));
v2 = *(((C0*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func7 (C0 v16, C1 v17, C3 v18, C3 v19) {
C1 v20;
C1 v21;

v21 = v21;
v21 = v21;
return ::func8(v21, v16);

}
abstract_0 func8 (C1 v22, C0 v23) {
abstract_0* v24;
abstract_0* v25;
abstract_0* v26;
C0 v27;

return abstract_0();

}
abstract_0 func9 () {
C0 v28;
C0 v29;
abstract_0* v30;
C1 v31;

return ::func8(v31, *(((C0*) 0)));

}
abstract_0 func10 (abstract_0* v32, C1 v33, C0 v34, abstract_0* v35) {

delete (new C3 ());
return abstract_0();

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
class C1    size(12)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
9    | var1: ClassType{0}
10   | var2: ClassType{0}
11   | var3: ClassType{0}
12   +---
12   +--- (virtual base class C0)
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
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
class C2    size(16)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var0: ClassType{0}
9    | | var1: ClassType{0}
10   | | var2: ClassType{0}
11   | | var3: ClassType{0}
12   | +---
12   | var11: ClassType{0}
13   | alignment: 
16   +---
16   +--- (virtual base class C0)
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
class C3    size(56)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var0: ClassType{0}
9    | | var1: ClassType{0}
10   | | var2: ClassType{0}
11   | | var3: ClassType{0}
12   | +---
12   | var12: ClassType{0}
13   | alignment: 
16   | var13: ClassType{1}
28   | var14: ClassType{1}
40   | var15: ClassType{2}
56   +---
56   +--- (virtual base class C0)
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
