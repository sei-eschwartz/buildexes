// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_4 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
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
/* method id 402 */ virtual C0 func2 (void*** v0, void*** v1, void*** v2);
/* method id 403 */ C1 ();
/* method id 404 */ virtual void* func3 (abstract_2 v8, void*** v9, abstract_2 v10);
C1 (special_constructor);
abstract_2 v14;
abstract_2 v15;
abstract_3 v16;
abstract_3 v17;
};
struct C2 : public C1 {
/* method id 406 */ virtual abstract_4 func5 (abstract_2 v18, abstract_2 v19, abstract_2 v20);
/* method id 407 */ virtual C0** func6 (abstract_3 v21, void*** v22, void*** v23);
/* method id 408 */ virtual void* func0 (abstract_2 v24, abstract_2 v25);
/* method id 409 */ virtual C0* func1 (void*** v27, abstract_3 v28);
/* method id 410 */ C2 ();
C2 (special_constructor);
};
struct C3 : public C2 {
/* method id 412 */ C3 ();
C3 (special_constructor);
};
void*** func11 ();
void*** func12 ();
abstract_0** func13 (abstract_3 v30, void*** v31, abstract_0*** v32, void*** v33);
abstract_0 func14 (void*** v35, abstract_2 v36);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0 C1::func2 (void*** v0, void*** v1, void*** v2) {
void*** v3 = ((void***) 0);
void*** v4 = ((void***) 0);
abstract_2 v5 = abstract_2();
abstract_2 v6 = abstract_2();
return *(&(*(((C0*) 0))));

}
/* method id 403 */ C1::C1 () {
void*** v7 = ((void***) 0);
return;

}
/* method id 404 */ void* C1::func3 (abstract_2 v8, void*** v9, abstract_2 v10) {
C0 v11 = *(&(*(((C0*) 0))));
abstract_2 v12 = abstract_2();
C0 v13 = *(&(*(((C0*) 0))));
return ((void*) 0);

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_4 C2::func5 (abstract_2 v18, abstract_2 v19, abstract_2 v20) {
::func14(new void** (), v15);
::func14(new void** (), v15);
v20 = v14;
return abstract_4();

}
/* method id 407 */ C0** C2::func6 (abstract_3 v21, void*** v22, void*** v23) {
v14 = v15;
v14 = v15;
v14 = v15;
return new C0* ();

}
/* method id 408 */ void* C2::func0 (abstract_2 v24, abstract_2 v25) {
void*** v26 = new void** ();
return ((void*) 0);

}
/* method id 409 */ C0* C2::func1 (void*** v27, abstract_3 v28) {
abstract_2 v29 = abstract_2();
return ((C0*) 0);

}
/* method id 410 */ C2::C2 () {

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

/* method id 412 */ C3::C3 () {

}
C3::C3 (special_constructor) : C2(special_constructor ()) {}

void*** func11 () {

return ((void***) 0);

}
void*** func12 () {

::func11();
::func11();
::func11();
return new void** ();

}
abstract_0** func13 (abstract_3 v30, void*** v31, abstract_0*** v32, void*** v33) {
void*** v34;

delete (new C2 ());
return new abstract_0* ();

}
abstract_0 func14 (void*** v35, abstract_2 v36) {

::func12();
return abstract_0();

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
8    | var14: AbstractType{2}
12   | var15: AbstractType{2}
16   | var16: AbstractType{3}
20   | var17: AbstractType{3}
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
class C2    size(28)
0    +---
0    | +--- (base class C1)
0    | | {vfptr}
4    | | {vbptr}
8    | | var14: AbstractType{2}
12   | | var15: AbstractType{2}
16   | | var16: AbstractType{3}
20   | | var17: AbstractType{3}
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 28;
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
class C3    size(28)
0    +---
0    | +--- (base class C2)
0    | | +--- (base class C1)
0    | | | {vfptr}
4    | | | {vbptr}
8    | | | var14: AbstractType{2}
12   | | | var15: AbstractType{2}
16   | | | var16: AbstractType{3}
20   | | | var17: AbstractType{3}
24   | | +---
24   | +---
24   +---
24   +--- (virtual base class C0)
24   | {vfptr}
28   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 28;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C2* baseobj = (C2*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 0;
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
