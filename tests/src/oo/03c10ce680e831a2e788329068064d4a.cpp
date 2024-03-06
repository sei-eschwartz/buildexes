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
/* method id 400 */ virtual abstract_0 func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
abstract_1 v1;
abstract_0* v2;
abstract_1 v3;
};
struct C1 : public virtual C0 {
/* method id 403 */ virtual abstract_0 func0 (abstract_0* v4, abstract_0* v5);
/* method id 404 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
C2 (special_constructor);
abstract_1 v9;
abstract_0* v10;
};
struct C3 : public C1 {
/* method id 408 */ virtual abstract_0 func3 (abstract_0* v11, abstract_0* v12);
/* method id 409 */ C3 ();
C3 (special_constructor);
abstract_0* v14;
abstract_2 v15;
abstract_2 v16;
abstract_0* v17;
};
abstract_0 func7 (abstract_0* v18, abstract_0* v19);
abstract_0 func8 (abstract_0* v24, abstract_0* v25, abstract_2 v26, abstract_0* v27);
abstract_0 func9 (abstract_0* v30, abstract_0* v31, abstract_0* v32);
abstract_0 func10 (abstract_0* v36, abstract_2 v37, abstract_0* v38, abstract_0* v39);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
return abstract_0();

}
/* method id 401 */ C0::~C0 () {
abstract_1 v0 = abstract_1();
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ abstract_0 C1::func0 (abstract_0* v4, abstract_0* v5) {
delete (new C1 ());
return ::func10(v2, abstract_2(), v2, ((abstract_0*) 0));

}
/* method id 404 */ C1::C1 () {
((new C1 ()))->C1::func0(v2, v2);
((new C1 ()))->C1::func0(v2, v2);
((new C1 ()))->C1::func0(v2, v2);
((new C1 ()))->C1::func0(v2, v2);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ abstract_0 C3::func3 (abstract_0* v11, abstract_0* v12) {
delete (new C1 ());
return abstract_0();

}
/* method id 409 */ C3::C3 () {
abstract_1 v13 = abstract_1();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func7 (abstract_0* v18, abstract_0* v19) {
abstract_0* v20;
abstract_0* v21;
abstract_0* v22;
abstract_0* v23;

return abstract_0();

}
abstract_0 func8 (abstract_0* v24, abstract_0* v25, abstract_2 v26, abstract_0* v27) {
abstract_0* v28;
abstract_0* v29;

return ::func9(v28, v28, v28);

}
abstract_0 func9 (abstract_0* v30, abstract_0* v31, abstract_0* v32) {
abstract_0* v33;
abstract_0* v34;
abstract_0* v35;

return abstract_0();

}
abstract_0 func10 (abstract_0* v36, abstract_2 v37, abstract_0* v38, abstract_0* v39) {
abstract_2 v40;
abstract_0* v41;
abstract_2 v42;
abstract_1 v43;

return (((C1*) 0))->C1::func0(new abstract_0 (), new abstract_0 ());

}
#include <iostream>
void check_driver() {
/*
class C0    size(16)
0    +---
0    | {vfptr}
4    | var1: AbstractType{1}
8    | var2: PtrType{AbstractType{0}}
12   | var3: AbstractType{1}
16   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C1    size(24)
0    +---
0    | {vfptr}
4    | {vbptr}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var1: AbstractType{1}
16   | var2: PtrType{AbstractType{0}}
20   | var3: AbstractType{1}
24   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 24;
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
class C2    size(36)
0    +---
0    | {vbptr}
4    | var9: AbstractType{1}
8    | var10: PtrType{AbstractType{0}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var1: AbstractType{1}
20   | var2: PtrType{AbstractType{0}}
24   | var3: AbstractType{1}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 36;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 28;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(40)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | +---
8    | var14: PtrType{AbstractType{0}}
12   | var15: AbstractType{2}
16   | var16: AbstractType{2}
20   | var17: PtrType{AbstractType{0}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var1: AbstractType{1}
32   | var2: PtrType{AbstractType{0}}
36   | var3: AbstractType{1}
40   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 40;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
