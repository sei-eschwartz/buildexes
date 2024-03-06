// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual void*** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void** func1 ();
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v0;
C0 v1;
C0 v2;
};
struct C2 : public C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 405 */ ~C3 ();
/* method id 406 */ virtual void** func2 (C0 v7, C0 v8);
/* method id 407 */ C3 ();
/* method id 408 */ virtual void*** func0 (C0 v11, C0 v12, C0 v13);
C3 (special_constructor);
C0 v14;
};
void** func4 ();
void* func5 (C3 v19, C3 v20, C3 v21, C3 v22);
void**** func6 (C3 v27, C3 v28, C0 v29, C3 v30);
void* func7 (C3 v35, C0 v36, C3 v37, C3 v38);
// definitions
/* method id 400 */ void*** C0::func0 () {
return new void** ();

}
/* method id 401 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void** C1::func1 () {
delete (new C2 ());
return new void* ();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
C0 v3 = *(((C0*) 0));
C0 v4 = *(((C0*) 0));
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
delete (new C1 ());
return;

}
/* method id 406 */ void** C3::func2 (C0 v7, C0 v8) {
return new void* ();

}
/* method id 407 */ C3::C3 () {
C0 v9 = *(((C0*) 0));
C0 v10 = *(((C0*) 0));
return;

}
/* method id 408 */ void*** C3::func0 (C0 v11, C0 v12, C0 v13) {
return new void** ();

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void** func4 () {
C0 v15;
C0 v16;
C3 v17;
C3 v18;

delete (new C3 ());
return new void* ();

}
void* func5 (C3 v19, C3 v20, C3 v21, C3 v22) {
C3 v23;
C0 v24;
C3 v25;
C3 v26;

return ((void*) 0);

}
void**** func6 (C3 v27, C3 v28, C0 v29, C3 v30) {
C3 v31;
C3 v32;
C3 v33;
C3 v34;

delete (new C2 ());
return new void*** ();

}
void* func7 (C3 v35, C0 v36, C3 v37, C3 v38) {

return ((void*) 0);

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
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var0: ClassType{0}
12   | var1: ClassType{0}
16   | var2: ClassType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
0    | +--- (base class C0)
0    | | {vfptr}
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
class C3    size(8)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C0)
0    | | | {vfptr}
4    | | +---
4    | +---
4    | var14: ClassType{0}
8    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 8;
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
