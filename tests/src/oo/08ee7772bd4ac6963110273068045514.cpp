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
/* method id 402 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 406 */ void func0 ();
/* method id 407 */ virtual void func0 (C2 v4);
/* method id 408 */ C3 ();
C3 (special_constructor);
C2 v5;
C2 v6;
C2 v7;
C2 v8;
};
void func8 (C2 v9, C2 v10, C2 v11, C2 v12);
void func9 (C2 v17, C2 v18, C2 v19);
void func10 (C3 v22, C3 v23, C3 v24);
void func11 (C3 v29);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 406 */ void C3::func0 () {
C2 v0 = *(((C2*) 0));
C2 v1 = *(((C2*) 0));
C2 v2 = *(((C2*) 0));
C2 v3 = *(((C2*) 0));
return ::func8(v8, v8, v8, v8);

}
/* method id 407 */ void C3::func0 (C2 v4) {
::func11(*(((C3*) 0)));
::func11(*(((C3*) 0)));
return;

}
/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func8 (C2 v9, C2 v10, C2 v11, C2 v12) {
C2 v13;
C2 v14;
C2 v15;
C2 v16;

return;

}
void func9 (C2 v17, C2 v18, C2 v19) {
C2 v20;
C2 v21;

v17 = *(&(v18));
v17 = *(&(v18));
return ::func8(v17, v18, v18, v18);

}
void func10 (C3 v22, C3 v23, C3 v24) {
C3 v25;
C3 v26;
C3 v27;
C3 v28;

return;

}
void func11 (C3 v29) {

return;

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
class C1    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(8)
0    +---
0    | +--- (base class C1)
0    | | {vbptr}
4    | +---
4    +---
4    +--- (virtual base class C0)
4    | {vfptr}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
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
class C3    size(44)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | +--- (base class C1)
4    | | | {vbptr}
8    | | +---
8    | +---
8    | var5: ClassType{2}
16   | var6: ClassType{2}
24   | var7: ClassType{2}
32   | var8: ClassType{2}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
