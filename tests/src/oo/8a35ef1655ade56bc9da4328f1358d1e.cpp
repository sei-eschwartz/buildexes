// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual ~C1 ();
/* method id 403 */ virtual abstract_0 func2 (abstract_0* v1);
/* method id 404 */ virtual abstract_0 func1 ();
/* method id 405 */ virtual abstract_0 func1 (C0 v5);
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
/* method id 408 */ virtual abstract_0 func1 ();
/* method id 409 */ virtual abstract_0 func3 ();
/* method id 410 */ virtual ~C2 ();
C2 (special_constructor);
abstract_0* v30;
abstract_2 v31;
C0 v32;
abstract_0** v33;
};
abstract_0 func4 (C0 v34, abstract_0* v35, C0 v36, C0 v37);
// definitions
/* method id 400 */ C0::~C0 () {
(&(*((new C2 ()))))->C2::func1();
(&(*((new C2 ()))))->C2::func1();
(&(*((new C2 ()))))->C2::func1();
(&(*((new C2 ()))))->C2::func1();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::~C1 () {
abstract_0* v0 = new abstract_0 ();
return;

}
/* method id 403 */ abstract_0 C1::func2 (abstract_0* v1) {
return (((C1*) 0))->C1::func1();

}
/* method id 404 */ abstract_0 C1::func1 () {
C0 v2 = *(&(*(((C0*) 0))));
C0 v3 = *(&(*(((C0*) 0))));
C0 v4 = *(&(*(((C0*) 0))));
delete (new C1 ());
return (((C1*) 0))->C1::func2(new abstract_0 ());

}
/* method id 405 */ abstract_0 C1::func1 (C0 v5) {
C0 v6 = *(&(*(((C0*) 0))));
C0 v7 = *(&(*(((C0*) 0))));
abstract_0* v8 = ((abstract_0*) 0);
abstract_1 v9 = abstract_1();
return ((new C1 ()))->C1::func2(v8);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
return;

}
/* method id 408 */ abstract_0 C2::func1 () {
abstract_1 v18 = abstract_1();
abstract_1 v19 = abstract_1();
abstract_2 v20 = abstract_2();
C0 v21 = *(((C0*) 0));
delete (new C1 ());
return ::func4(v32, v30, v32, v32);

}
/* method id 409 */ abstract_0 C2::func3 () {
abstract_2 v22 = abstract_2();
abstract_0* v23 = ((abstract_0*) 0);
abstract_0* v24 = ((abstract_0*) 0);
abstract_2 v25 = abstract_2();
return abstract_0();

}
/* method id 410 */ C2::~C2 () {
abstract_2 v26 = abstract_2();
abstract_0* v27 = new abstract_0 ();
abstract_0* v28 = new abstract_0 ();
C0 v29 = *((new C0 ()));
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func4 (C0 v34, abstract_0* v35, C0 v36, C0 v37) {

return (((C1*) 0))->C1::func1(v36);

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
class C2    size(40)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var30: PtrType{AbstractType{0}}
12   | var31: AbstractType{2}
16   | var32: ClassType{0}
20   | var33: DeletablePtrType{PtrType{AbstractType{0}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
28   | {vtordisp for vbase 1}
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
