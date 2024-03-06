// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ C0 func0 (abstract_0* v5, C0* v6, C0* v7, C0* v8);
C1 (special_constructor);
abstract_1** v9;
};
C0 func3 ();
abstract_2 func4 (C0* v10, C0* v11, abstract_2* v12);
abstract_1* func5 (C0* v17);
C0* func6 (C0* v18, C0* v19, abstract_0* v20);
// definitions
/* method id 400 */ C0::~C0 () {
::func5((C0*)((new C1 ())));
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
delete (new C1 ());
v9 = v9;
return (new C0 ());

}
/* method id 403 */ C1::~C1 () {
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
abstract_1** v3 = ((abstract_1**) 0);
return;

}
/* method id 404 */ C1::C1 () {
abstract_0* v4 = ((abstract_0*) 0);
return;

}
/* method id 405 */ C0 C1::func0 (abstract_0* v5, C0* v6, C0* v7, C0* v8) {
return ::func3();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

C0 func3 () {

return *((new C0 ()));

}
abstract_2 func4 (C0* v10, C0* v11, abstract_2* v12) {
abstract_1** v13;
C0* v14;
abstract_1** v15;
abstract_3 v16;

return abstract_2();

}
abstract_1* func5 (C0* v17) {

delete (new C1 ());
return new abstract_1 ();

}
C0* func6 (C0* v18, C0* v19, abstract_0* v20) {
void* v21;
abstract_0* v22;
abstract_3 v23;
abstract_0* v24;

return (new C0 ());

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
0    | {vfptr}
4    | {vbptr}
8    | var9: PtrType{PtrType{AbstractType{1}}}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
