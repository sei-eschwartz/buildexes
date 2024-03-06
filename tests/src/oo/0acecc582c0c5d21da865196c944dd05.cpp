// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ virtual abstract_1 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v12;
abstract_1* v13;
C0 v14;
abstract_0 v15;
};
struct C2 : public C0 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_1 func1 (C0 v17);
/* method id 409 */ virtual abstract_1 func0 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
};
abstract_1 func3 (abstract_1* v19, abstract_2 v20, C2 v21, abstract_0 v22);
abstract_1 func4 (C2 v24, abstract_0 v25);
abstract_1* func5 (C0 v29);
abstract_1* func6 (abstract_0 v32, abstract_2 v33, abstract_2 v34, abstract_3 v35);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
delete (new C2 ());
return ::func4(*((new C2 ())), abstract_0());

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
delete (new C2 ());
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = new abstract_1 ();
abstract_0 v11 = abstract_0();
return ::func4(*((new C2 ())), v9);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
return;

}
/* method id 408 */ abstract_1 C2::func1 (C0 v17) {
delete (new C2 ());
return ::func4(*((new C2 ())), abstract_0());

}
/* method id 409 */ abstract_1 C2::func0 () {
return abstract_1();

}
/* method id 410 */ C2::~C2 () {
abstract_2 v18 = abstract_2();
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func3 (abstract_1* v19, abstract_2 v20, C2 v21, abstract_0 v22) {
C0 v23;

delete (new C2 ());
return (&(*(((C1*) 0))))->C1::func0();

}
abstract_1 func4 (C2 v24, abstract_0 v25) {
abstract_1* v26;
abstract_0 v27;
abstract_2 v28;

return ((new C1 ()))->C1::func0();

}
abstract_1* func5 (C0 v29) {
abstract_0 v30;
abstract_0 v31;

return new abstract_1 ();

}
abstract_1* func6 (abstract_0 v32, abstract_2 v33, abstract_2 v34, abstract_3 v35) {
abstract_3 v36;
abstract_0 v37;
abstract_1* v38;
abstract_3 v39;

delete (new C2 ());
return v38;

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
class C1    size(28)
0    +---
0    | {vbptr}
4    | var12: AbstractType{0}
8    | var13: PtrType{AbstractType{1}}
12   | var14: ClassType{0}
16   | var15: AbstractType{0}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
