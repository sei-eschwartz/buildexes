// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_3 { int x; };
struct abstract_6 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
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
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ abstract_0 func0 (C0* v9, abstract_1 v10);
C1 (special_constructor);
};
struct C2  {
/* method id 406 */ virtual abstract_3 func0 (C0* v15, abstract_3* v16, abstract_0* v17);
/* method id 407 */ virtual C0 func0 (abstract_2 v18);
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0* v21;
};
struct C3  {
/* method id 409 */ abstract_0 func1 ();
/* method id 410 */ virtual abstract_0 func4 ();
/* method id 411 */ C3 ();
/* method id 412 */ virtual C0* func5 ();
C3 (special_constructor);
};
C0* func6 (C0* v39);
abstract_3 func7 (abstract_0* v40);
C0* func8 ();
C0 func9 ();
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0* C1::func2 () {
abstract_0* v0 = new abstract_0 ();
v0 = v0;
v0 = v0;
v0 = v0;
v0 = v0;
return ((C0*) 0);

}
/* method id 403 */ C1::~C1 () {
C0* v1 = &(*(((C0*) 0)));
return;

}
/* method id 404 */ C1::C1 () {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = &(*(((C0*) 0)));
abstract_1 v4 = abstract_1();
abstract_0* v5 = new abstract_0 ();
return;

}
/* method id 405 */ abstract_0 C1::func0 (C0* v9, abstract_1 v10) {
abstract_2 v11 = abstract_2();
abstract_3* v12 = new abstract_3 ();
abstract_1 v13 = abstract_1();
abstract_0* v14 = new abstract_0 ();
delete (new C3 ());
return abstract_0();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_3 C2::func0 (C0* v15, abstract_3* v16, abstract_0* v17) {
(&(*((new C3 ()))))->C3::func4();
return abstract_3();

}
/* method id 407 */ C0 C2::func0 (abstract_2 v18) {
abstract_0* v19 = new abstract_0 ();
abstract_0* v20 = new abstract_0 ();
delete (new C1 ());
return ::func9();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

/* method id 409 */ abstract_0 C3::func1 () {
C0* v22 = (new C0 ());
C0* v23 = (new C0 ());
abstract_0* v24 = ((abstract_0*) 0);
delete (new C2 ());
return abstract_0();

}
/* method id 410 */ abstract_0 C3::func4 () {
C0* v25 = ((C0*) 0);
abstract_0* v26 = new abstract_0 ();
abstract_4 v27 = abstract_4();
abstract_4 v28 = abstract_4();
return (((C1*) 0))->C1::func0(&(::func9()), abstract_1());

}
/* method id 411 */ C3::C3 () {
abstract_4 v29 = abstract_4();
C0* v30 = ((C0*) 0);
return;

}
/* method id 412 */ C0* C3::func5 () {
abstract_3* v35 = ((abstract_3*) 0);
abstract_0* v36 = new abstract_0 ();
abstract_3* v37 = ((abstract_3*) 0);
abstract_4 v38 = abstract_4();
delete (new C3 ());
v38 = v38;
return ::func8();

}
C3::C3 (special_constructor)  {}

C0* func6 (C0* v39) {

v39 = (new C0 ());
v39 = (new C0 ());
delete (new C0 ());
v39 = (new C0 ());
return ((C0*) 0);

}
abstract_3 func7 (abstract_0* v40) {
abstract_6* v41;

return abstract_3();

}
C0* func8 () {

return (new C0 ());

}
C0 func9 () {

return *(((C0*) 0));

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
class C2    size(8)
0    +---
0    | {vfptr}
4    | var21: PtrType{AbstractType{0}}
8    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 4;
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
