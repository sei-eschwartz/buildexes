// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct abstract_4 { int x; };
struct abstract_5 { int x; };
struct abstract_6 { int x; };
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ C1 ();
/* method id 402 */ C0 func0 (abstract_1 v4);
C1 (special_constructor);
abstract_0 v5;
};
struct C2 : public virtual C1 {
/* method id 403 */ C0 func0 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
};
struct C3 : public virtual C0, public C2 {
/* method id 405 */ C3 ();
/* method id 406 */ virtual ~C3 ();
/* method id 407 */ virtual C0 func1 ();
/* method id 408 */ virtual C0 func0 ();
C3 (special_constructor);
abstract_1 v385;
C0* v386;
C0* v387;
};
C0 func2 (C0* v388, C0* v389, abstract_1 v390, C0* v391);
C0 func3 (C0* v394, C0* v395, C0* v396, C0* v397);
C0 func4 (C0* v402, C0* v403, C0* v404, C0* v405);
C0 func5 (C0* v406);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ C1::C1 () {
abstract_0 v0 = abstract_0();
C0* v1 = ((C0*) 0);
C0* v2 = ((C0*) 0);
return;

}
/* method id 402 */ C0 C1::func0 (abstract_1 v4) {
return *(((C0*) 0));

}
C1::C1 (special_constructor)  {}

/* method id 403 */ C0 C2::func0 () {
C0* v6 = ((C0*) 0);
abstract_2 v7 = abstract_2();
abstract_0 v8 = abstract_0();
C0* v9 = ((C0*) 0);
delete (new C1 ());
return ::func3(v9, v9, v9, v9);

}
/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 405 */ C3::C3 () {
abstract_3 v10 = abstract_3();
C0* v11 = &(*(((C0*) 0)));
C0* v12 = &(*(((C0*) 0)));
C0* v13 = &(*(((C0*) 0)));
return;

}
/* method id 406 */ C3::~C3 () {
C0* v18 = (new C0 ());
C0* v19 = (new C0 ());
C0* v20 = (new C0 ());
C0* v21 = (new C0 ());
return;

}
/* method id 407 */ C0 C3::func1 () {
abstract_4 v29 = abstract_4();
C0* v30 = &((((C1*) 0))->C1::func0(abstract_1()));
abstract_1 v31 = abstract_1();
C0* v32 = &((((C1*) 0))->C1::func0(abstract_1()));
return *((new C0 ()));

}
/* method id 408 */ C0 C3::func0 () {
abstract_6 v381 = abstract_6();
abstract_1 v382 = abstract_1();
abstract_4 v383 = abstract_4();
C0* v384 = &(*(&(*((new C0 ())))));
return *(v387);

}
C3::C3 (special_constructor) : C0(special_constructor ()), C2(special_constructor ()) {}

C0 func2 (C0* v388, C0* v389, abstract_1 v390, C0* v391) {
C0* v392;
C0* v393;

return *(v392);

}
C0 func3 (C0* v394, C0* v395, C0* v396, C0* v397) {
C0* v398;
C0* v399;
C0* v400;
abstract_1 v401;

return *(v397);

}
C0 func4 (C0* v402, C0* v403, C0* v404, C0* v405) {

delete (new C1 ());
return ::func3(v403, v403, v403, v403);

}
C0 func5 (C0* v406) {
C0* v407;
C0* v408;
C0* v409;

delete (new C1 ());
return ::func3(v407, v407, v407, v407);

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
class C1    size(4)
0    +---
0    | var5: AbstractType{0}
4    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(8)
0    +---
0    | {vbptr}
4    +---
4    +--- (virtual base class C1)
4    | var5: AbstractType{0}
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
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
/*
class C3    size(24)
0    +---
0    | {vfptr}
4    | +--- (base class C2)
4    | | {vbptr}
8    | +---
8    | var385: AbstractType{1}
12   | var386: PtrType{ClassType{0}}
16   | var387: PtrType{ClassType{0}}
20   +---
20   +--- (virtual base class C0)
20   +---
20   +--- (virtual base class C1)
20   | var5: AbstractType{0}
24   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 24;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 20;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C3 C0 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C0);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C3 C0 ";
  else std::cerr << "BASEOFFSET INCORRECT: C3 C0 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }} {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
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
