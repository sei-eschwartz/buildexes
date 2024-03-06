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
C0 v4;
};
struct C2  {
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v5;
};
struct C3 : public virtual C1, public C2 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ C3 ();
C3 (special_constructor);
C0 v25;
C0 v26;
C0 v27;
C0 v28;
};
C1* func4 (C0 v29, C0 v30, C0 v31, C0 v32);
void* func5 (C0 v37, C0 v38, C0 v39, C0 v40);
void* func6 (C0 v41, C0 v42);
void* func7 (C0 v44);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
C0 v0 = *(&(*(((C0*) 0))));
C0 v1 = *(((C0*) 0));
C0 v2 = *((new C0 ()));
C0 v3 = *((new C0 ()));
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 405 */ C3::~C3 () {
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
C0 v8 = *(((C0*) 0));
C0 v9 = *(((C0*) 0));
v8 = *((new C0 ()));
v8 = *((new C0 ()));
v8 = *((new C0 ()));
v8 = *((new C0 ()));
return;

}
/* method id 406 */ C3::C3 () {
C0 v10 = *(((C0*) 0));
C0 v11 = *(((C0*) 0));
C0 v12 = *(((C0*) 0));
C0 v13 = *(((C0*) 0));
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

C1* func4 (C0 v29, C0 v30, C0 v31, C0 v32) {
C0 v33;
C0 v34;
C0 v35;
C0 v36;

return ((C1*) 0);

}
void* func5 (C0 v37, C0 v38, C0 v39, C0 v40) {

::func6(v37, v37);
::func6(v37, v37);
::func6(v37, v37);
::func6(v37, v37);
return ::func7(v37);

}
void* func6 (C0 v41, C0 v42) {
C0 v43;

return ::func7(v42);

}
void* func7 (C0 v44) {
C0 v45;
C0 v46;
C0 v47;
C0 v48;

delete (new C1 ());
return ::func6(v45, v45);

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
class C1    size(12)
0    +---
0    | {vbptr}
4    | var4: ClassType{0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
 const size_t model_offset = 8;
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
0    | var5: ClassType{0}
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
}
/*
class C3    size(36)
0    +---
0    | +--- (base class C2)
0    | | var5: ClassType{0}
4    | +---
4    | {vbptr}
8    | var25: ClassType{0}
12   | var26: ClassType{0}
16   | var27: ClassType{0}
20   | var28: ClassType{0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   +--- (virtual base class C1)
28   | {vbptr}
32   | var4: ClassType{0}
36   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
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
