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
/* method id 402 */ virtual abstract_0** func0 ();
C1 (special_constructor);
abstract_0* v0;
};
struct C2 : public C1, public C0 {
/* method id 403 */ virtual abstract_0** func0 ();
/* method id 404 */ virtual abstract_0 func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4);
/* method id 405 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual abstract_0* func2 (abstract_0* v7, C1 v8, C1 v9, C1 v10);
/* method id 408 */ virtual abstract_1 func3 (C1 v12, C1 v13, abstract_0* v14, abstract_0* v15);
/* method id 409 */ virtual abstract_0* func3 (C1 v20, C1 v21, C1 v22, abstract_0* v23);
/* method id 410 */ C3 ();
C3 (special_constructor);
};
abstract_1 func5 (C3 v25);
abstract_0* func6 (C3 v27, C3 v28, C1 v29, abstract_0* v30);
abstract_0* func7 (abstract_2 v31, abstract_0* v32, C1 v33, abstract_0* v34);
abstract_0** func8 (C1 v36, abstract_0* v37, C1 v38, C3 v39);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
return;

}
/* method id 402 */ abstract_0** C1::func0 () {
return new abstract_0* ();

}
C1::C1 (special_constructor)  {}

/* method id 403 */ abstract_0** C2::func0 () {
return new abstract_0* ();

}
/* method id 404 */ abstract_0 C2::func0 (abstract_0* v1, abstract_0* v2, abstract_0* v3, C1 v4) {
C1 v5 = *(((C1*) 0));
C1 v6 = *(((C1*) 0));
return abstract_0();

}
/* method id 405 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()), C0(special_constructor ()) {}

/* method id 406 */ C3::~C3 () {
return;

}
/* method id 407 */ abstract_0* C3::func2 (abstract_0* v7, C1 v8, C1 v9, C1 v10) {
abstract_0* v11 = new abstract_0 ();
return new abstract_0 ();

}
/* method id 408 */ abstract_1 C3::func3 (C1 v12, C1 v13, abstract_0* v14, abstract_0* v15) {
abstract_0* v16 = ((abstract_0*) 0);
abstract_0* v17 = ((abstract_0*) 0);
abstract_0* v18 = ((abstract_0*) 0);
C1 v19 = *(&(*(((C1*) 0))));
return ::func5(*((new C3 ())));

}
/* method id 409 */ abstract_0* C3::func3 (C1 v20, C1 v21, C1 v22, abstract_0* v23) {
C1 v24 = *((new C1 ()));
return v23;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

abstract_1 func5 (C3 v25) {
C3 v26;

return abstract_1();

}
abstract_0* func6 (C3 v27, C3 v28, C1 v29, abstract_0* v30) {

return v30;

}
abstract_0* func7 (abstract_2 v31, abstract_0* v32, C1 v33, abstract_0* v34) {
C1 v35;

return v32;

}
abstract_0** func8 (C1 v36, abstract_0* v37, C1 v38, C3 v39) {
abstract_2 v40;
C1 v41;
C1 v42;

return ((abstract_0**) 0);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | var0: PtrType{AbstractType{0}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(8)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | var0: PtrType{AbstractType{0}}
8    | +---
8    | +--- (base class C0)
8    | +---
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
 }} {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
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
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | var0: PtrType{AbstractType{0}}
8    | | +---
8    | | +--- (base class C0)
8    | | +---
8    | +---
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
