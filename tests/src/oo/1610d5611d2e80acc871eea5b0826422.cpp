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
/* method id 402 */ virtual void func0 (void** v3, void** v4, void** v5, void** v6);
/* method id 403 */ C1 ();
C1 (special_constructor);
void** v9;
};
struct C2 : public C1 {
/* method id 404 */ C2 ();
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ virtual void func3 ();
C2 (special_constructor);
void** v106;
void** v107;
void** v108;
};
struct C3 : public virtual C1 {
/* method id 407 */ C3 ();
/* method id 408 */ virtual ~C3 ();
/* method id 409 */ virtual void func1 ();
C3 (special_constructor);
void** v147;
void** v148;
void** v149;
void** v150;
};
void func5 ();
void func6 (void** v154, void** v155, void** v156, void** v157);
void func7 (void** v159);
void func8 (void** v162, void** v163, void** v164, void** v165);
// definitions
/* method id 400 */ C0::C0 () {
delete (new C1 ());
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
delete (new C1 ());
return ::func6(v2, v2, v2, v2);

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5, void** v6) {
void** v7 = new void* ();
void** v8 = new void* ();
return;

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 404 */ C2::C2 () {
void** v10 = new void* ();
void** v11 = new void* ();
void** v12 = new void* ();
void** v13 = new void* ();
return;

}
/* method id 405 */ C2::~C2 () {
void** v14 = new void* ();
void** v15 = new void* ();
void** v16 = new void* ();
void** v17 = new void* ();
return;

}
/* method id 406 */ void C2::func3 () {
return ::func6(new void* (), new void* (), new void* (), new void* ());

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 407 */ C3::C3 () {
void** v109 = new void* ();
void** v110 = new void* ();
void** v111 = new void* ();
void** v112 = new void* ();
delete (new C1 ());
return;

}
/* method id 408 */ C3::~C3 () {
void** v113 = new void* ();
delete (new C1 ());
return;

}
/* method id 409 */ void C3::func1 () {
void** v118 = new void* ();
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()) {}

void func5 () {
void** v151;
void** v152;
void** v153;

return;

}
void func6 (void** v154, void** v155, void** v156, void** v157) {
void** v158;

return;

}
void func7 (void** v159) {
void** v160;
void** v161;

return;

}
void func8 (void** v162, void** v163, void** v164, void** v165) {
void** v166;
void** v167;

delete (new C2 ());
return ::func6(v164, v164, v164, v164);

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
class C1    size(8)
0    +---
0    | {vfptr}
4    | +--- (base class C0)
4    | +---
4    | var9: DeletablePtrType{PtrType{VoidType{}}}
8    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 8;
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
class C2    size(20)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | +--- (base class C0)
4    | | +---
4    | | var9: DeletablePtrType{PtrType{VoidType{}}}
8    | +---
8    | var106: DeletablePtrType{PtrType{VoidType{}}}
12   | var107: DeletablePtrType{PtrType{VoidType{}}}
16   | var108: DeletablePtrType{PtrType{VoidType{}}}
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
/*
class C3    size(32)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var147: DeletablePtrType{PtrType{VoidType{}}}
12   | var148: DeletablePtrType{PtrType{VoidType{}}}
16   | var149: DeletablePtrType{PtrType{VoidType{}}}
20   | var150: DeletablePtrType{PtrType{VoidType{}}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | +--- (base class C0)
28   | +---
28   | var9: DeletablePtrType{PtrType{VoidType{}}}
32   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 32;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 24;
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
