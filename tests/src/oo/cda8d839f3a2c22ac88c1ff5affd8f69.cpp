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
/* method id 407 */ virtual abstract_1 func1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 408 */ abstract_1** func3 (abstract_1* v22, abstract_2 v23, abstract_2 v24, abstract_2 v25);
/* method id 409 */ C2 ();
/* method id 410 */ virtual abstract_1 func5 (abstract_1* v28, abstract_3 v29, abstract_3 v30);
/* method id 411 */ virtual ~C2 ();
C2 (special_constructor);
};
abstract_1 func6 (abstract_1* v36, abstract_2 v37, C2 v38, abstract_3 v39);
abstract_1** func7 (abstract_2 v42, C0 v43, abstract_3 v44, abstract_0 v45);
abstract_1 func8 (abstract_2 v49, C0 v50, abstract_3 v51);
abstract_1** func9 (abstract_4 v53, abstract_0 v54, abstract_1* v55, abstract_4 v56);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
return abstract_1();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
delete (new C1 ());
return abstract_1();

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = ((abstract_1*) 0);
abstract_0 v11 = abstract_0();
return (((C1*) 0))->C1::func1();

}
/* method id 406 */ C1::C1 () {
abstract_1* v12 = new abstract_1 ();
abstract_2 v13 = abstract_2();
C0 v14 = *(((C0*) 0));
delete (new C2 ());
return;

}
/* method id 407 */ abstract_1 C1::func1 () {
abstract_1* v17 = ((abstract_1*) 0);
return abstract_1();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 408 */ abstract_1** C2::func3 (abstract_1* v22, abstract_2 v23, abstract_2 v24, abstract_2 v25) {
return new abstract_1* ();

}
/* method id 409 */ C2::C2 () {
abstract_2 v26 = abstract_2();
abstract_2 v27 = abstract_2();
v26 = v26;
return;

}
/* method id 410 */ abstract_1 C2::func5 (abstract_1* v28, abstract_3 v29, abstract_3 v30) {
abstract_2 v31 = abstract_2();
abstract_2 v32 = abstract_2();
abstract_2 v33 = abstract_2();
abstract_2 v34 = abstract_2();
return abstract_1();

}
/* method id 411 */ C2::~C2 () {
abstract_0 v35 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_1 func6 (abstract_1* v36, abstract_2 v37, C2 v38, abstract_3 v39) {
C0 v40;
C0 v41;

delete (new C1 ());
return ::func8(v37, v40, abstract_3());

}
abstract_1** func7 (abstract_2 v42, C0 v43, abstract_3 v44, abstract_0 v45) {
abstract_3 v46;
abstract_2 v47;
abstract_3 v48;

return new abstract_1* ();

}
abstract_1 func8 (abstract_2 v49, C0 v50, abstract_3 v51) {
C2 v52;

return abstract_1();

}
abstract_1** func9 (abstract_4 v53, abstract_0 v54, abstract_1* v55, abstract_4 v56) {

return new abstract_1* ();

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
8    | {vtordisp for vbase 0}
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
/*
class C2    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
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
