// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual abstract_0*** func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual abstract_1 func2 (C0 v0, C0 v1);
/* method id 403 */ virtual abstract_1 func3 (C0 v2, C0 v3, C0 v4);
/* method id 404 */ virtual abstract_0*** func3 (C0 v8, C0 v9);
/* method id 405 */ C1 ();
C1 (special_constructor);
};
struct C2 : public virtual C1 {
/* method id 406 */ C2 ();
/* method id 407 */ virtual abstract_0*** func0 ();
/* method id 408 */ abstract_0* func2 ();
/* method id 409 */ abstract_0 func1 ();
C2 (special_constructor);
C1 v18;
C1 v19;
};
abstract_2 func5 (abstract_0* v20, C0 v21);
abstract_0* func6 ();
abstract_0** func7 (abstract_0* v24, C1 v25, C0 v26, abstract_0* v27);
// definitions
/* method id 400 */ abstract_0*** C0::func0 () {
return new abstract_0** ();

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_1 C1::func2 (C0 v0, C0 v1) {
delete (new C1 ());
return abstract_1();

}
/* method id 403 */ abstract_1 C1::func3 (C0 v2, C0 v3, C0 v4) {
C0 v5 = *(((C0*) 0));
C0 v6 = *(((C0*) 0));
C0 v7 = *(((C0*) 0));
delete (new C1 ());
return ((new C1 ()))->C1::func2(v2, v2);

}
/* method id 404 */ abstract_0*** C1::func3 (C0 v8, C0 v9) {
return ((abstract_0***) 0);

}
/* method id 405 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ C2::C2 () {
C0 v10 = *((new C0 ()));
C0 v11 = *((new C0 ()));
return;

}
/* method id 407 */ abstract_0*** C2::func0 () {
C0 v12 = *(&(*(((C0*) 0))));
C0 v13 = *(&(*(((C0*) 0))));
abstract_0* v14 = ((abstract_0*) 0);
abstract_0* v15 = ((abstract_0*) 0);
return ((abstract_0***) 0);

}
/* method id 408 */ abstract_0* C2::func2 () {
return new abstract_0 ();

}
/* method id 409 */ abstract_0 C2::func1 () {
abstract_0* v16 = ((abstract_0*) 0);
C1 v17 = *(&(*(((C1*) 0))));
return abstract_0();

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

abstract_2 func5 (abstract_0* v20, C0 v21) {
abstract_0* v22;
C0 v23;

return abstract_2();

}
abstract_0* func6 () {

return new abstract_0 ();

}
abstract_0** func7 (abstract_0* v24, C1 v25, C0 v26, abstract_0* v27) {
C1 v28;
C1 v29;
C0 v30;
C1 v31;

return new abstract_0* ();

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
class C1    size(4)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
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
class C2    size(20)
0    +---
0    | {vbptr}
4    | var18: ClassType{1}
8    | var19: ClassType{1}
12   | {vtordisp for vbase 1}
16   +---
16   +--- (virtual base class C1)
16   | +--- (base class C0)
16   | | {vfptr}
20   | +---
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
 const size_t model_offset = 16;
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
