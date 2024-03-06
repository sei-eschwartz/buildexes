// type for special constructors
struct special_constructor {};
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
C0 v0;
};
struct C2 : public C1, public virtual C0 {
/* method id 402 */ virtual void func0 ();
/* method id 403 */ C2 ();
C2 (special_constructor);
C0 v5;
C0 v6;
C0 v7;
C0 v8;
};
struct C3 : public C2 {
/* method id 404 */ C3 ();
C3 (special_constructor);
C0 v9;
C0 v10;
};
void func4 (C0 v11, C3 v12);
void func5 (C3 v17);
void func6 (C0 v21, C3 v22, C3 v23, C3 v24);
void func7 (C3 v25);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor)  {}

/* method id 402 */ void C2::func0 () {
C0 v1 = *(&(*(((C0*) 0))));
C0 v2 = *(&(*(((C0*) 0))));
C0 v3 = *(&(*(((C0*) 0))));
C0 v4 = *(&(*(((C0*) 0))));
return ::func5(*(((C3*) 0)));

}
/* method id 403 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 404 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func4 (C0 v11, C3 v12) {
C0 v13;
C0 v14;
C3 v15;
C0 v16;

return;

}
void func5 (C3 v17) {
C3 v18;
C3 v19;
C3 v20;

return;

}
void func6 (C0 v21, C3 v22, C3 v23, C3 v24) {

return ::func7(v24);

}
void func7 (C3 v25) {
C3 v26;
C3 v27;
C3 v28;

return;

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
class C1    size(1)
0    +---
0    | var0: ClassType{0}
1    +---
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
class C2    size(16)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var0: ClassType{0}
5    | +---
5    | alignment: VBPtr aligned to pointer size
8    | {vbptr}
12   | var5: ClassType{0}
13   | var6: ClassType{0}
14   | var7: ClassType{0}
15   | var8: ClassType{0}
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
 const size_t model_offset = 4;
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
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | +--- (base class C2)
0    | | {vfptr}
4    | | +--- (base class C1)
4    | | | var0: ClassType{0}
5    | | +---
5    | | alignment: VBPtr aligned to pointer size
8    | | {vbptr}
12   | | var5: ClassType{0}
13   | | var6: ClassType{0}
14   | | var7: ClassType{0}
15   | | var8: ClassType{0}
16   | +---
16   | var9: ClassType{0}
17   | var10: ClassType{0}
18   | alignment: 
20   +---
20   +--- (virtual base class C0)
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
