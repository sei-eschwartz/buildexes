// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ C1 ();
C1 (special_constructor);
C0*** v0;
C0*** v1;
C0*** v2;
void*** v3;
};
struct C2 : public virtual C1 {
/* method id 402 */ C2 ();
C2 (special_constructor);
C0*** v6;
void*** v7;
void*** v8;
void*** v9;
};
struct C3  {
/* method id 403 */ ~C3 ();
/* method id 404 */ void*** func1 (void*** v10, void*** v11, C0*** v12, abstract_0 v13);
/* method id 405 */ virtual void* func2 ();
/* method id 406 */ void**** func0 (C0*** v15, abstract_0 v16, void* v17);
/* method id 407 */ C3 ();
C3 (special_constructor);
abstract_0 v22;
void* v23;
void*** v24;
void* v25;
};
void* func4 (void*** v26, abstract_0 v27, abstract_1 v28, void*** v29);
void* func5 (abstract_0 v31, void*** v32, void*** v33, void*** v34);
void* func6 (C0*** v35, void*** v36, void*** v37);
void**** func7 (C0*** v38);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 402 */ C2::C2 () {
void*** v4 = new void** ();
void*** v5 = new void** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 403 */ C3::~C3 () {
return;

}
/* method id 404 */ void*** C3::func1 (void*** v10, void*** v11, C0*** v12, abstract_0 v13) {
void*** v14 = ((void***) 0);
return v14;

}
/* method id 405 */ void* C3::func2 () {
return v25;

}
/* method id 406 */ void**** C3::func0 (C0*** v15, abstract_0 v16, void* v17) {
void*** v18 = new void** ();
abstract_0 v19 = abstract_0();
void*** v20 = new void** ();
void*** v21 = new void** ();
delete (new C2 ());
return new void*** ();

}
/* method id 407 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void* func4 (void*** v26, abstract_0 v27, abstract_1 v28, void*** v29) {
C0*** v30;

::func6(v30, v29, v29);
::func6(v30, v29, v29);
::func6(v30, v29, v29);
::func6(v30, v29, v29);
return ::func6(v30, v29, v29);

}
void* func5 (abstract_0 v31, void*** v32, void*** v33, void*** v34) {

return ::func6(((C0***) 0), v33, v33);

}
void* func6 (C0*** v35, void*** v36, void*** v37) {

return ((void*) 0);

}
void**** func7 (C0*** v38) {

return new void*** ();

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
class C1    size(20)
0    +---
0    | {vbptr}
4    | var0: PtrType{PtrType{PtrType{ClassType{0}}}}
8    | var1: PtrType{PtrType{PtrType{ClassType{0}}}}
12   | var2: PtrType{PtrType{PtrType{ClassType{0}}}}
16   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
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
 const size_t model_offset = 20;
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
4    | var6: PtrType{PtrType{PtrType{ClassType{0}}}}
8    | var7: PtrType{PtrType{PtrType{VoidType{}}}}
12   | var8: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var9: PtrType{PtrType{PtrType{VoidType{}}}}
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | {vbptr}
24   | var0: PtrType{PtrType{PtrType{ClassType{0}}}}
28   | var1: PtrType{PtrType{PtrType{ClassType{0}}}}
32   | var2: PtrType{PtrType{PtrType{ClassType{0}}}}
36   | var3: PtrType{PtrType{PtrType{VoidType{}}}}
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
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(20)
0    +---
0    | {vfptr}
4    | var22: AbstractType{0}
8    | var23: PtrType{VoidType{}}
12   | var24: PtrType{PtrType{PtrType{VoidType{}}}}
16   | var25: PtrType{VoidType{}}
20   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 20;
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
