// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0* func0 (abstract_0** v5);
/* method id 404 */ virtual abstract_0* func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9);
/* method id 405 */ virtual abstract_2 func0 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0** v10;
};
struct C2 : public virtual C0, public virtual C1 {
/* method id 407 */ virtual abstract_2 func0 ();
/* method id 408 */ virtual abstract_0* func2 ();
/* method id 409 */ abstract_0* func3 (C1 v19, C1 v20, abstract_3** v21);
/* method id 410 */ C2 ();
C2 (special_constructor);
};
abstract_3* func4 (abstract_0* v26, abstract_0** v27, abstract_3** v28, abstract_0* v29);
abstract_3 func5 (abstract_3** v31, abstract_0* v32);
abstract_0* func6 ();
abstract_0 func7 ();
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return ((abstract_0*) 0);

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2, abstract_0** v3) {
return new abstract_0 ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0* C1::func0 (abstract_0** v5) {
abstract_0** v6 = ((abstract_0**) 0);
v5 = v10;
return ((abstract_0*) 0);

}
/* method id 404 */ abstract_0* C1::func1 (abstract_0** v7, abstract_0** v8, abstract_0** v9) {
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
return new abstract_0 ();

}
/* method id 405 */ abstract_2 C1::func0 () {
return abstract_2();

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ abstract_2 C2::func0 () {
abstract_0** v11 = new abstract_0* ();
abstract_0** v12 = ((abstract_0**) 0);
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
::func5(new abstract_3* (), ((abstract_0*) 0));
return abstract_2();

}
/* method id 408 */ abstract_0* C2::func2 () {
C1 v17 = *(((C1*) 0));
abstract_3** v18 = new abstract_3* ();
::func7();
::func7();
::func7();
::func7();
return ((abstract_0*) 0);

}
/* method id 409 */ abstract_0* C2::func3 (C1 v19, C1 v20, abstract_3** v21) {
return new abstract_0 ();

}
/* method id 410 */ C2::C2 () {
abstract_0* v22 = new abstract_0 ();
abstract_0** v23 = new abstract_0* ();
abstract_0** v24 = new abstract_0* ();
abstract_3** v25 = ((abstract_3**) 0);
v10 = v10;
v10 = v10;
return;

}
C2::C2 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()) {}

abstract_3* func4 (abstract_0* v26, abstract_0** v27, abstract_3** v28, abstract_0* v29) {
abstract_0* v30;

return ((abstract_3*) 0);

}
abstract_3 func5 (abstract_3** v31, abstract_0* v32) {

return abstract_3();

}
abstract_0* func6 () {
C1 v33;
abstract_0* v34;
abstract_0* v35;

return v35;

}
abstract_0 func7 () {
abstract_0** v36;
abstract_0** v37;
abstract_3** v38;
abstract_0* v39;

return abstract_0();

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
8    | var10: PtrType{PtrType{AbstractType{0}}}
12   | {vtordisp for vbase 0}
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
class C2    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   | {vtordisp for vbase 1}
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var10: PtrType{PtrType{AbstractType{0}}}
32   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
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
