// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 300 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 301 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 302 */ C2 ();
/* method id 303 */ ~C2 ();
/* method id 304 */ virtual void func1 ();
C2 (special_constructor);
C1* v5;
C0 v6;
C1* v7;
};
void* func2 (C0 v8, C1 v9, C0 v10);
void*** func3 (abstract_0 v14, abstract_1 v15, C0 v16);
C1 func4 (C0 v20, C1* v21);
// definitions
/* method id 300 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 301 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 302 */ C2::C2 () {
return;

}
/* method id 303 */ C2::~C2 () {
return;

}
/* method id 304 */ void C2::func1 () {
C1 v3 = *(((C1*) 0));
abstract_0 v4 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void* func2 (C0 v8, C1 v9, C0 v10) {
C1* v11;
C1 v12;
C1* v13;

return ((void*) 0);

}
void*** func3 (abstract_0 v14, abstract_1 v15, C0 v16) {
C1* v17;
C0 v18;
C1* v19;

return new void** ();

}
C1 func4 (C0 v20, C1* v21) {
abstract_1 v22;
C1* v23;

return *(&(*((new C1 ()))));

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
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var5: PtrType{ClassType{1}}
12   | var6: ClassType{0}
13   | alignment: 
16   | var7: PtrType{ClassType{1}}
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
