// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual abstract_0* func0 (abstract_0** v0);
/* method id 401 */ virtual abstract_0* func0 (abstract_0** v1, abstract_0** v2);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ C0 ();
C0 (special_constructor);
abstract_0** v3;
};
struct C1 : public virtual C0 {
/* method id 404 */ abstract_0* func0 (abstract_0** v4);
/* method id 405 */ virtual ~C1 ();
/* method id 406 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 407 */ C2 ();
C2 (special_constructor);
abstract_0** v5;
abstract_0** v6;
abstract_0** v7;
abstract_0** v8;
};
struct C3 : public virtual C0, public virtual C1, public virtual C2 {
/* method id 409 */ C3 ();
C3 (special_constructor);
};
abstract_0* func7 (abstract_0** v9, abstract_0** v10, abstract_0** v11, C3 v12);
abstract_0* func8 (C3 v13, C3 v14, C3 v15, C3 v16);
abstract_1 func9 (C3 v21, C3 v22, C3 v23);
abstract_1 func10 (C3 v28, C3 v29, C3 v30);
// definitions
/* method id 400 */ abstract_0* C0::func0 (abstract_0** v0) {
return new abstract_0 ();

}
/* method id 401 */ abstract_0* C0::func0 (abstract_0** v1, abstract_0** v2) {
return ((abstract_0*) 0);

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 404 */ abstract_0* C1::func0 (abstract_0** v4) {
return ((abstract_0*) 0);

}
/* method id 405 */ C1::~C1 () {
delete (new C3 ());
return;

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C0(special_constructor ()), C1(special_constructor ()), C2(special_constructor ()) {}

abstract_0* func7 (abstract_0** v9, abstract_0** v10, abstract_0** v11, C3 v12) {

return ((abstract_0*) 0);

}
abstract_0* func8 (C3 v13, C3 v14, C3 v15, C3 v16) {
C3 v17;
abstract_0** v18;
C3 v19;
C3 v20;

return new abstract_0 ();

}
abstract_1 func9 (C3 v21, C3 v22, C3 v23) {
C3 v24;
C3 v25;
C3 v26;
C3 v27;

return abstract_1();

}
abstract_1 func10 (C3 v28, C3 v29, C3 v30) {
C3 v31;
C3 v32;

return ::func9(v29, v29, v29);

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var3: PtrType{PtrType{AbstractType{0}}}
8    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 8;
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
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var3: PtrType{PtrType{AbstractType{0}}}
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
class C2    size(40)
0    +---
0    | {vbptr}
4    | var5: PtrType{PtrType{AbstractType{0}}}
8    | var6: PtrType{PtrType{AbstractType{0}}}
12   | var7: PtrType{PtrType{AbstractType{0}}}
16   | var8: PtrType{PtrType{AbstractType{0}}}
20   | {vtordisp for vbase 0}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   | var3: PtrType{PtrType{AbstractType{0}}}
32   +---
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
/*
class C3    size(44)
0    +---
0    | {vbptr}
4    | {vtordisp for vbase 0}
8    +---
8    +--- (virtual base class C0)
8    | {vfptr}
12   | var3: PtrType{PtrType{AbstractType{0}}}
16   +---
16   +--- (virtual base class C1)
16   | {vfptr}
20   | {vbptr}
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var5: PtrType{PtrType{AbstractType{0}}}
32   | var6: PtrType{PtrType{AbstractType{0}}}
36   | var7: PtrType{PtrType{AbstractType{0}}}
40   | var8: PtrType{PtrType{AbstractType{0}}}
44   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 44;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 8;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 16;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
