// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ virtual void func0 ();
/* method id 405 */ C1 ();
C1 (special_constructor);
void**** v3;
void**** v4;
void**** v5;
void**** v6;
};
struct C2 : public virtual C1 {
/* method id 406 */ void func4 (void**** v7, void**** v8, void*** v9, void**** v10);
/* method id 407 */ C2 ();
C2 (special_constructor);
C1 v14;
void**** v15;
};
struct C3 : public virtual C2 {
/* method id 408 */ C3 ();
C3 (special_constructor);
};
void func7 (void*** v16, void*** v17, void*** v18, void*** v19);
void func8 (void**** v23);
void func9 (C1 v24);
void func10 (void*** v28, C1 v29, void*** v30);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void*** C1::func2 () {
return new void** ();

}
/* method id 403 */ void**** C1::func2 (void**** v0) {
void**** v1 = new void*** ();
return new void*** ();

}
/* method id 404 */ void C1::func0 () {
void**** v2 = new void*** ();
return ::func10(((void***) 0), *((new C1 ())), ((void***) 0));

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void C2::func4 (void**** v7, void**** v8, void*** v9, void**** v10) {
void**** v11 = new void*** ();
C1 v12 = *(&(*((new C1 ()))));
C1 v13 = *(&(*((new C1 ()))));
return ::func10(((void***) 0), v13, ((void***) 0));

}
/* method id 407 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func7 (void*** v16, void*** v17, void*** v18, void*** v19) {
void*** v20;
void*** v21;
void*** v22;

return;

}
void func8 (void**** v23) {

return ::func7(new void** (), new void** (), new void** (), new void** ());

}
void func9 (C1 v24) {
void**** v25;
void**** v26;
void*** v27;

return ::func7(v27, v27, v27, v27);

}
void func10 (void*** v28, C1 v29, void*** v30) {
C1 v31;
C1 v32;
void**** v33;

return;

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
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var6: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
 const size_t model_offset = 0;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C2    size(48)
0    +---
0    | {vbptr}
4    | var14: ClassType{1}
24   | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
28   +---
28   +--- (virtual base class C1)
28   | +--- (base class C0)
28   | | {vfptr}
32   | +---
32   | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
36   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
40   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
44   | var6: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
48   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 48;
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
class C3    size(52)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | +--- (base class C0)
4    | | {vfptr}
8    | +---
8    | var3: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var4: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var6: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   +---
24   +--- (virtual base class C2)
24   | {vbptr}
28   | var14: ClassType{1}
48   | var15: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
52   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 52;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
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
