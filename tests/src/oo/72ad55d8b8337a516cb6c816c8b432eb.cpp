// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 402 */ virtual abstract_0** func2 ();
/* method id 403 */ abstract_2 func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4);
/* method id 404 */ virtual abstract_0 func1 (abstract_1* v7, abstract_1* v8, abstract_1* v9);
/* method id 405 */ virtual abstract_2 func3 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public C1 {
/* method id 408 */ C2 ();
C2 (special_constructor);
};
struct C3  {
/* method id 410 */ virtual abstract_2 func1 ();
/* method id 411 */ virtual abstract_0* func4 ();
/* method id 412 */ ~C3 ();
/* method id 413 */ virtual abstract_2 func7 ();
/* method id 414 */ C3 ();
C3 (special_constructor);
abstract_1* v16;
};
abstract_0 func9 (abstract_3 v17, C3 v18, abstract_3 v19, C3 v20);
abstract_2 func10 (abstract_1* v21);
abstract_0 func11 (abstract_1* v23);
abstract_2 func12 (C3 v24, C3 v25);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0** C1::func2 () {
abstract_1* v0 = new abstract_1 ();
return new abstract_0* ();

}
/* method id 403 */ abstract_2 C1::func0 (abstract_1* v1, abstract_1* v2, abstract_1* v3, abstract_1* v4) {
abstract_1* v5 = ((abstract_1*) 0);
abstract_1* v6 = ((abstract_1*) 0);
return abstract_2();

}
/* method id 404 */ abstract_0 C1::func1 (abstract_1* v7, abstract_1* v8, abstract_1* v9) {
abstract_1* v10 = new abstract_1 ();
delete (new C2 ());
return abstract_0();

}
/* method id 405 */ abstract_2 C1::func3 () {
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 410 */ abstract_2 C3::func1 () {
abstract_1* v11 = ((abstract_1*) 0);
delete (new C3 ());
return ::func12(*((new C3 ())), *(((C3*) 0)));

}
/* method id 411 */ abstract_0* C3::func4 () {
return ((abstract_0*) 0);

}
/* method id 412 */ C3::~C3 () {
abstract_1* v12 = ((abstract_1*) 0);
abstract_1* v13 = new abstract_1 ();
abstract_3 v14 = abstract_3();
abstract_3 v15 = abstract_3();
::func10(v13);
::func10(v13);
delete (new C2 ());
return;

}
/* method id 413 */ abstract_2 C3::func7 () {
return ::func12(*(this), *(((C3*) 0)));

}
/* method id 414 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

abstract_0 func9 (abstract_3 v17, C3 v18, abstract_3 v19, C3 v20) {

return abstract_0();

}
abstract_2 func10 (abstract_1* v21) {
abstract_1* v22;

return abstract_2();

}
abstract_0 func11 (abstract_1* v23) {

return abstract_0();

}
abstract_2 func12 (C3 v24, C3 v25) {
abstract_0* v26;

return abstract_2();

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
0    | {vfptr}
4    | {vbptr}
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
class C2    size(12)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
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
class C3    size(8)
0    +---
0    | {vfptr}
4    | var16: PtrType{AbstractType{1}}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
