// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void func1 (void** v0);
/* method id 402 */ virtual void func0 (void** v3, void** v4, void** v5);
/* method id 403 */ C1 ();
C1 (special_constructor);
void** v12;
void** v13;
void** v14;
void** v15;
};
struct C2 : public C0 {
/* method id 404 */ C2 ();
C2 (special_constructor);
void** v16;
void** v17;
};
struct C3 : public virtual C2 {
/* method id 405 */ C3 ();
C3 (special_constructor);
void** v22;
void** v23;
};
void func4 (void** v24, void** v25, void** v26, void** v27);
void func5 (void** v32, void** v33, void** v34);
void func6 (void** v38, void** v39);
void func7 (void** v44, void** v45, void** v46, void** v47);
// definitions
/* method id 400 */ C0::C0 () {
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
return ::func5(new void* (), new void* (), new void* ());

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5) {
void** v6 = new void* ();
void** v7 = new void* ();
void** v8 = new void* ();
void** v9 = new void* ();
::func5(v6, v6, v6);
::func5(v6, v6, v6);
::func5(v6, v6, v6);
::func5(v6, v6, v6);
return ::func5(v6, v6, v6);

}
/* method id 403 */ C1::C1 () {
void** v10 = new void* ();
void** v11 = new void* ();
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
return;

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void func4 (void** v24, void** v25, void** v26, void** v27) {
void** v28;
void** v29;
void** v30;
void** v31;

::func6(v30, v30);
::func6(v30, v30);
::func6(v30, v30);
::func6(v30, v30);
return ::func6(v27, v27);

}
void func5 (void** v32, void** v33, void** v34) {
void** v35;
void** v36;
void** v37;

::func6(v32, v32);
::func6(v32, v32);
::func6(v32, v32);
::func6(v32, v32);
return ::func6(v33, v33);

}
void func6 (void** v38, void** v39) {
void** v40;
void** v41;
void** v42;
void** v43;

return ::func5(v39, v39, v39);

}
void func7 (void** v44, void** v45, void** v46, void** v47) {
void** v48;
void** v49;
void** v50;
void** v51;

::func5(v45, v45, v45);
::func5(v45, v45, v45);
::func5(v45, v45, v45);
::func5(v45, v45, v45);
return ::func5(v44, v44, v44);

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
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var12: DeletablePtrType{PtrType{VoidType{}}}
8    | var13: DeletablePtrType{PtrType{VoidType{}}}
12   | var14: DeletablePtrType{PtrType{VoidType{}}}
16   | var15: DeletablePtrType{PtrType{VoidType{}}}
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
 const size_t model_offset = 4;
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
0    | +--- (base class C0)
0    | +---
0    | var16: DeletablePtrType{PtrType{VoidType{}}}
4    | var17: DeletablePtrType{PtrType{VoidType{}}}
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
class C3    size(20)
0    +---
0    | {vbptr}
4    | var22: DeletablePtrType{PtrType{VoidType{}}}
8    | var23: DeletablePtrType{PtrType{VoidType{}}}
12   +---
12   +--- (virtual base class C2)
12   | +--- (base class C0)
12   | +---
12   | var16: DeletablePtrType{PtrType{VoidType{}}}
16   | var17: DeletablePtrType{PtrType{VoidType{}}}
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
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
