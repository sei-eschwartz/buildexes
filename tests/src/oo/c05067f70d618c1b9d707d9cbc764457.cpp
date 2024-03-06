// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual void*** func2 ();
/* method id 403 */ void**** func2 (void**** v0);
/* method id 404 */ C1 ();
C1 (special_constructor);
void**** v8;
void**** v9;
void**** v10;
void**** v11;
};
struct C2 : public C1 {
/* method id 406 */ virtual void func0 ();
/* method id 407 */ ~C2 ();
/* method id 408 */ C2 ();
C2 (special_constructor);
void**** v54;
void**** v55;
void**** v56;
void**** v57;
};
abstract_0 func5 (void**** v58, void**** v59);
abstract_0 func6 (void**** v60, void**** v61, void**** v62, void**** v63);
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
void**** v2 = new void*** ();
void**** v3 = new void*** ();
void**** v4 = new void*** ();
delete (new C1 ());
return v10;

}
/* method id 404 */ C1::C1 () {
void**** v5 = new void*** ();
void**** v6 = new void*** ();
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ void C2::func0 () {
void**** v12 = new void*** ();
return;

}
/* method id 407 */ C2::~C2 () {
return;

}
/* method id 408 */ C2::C2 () {
void**** v14 = new void*** ();
void**** v15 = new void*** ();
void**** v16 = new void*** ();
void**** v17 = new void*** ();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_0 func5 (void**** v58, void**** v59) {

return ::func6(v58, v59, v59, v58);

}
abstract_0 func6 (void**** v60, void**** v61, void**** v62, void**** v63) {

delete (new C1 ());
return ::func5(new void*** (), new void*** ());

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
8    | var8: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var9: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var10: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | var11: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
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
/*
class C2    size(44)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var8: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | | var9: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | | var10: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   | | var11: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
24   | +---
24   | var54: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
28   | var55: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
32   | var56: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
36   | var57: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
40   +---
40   +--- (virtual base class C0)
40   | {vfptr}
44   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 44;
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
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
