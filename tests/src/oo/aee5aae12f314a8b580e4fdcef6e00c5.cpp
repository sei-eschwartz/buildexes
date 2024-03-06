// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
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
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ void func0 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
C0** v2;
abstract_1* v3;
};
struct C2  {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_0 v4;
C0** v5;
abstract_0 v6;
abstract_0 v7;
};
struct C3 : public virtual C0 {
/* method id 407 */ virtual C0* func5 (abstract_0 v8, abstract_0 v9, abstract_1* v10, abstract_0 v11);
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ C3 ();
/* method id 410 */ abstract_1 func1 ();
C3 (special_constructor);
C0** v100;
};
C0* func6 ();
C0* func7 (abstract_3 v103, C0** v104);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
::func7(abstract_3(), v2);
::func7(abstract_3(), v2);
::func7(abstract_3(), v2);
::func7(abstract_3(), v2);
return (new C0 ());

}
/* method id 403 */ void C1::func0 () {
C0** v0 = new C0* ();
abstract_0 v1 = abstract_0();
return;

}
/* method id 404 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 407 */ C0* C3::func5 (abstract_0 v8, abstract_0 v9, abstract_1* v10, abstract_0 v11) {
abstract_0 v12 = abstract_0();
abstract_1* v13 = ((abstract_1*) 0);
abstract_0 v14 = abstract_0();
abstract_0 v15 = abstract_0();
return ::func7(abstract_3(), v100);

}
/* method id 408 */ C3::~C3 () {
abstract_1* v16 = new abstract_1 ();
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
return;

}
/* method id 409 */ C3::C3 () {
abstract_0 v20 = abstract_0();
abstract_0 v21 = abstract_0();
abstract_1* v22 = ((abstract_1*) 0);
abstract_0 v23 = abstract_0();
return;

}
/* method id 410 */ abstract_1 C3::func1 () {
abstract_3 v98 = abstract_3();
C0** v99 = new C0* ();
return abstract_1();

}
C3::C3 (special_constructor) : C0(special_constructor ()) {}

C0* func6 () {
abstract_3 v101;
abstract_0 v102;

((new C1 ()))->C1::func2();
return &(*((new C0 ())));

}
C0* func7 (abstract_3 v103, C0** v104) {
abstract_1* v105;
abstract_1* v106;
C0 v107;
C0 v108;

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var2: PtrType{PtrType{ClassType{0}}}
12   | var3: PtrType{AbstractType{1}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
0    | var4: AbstractType{0}
4    | var5: PtrType{PtrType{ClassType{0}}}
8    | var6: AbstractType{0}
12   | var7: AbstractType{0}
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
}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var100: PtrType{PtrType{ClassType{0}}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
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
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
