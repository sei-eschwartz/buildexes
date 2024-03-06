// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ virtual C0 func0 (C0* v3);
/* method id 403 */ virtual ~C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 404 */ ~C2 ();
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C1, public C0 {
/* method id 406 */ C0 func1 ();
/* method id 407 */ C3 ();
C3 (special_constructor);
};
C0 func4 (C0* v9);
C0 func5 (abstract_0 v11);
C0 func6 ();
C0 func7 (abstract_1 v12, abstract_2 v13, C0* v14, C0* v15);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = &(*((new C0 ())));
return;

}
/* method id 402 */ C0 C1::func0 (C0* v3) {
abstract_1 v4 = abstract_1();
abstract_0 v5 = abstract_0();
::func4((new C0 ()));
::func4((new C0 ()));
::func4((new C0 ()));
::func4((new C0 ()));
return ::func7(v4, abstract_2(), ((C0*) 0), ((C0*) 0));

}
/* method id 403 */ C1::~C1 () {
C0* v6 = &(*(&(*(((C0*) 0)))));
C0* v7 = &(*(&(*(((C0*) 0)))));
C0* v8 = ((C0*) 0);
delete (new C2 ());
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::~C2 () {
return;

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 406 */ C0 C3::func1 () {
return ::func5(abstract_0());

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

C0 func4 (C0* v9) {
abstract_2 v10;

((new C1 ()))->C1::func0(&(::func6()));
((new C1 ()))->C1::func0(&(::func6()));
((new C1 ()))->C1::func0(&(::func6()));
((new C1 ()))->C1::func0(&(::func6()));
return ::func5(abstract_0());

}
C0 func5 (abstract_0 v11) {

delete (new C2 ());
return *(((C0*) 0));

}
C0 func6 () {

return ((new C1 ()))->C1::func0(&(::func5(abstract_0())));

}
C0 func7 (abstract_1 v12, abstract_2 v13, C0* v14, C0* v15) {

return ::func6();

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
0    | {vfptr}
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
}
/*
class C2    size(0)
0    +---
0    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(8)
0    +---
0    | +--- (base class C0)
0    | +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | {vfptr}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
