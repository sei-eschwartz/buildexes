// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual void*** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void* func1 ();
/* method id 403 */ C1 ();
/* method id 404 */ ~C1 ();
/* method id 405 */ virtual void* func4 (void** v5, void** v6, void** v7);
C1 (special_constructor);
void*** v12;
void*** v13;
void*** v14;
void*** v15;
};
void*** func5 (void*** v16, void*** v17);
void* func6 (void*** v18, void*** v19, void*** v20);
void**** func7 (void*** v22);
void* func8 (void*** v23, void*** v24, void*** v25);
// definitions
/* method id 400 */ void*** C0::func0 () {
::func5(((void***) 0), ((void***) 0));
::func5(((void***) 0), ((void***) 0));
::func5(((void***) 0), ((void***) 0));
return ((void***) 0);

}
/* method id 401 */ C0::C0 () {
::func8(((void***) 0), ((void***) 0), ((void***) 0));
::func8(((void***) 0), ((void***) 0), ((void***) 0));
return;

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void* C1::func1 () {
void** v0 = ((void**) 0);
void** v1 = ((void**) 0);
v15 = v13;
v15 = v13;
return ::func8(v14, v14, v14);

}
/* method id 403 */ C1::C1 () {
return;

}
/* method id 404 */ C1::~C1 () {
void** v2 = ((void**) 0);
return;

}
/* method id 405 */ void* C1::func4 (void** v5, void** v6, void** v7) {
void** v8 = new void* ();
void*** v9 = ((void***) 0);
void*** v10 = ((void***) 0);
void** v11 = new void* ();
::func6(v13, v12, v13);
::func6(v13, v12, v13);
v15 = new void** ();
return ::func6(v14, v14, v14);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

void*** func5 (void*** v16, void*** v17) {

::func7(((void***) 0));
return new void** ();

}
void* func6 (void*** v18, void*** v19, void*** v20) {
void*** v21;

return ::func8(v19, v19, v19);

}
void**** func7 (void*** v22) {

return new void*** ();

}
void* func8 (void*** v23, void*** v24, void*** v25) {
void** v26;
void*** v27;
void*** v28;
void** v29;

return ((void*) 0);

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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var12: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
12   | var13: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
16   | var14: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
20   | var15: PtrType{DeletablePtrType{PtrType{VoidType{}}}}
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C1 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C1 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C1 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
