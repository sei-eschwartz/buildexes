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
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 402 */ C2 ();
C2 (special_constructor);
C1 v0;
C1 v1;
C1 v2;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 403 */ C3 ();
/* method id 404 */ virtual ~C3 ();
C3 (special_constructor);
C1 v10;
C1 v11;
C1 v12;
C1 v13;
};
void** func3 (C1 v14, C1 v15, C1 v16);
void* func4 (C1 v21, C1 v22, C1 v23);
void** func5 (C1 v27, C1 v28, C1 v29);
void* func6 (C1 v32, C1 v33, C1 v34, C1 v35);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 403 */ C3::C3 () {
C1 v3 = *((new C1 ()));
C1 v4 = *((new C1 ()));
C1 v5 = *((new C1 ()));
delete (new C2 ());
return;

}
/* method id 404 */ C3::~C3 () {
C1 v6 = *(&(*((new C1 ()))));
C1 v7 = *(&(*((new C1 ()))));
C1 v8 = *(&(*((new C1 ()))));
C1 v9 = *(&(*((new C1 ()))));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void** func3 (C1 v14, C1 v15, C1 v16) {
C1 v17;
C1 v18;
C1 v19;
C1 v20;

return ((void**) 0);

}
void* func4 (C1 v21, C1 v22, C1 v23) {
C1 v24;
C1 v25;
C1 v26;

return ((void*) 0);

}
void** func5 (C1 v27, C1 v28, C1 v29) {
C1 v30;
C1 v31;

delete (new C3 ());
return new void* ();

}
void* func6 (C1 v32, C1 v33, C1 v34, C1 v35) {
C1 v36;
C1 v37;

return ::func4(v37, v37, v37);

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
0    | {vbptr}
4    +---
4    +--- (virtual base class C0)
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
class C2    size(12)
0    +---
0    | var0: ClassType{1}
4    | var1: ClassType{1}
8    | var2: ClassType{1}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var10: ClassType{1}
12   | var11: ClassType{1}
16   | var12: ClassType{1}
20   | var13: ClassType{1}
24   +---
24   +--- (virtual base class C0)
24   +---
24   +--- (virtual base class C1)
24   | {vbptr}
28   +---
28   +--- (virtual base class C2)
28   | var0: ClassType{1}
32   | var1: ClassType{1}
36   | var2: ClassType{1}
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
 const size_t model_offset = 24;
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
 const size_t model_offset = 28;
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
