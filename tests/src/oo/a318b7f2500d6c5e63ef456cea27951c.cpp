// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ virtual void func0 (void* v2);
C0 (special_constructor);
abstract_0 v6;
abstract_0 v7;
};
struct C1 : public virtual C0 {
/* method id 403 */ C1 ();
/* method id 404 */ virtual ~C1 ();
C1 (special_constructor);
void* v29;
};
struct C2 : public virtual C1 {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual void func1 (abstract_0 v97, abstract_0 v98);
C2 (special_constructor);
abstract_0 v319;
void** v320;
};
struct C3 : public virtual C1, public virtual C2 {
/* method id 408 */ C3 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ virtual void func1 (abstract_0 v347, abstract_0 v348);
C3 (special_constructor);
abstract_0 v386;
abstract_0 v387;
abstract_0 v388;
abstract_0 v389;
};
void func2 (abstract_0 v390, abstract_0 v391, void** v392, abstract_0 v393);
void func3 (abstract_0 v396, abstract_0 v397, abstract_0 v398, abstract_0 v399);
void func4 (abstract_0 v404, abstract_0 v405, abstract_0 v406, abstract_0 v407);
void func5 (abstract_0 v412, abstract_0 v413, abstract_0 v414, abstract_0 v415);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 402 */ void C0::func0 (void* v2) {
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
void* v5 = ((void*) 0);
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_0 v10 = abstract_0();
void* v11 = ((void*) 0);
delete (new C1 ());
return;

}
/* method id 404 */ C1::~C1 () {
void* v12 = ((void*) 0);
void** v13 = new void* ();
abstract_0 v14 = abstract_0();
void** v15 = new void* ();
delete (new C1 ());
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 405 */ C2::~C2 () {
void* v30 = ((void*) 0);
return;

}
/* method id 406 */ C2::C2 () {
abstract_0 v31 = abstract_0();
return;

}
/* method id 407 */ void C2::func1 (abstract_0 v97, abstract_0 v98) {
void** v99 = new void* ();
abstract_0 v100 = abstract_0();
abstract_0 v101 = abstract_0();
abstract_0 v102 = abstract_0();
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 408 */ C3::C3 () {
abstract_0 v321 = abstract_0();
delete (new C2 ());
return;

}
/* method id 409 */ C3::~C3 () {
abstract_0 v327 = abstract_0();
abstract_0 v328 = abstract_0();
abstract_0 v329 = abstract_0();
void** v330 = new void* ();
return;

}
/* method id 410 */ void C3::func1 (abstract_0 v347, abstract_0 v348) {
abstract_0 v349 = abstract_0();
abstract_0 v350 = abstract_0();
void* v351 = ((void*) 0);
abstract_0 v352 = abstract_0();
delete (new C1 ());
return ::func5(abstract_0(), abstract_0(), abstract_0(), abstract_0());

}
C3::C3 (special_constructor) : C1(special_constructor ()), C2(special_constructor ()) {}

void func2 (abstract_0 v390, abstract_0 v391, void** v392, abstract_0 v393) {
abstract_0 v394;
abstract_0 v395;

return;

}
void func3 (abstract_0 v396, abstract_0 v397, abstract_0 v398, abstract_0 v399) {
abstract_0 v400;
abstract_0 v401;
void** v402;
abstract_0 v403;

return;

}
void func4 (abstract_0 v404, abstract_0 v405, abstract_0 v406, abstract_0 v407) {
abstract_0 v408;
abstract_0 v409;
abstract_0 v410;
abstract_0 v411;

return;

}
void func5 (abstract_0 v412, abstract_0 v413, abstract_0 v414, abstract_0 v415) {
abstract_0 v416;
abstract_0 v417;
abstract_0 v418;
abstract_0 v419;

return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var6: AbstractType{0}
8    | var7: AbstractType{0}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
8    | var29: PtrType{VoidType{}}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   | var6: AbstractType{0}
20   | var7: AbstractType{0}
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
0    | {vfptr}
4    | {vbptr}
8    | var319: AbstractType{0}
12   | var320: DeletablePtrType{PtrType{VoidType{}}}
16   +---
16   +--- (virtual base class C0)
16   | {vfptr}
20   | var6: AbstractType{0}
24   | var7: AbstractType{0}
28   +---
28   +--- (virtual base class C1)
28   | {vfptr}
32   | {vbptr}
36   | var29: PtrType{VoidType{}}
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
class C3    size(64)
0    +---
0    | {vbptr}
4    | var386: AbstractType{0}
8    | var387: AbstractType{0}
12   | var388: AbstractType{0}
16   | var389: AbstractType{0}
20   +---
20   +--- (virtual base class C0)
20   | {vfptr}
24   | var6: AbstractType{0}
28   | var7: AbstractType{0}
32   +---
32   +--- (virtual base class C1)
32   | {vfptr}
36   | {vbptr}
40   | var29: PtrType{VoidType{}}
44   +---
44   | {vtordisp for vbase 2}
48   +--- (virtual base class C2)
48   | {vfptr}
52   | {vbptr}
56   | var319: AbstractType{0}
60   | var320: DeletablePtrType{PtrType{VoidType{}}}
64   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 64;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 32;
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
 const size_t model_offset = 48;
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
