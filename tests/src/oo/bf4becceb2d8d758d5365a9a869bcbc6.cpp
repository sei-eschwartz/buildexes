// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0* func2 ();
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 405 */ virtual C0* func0 ();
/* method id 406 */ C0* func3 (abstract_2* v11, abstract_1 v12, abstract_2* v13, abstract_0* v14);
/* method id 407 */ abstract_2 func4 (C0* v15, abstract_0* v16);
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_2* v17;
C0 v18;
abstract_0* v19;
};
C0 func6 ();
// definitions
/* method id 400 */ C0::~C0 () {
::func6();
::func6();
::func6();
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
delete (new C2 ());
return &(::func6());

}
/* method id 403 */ C1::~C1 () {
C0* v1 = &(*(((C0*) 0)));
((new C2 ()))->C2::func4(v1, new abstract_0 ());
((new C2 ()))->C2::func4(v1, new abstract_0 ());
((new C2 ()))->C2::func4(v1, new abstract_0 ());
((new C2 ()))->C2::func4(v1, new abstract_0 ());
return;

}
/* method id 404 */ C1::C1 () {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = &(*(((C0*) 0)));
abstract_1 v4 = abstract_1();
abstract_0* v5 = ((abstract_0*) 0);
delete (new C2 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C0* C2::func0 () {
abstract_1 v10 = abstract_1();
::func6();
return (new C0 ());

}
/* method id 406 */ C0* C2::func3 (abstract_2* v11, abstract_1 v12, abstract_2* v13, abstract_0* v14) {
::func6();
::func6();
return (new C0 ());

}
/* method id 407 */ abstract_2 C2::func4 (C0* v15, abstract_0* v16) {
return abstract_2();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

C0 func6 () {

(((C2*) 0))->C2::func0();
return *((C0*)(((C1*) 0)));

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
class C2    size(16)
0    +---
0    | {vfptr}
4    | var17: PtrType{AbstractType{2}}
8    | var18: ClassType{0}
12   | var19: PtrType{AbstractType{0}}
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
