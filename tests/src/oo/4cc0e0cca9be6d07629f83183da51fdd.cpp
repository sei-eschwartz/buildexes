// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ void func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
void* v2;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
/* method id 405 */ virtual void func0 (void* v54, void* v55);
C1 (special_constructor);
void* v116;
void* v117;
void* v118;
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual ~C2 ();
C2 (special_constructor);
void* v270;
void* v271;
void* v272;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
C3 (special_constructor);
void* v296;
void* v297;
};
void func2 (void* v298, void* v299, void* v300);
void func3 (void* v304, void* v305, void* v306, void* v307);
void func4 (void* v311, void* v312);
void func5 (void* v316, void* v317, void* v318, void* v319);
// definitions
/* method id 400 */ C0::~C0 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
return;

}
/* method id 401 */ void C0::func0 () {
delete (new C1 ());
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
void* v5 = ((void*) 0);
return;

}
/* method id 404 */ C1::~C1 () {
void* v18 = ((void*) 0);
void* v19 = ((void*) 0);
void* v20 = ((void*) 0);
void* v21 = ((void*) 0);
delete (new C2 ());
return;

}
/* method id 405 */ void C1::func0 (void* v54, void* v55) {
void* v56 = ((void*) 0);
void* v57 = ((void*) 0);
void* v58 = ((void*) 0);
void* v59 = ((void*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
void* v119 = ((void*) 0);
return;

}
/* method id 407 */ C2::~C2 () {
void* v124 = ((void*) 0);
void* v125 = ((void*) 0);
void* v126 = ((void*) 0);
void* v127 = ((void*) 0);
delete (new C2 ());
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
void* v273 = ((void*) 0);
void* v274 = ((void*) 0);
void* v275 = ((void*) 0);
void* v276 = ((void*) 0);
return;

}
/* method id 409 */ C3::~C3 () {
void* v281 = ((void*) 0);
void* v282 = ((void*) 0);
return;

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func2 (void* v298, void* v299, void* v300) {
void* v301;
void* v302;
void* v303;

return;

}
void func3 (void* v304, void* v305, void* v306, void* v307) {
void* v308;
void* v309;
void* v310;

return (((C1*) 0))->C1::func0(v305, v305);

}
void func4 (void* v311, void* v312) {
void* v313;
void* v314;
void* v315;

return;

}
void func5 (void* v316, void* v317, void* v318, void* v319) {
void* v320;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(8)
0    +---
0    | {vfptr}
4    | var2: PtrType{VoidType{}}
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var116: PtrType{VoidType{}}
12   | var117: PtrType{VoidType{}}
16   | var118: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var2: PtrType{VoidType{}}
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
class C2    size(44)
0    +---
0    | {vbptr}
4    | var270: PtrType{VoidType{}}
8    | var271: PtrType{VoidType{}}
12   | var272: PtrType{VoidType{}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var2: PtrType{VoidType{}}
24   +---
24   +--- (virtual base class C1)
24   | {vfptr}
28   | {vbptr}
32   | var116: PtrType{VoidType{}}
36   | var117: PtrType{VoidType{}}
40   | var118: PtrType{VoidType{}}
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
 const size_t model_offset = 24;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(56)
0    +---
0    | {vbptr}
4    | var296: PtrType{VoidType{}}
8    | var297: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var2: PtrType{VoidType{}}
20   +---
20   +--- (virtual base class C1)
20   | {vfptr}
24   | {vbptr}
28   | var116: PtrType{VoidType{}}
32   | var117: PtrType{VoidType{}}
36   | var118: PtrType{VoidType{}}
40   +---
40   +--- (virtual base class C2)
40   | {vbptr}
44   | var270: PtrType{VoidType{}}
48   | var271: PtrType{VoidType{}}
52   | var272: PtrType{VoidType{}}
56   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 56;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
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
 const size_t model_offset = 40;
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
