// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
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
/* method id 402 */ C1 ();
C1 (special_constructor);
C0* v0;
C0* v1;
C0* v2;
};
struct C2 : public C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
C0* v3;
C0* v4;
C0* v5;
C0* v6;
};
struct C3 : public C1 {
/* method id 405 */ virtual ~C3 ();
/* method id 406 */ virtual abstract_0* func0 (C0* v8);
/* method id 407 */ virtual abstract_0*** func4 ();
/* method id 408 */ virtual C0 func1 (C0* v12, C2 v13);
/* method id 409 */ C3 ();
C3 (special_constructor);
C2 v18;
C2 v19;
C0* v20;
C2 v21;
};
abstract_0* func6 (C0* v22, C2 v23, C2 v24, C2 v25);
abstract_0* func7 (C2 v30, C2 v31, C2 v32, C2 v33);
C0 func8 (C2 v38, C2 v39, C2 v40, C2 v41);
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C2 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C3::~C3 () {
C0* v7 = &(*(&(*((new C0 ())))));
return;

}
/* method id 406 */ abstract_0* C3::func0 (C0* v8) {
return new abstract_0 ();

}
/* method id 407 */ abstract_0*** C3::func4 () {
C0* v9 = ((C0*) 0);
C0* v10 = ((C0*) 0);
C2 v11 = *(&(*(((C2*) 0))));
return new abstract_0** ();

}
/* method id 408 */ C0 C3::func1 (C0* v12, C2 v13) {
C0* v14 = &(*(&(*(((C0*) 0)))));
C2 v15 = *(((C2*) 0));
C2 v16 = *(((C2*) 0));
C0* v17 = &(*(&(*(((C0*) 0)))));
return ::func8(v15, v15, v15, v15);

}
/* method id 409 */ C3::C3 () {

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

abstract_0* func6 (C0* v22, C2 v23, C2 v24, C2 v25) {
C2 v26;
C2 v27;
C2 v28;
C2 v29;

return ((abstract_0*) 0);

}
abstract_0* func7 (C2 v30, C2 v31, C2 v32, C2 v33) {
C2 v34;
C0* v35;
C2 v36;
C2 v37;

return ((abstract_0*) 0);

}
C0 func8 (C2 v38, C2 v39, C2 v40, C2 v41) {
C2 v42;
C0* v43;
C2 v44;
C2 v45;

return *((new C0 ()));

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
0    | {vbptr}
4    | var0: PtrType{ClassType{0}}
8    | var1: PtrType{ClassType{0}}
12   | var2: PtrType{ClassType{0}}
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
class C2    size(20)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var3: PtrType{ClassType{0}}
8    | var4: PtrType{ClassType{0}}
12   | var5: PtrType{ClassType{0}}
16   | var6: PtrType{ClassType{0}}
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(88)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | {vbptr}
8    | | var0: PtrType{ClassType{0}}
12   | | var1: PtrType{ClassType{0}}
16   | | var2: PtrType{ClassType{0}}
20   | +---
20   | var18: ClassType{2}
40   | var19: ClassType{2}
60   | var20: PtrType{ClassType{0}}
64   | var21: ClassType{2}
84   +---
84   +--- (virtual base class C0)
84   | {vfptr}
88   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 88;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
