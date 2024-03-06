// type for special constructors
struct special_constructor {};
struct abstract_1 { int x; };
struct abstract_0 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ abstract_1 func0 (abstract_0 v0);
/* method id 401 */ abstract_1 func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3);
/* method id 402 */ virtual abstract_1 func0 ();
/* method id 403 */ abstract_1 func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7);
/* method id 404 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 405 */ abstract_1 func0 ();
/* method id 406 */ C1 ();
/* method id 407 */ virtual abstract_1 func1 (abstract_0 v19);
/* method id 408 */ virtual ~C1 ();
C1 (special_constructor);
};
abstract_1 func2 ();
abstract_1 func3 (abstract_1* v21, abstract_2 v22, C1 v23, C1 v24);
abstract_1 func4 (abstract_1* v26, C1 v27);
abstract_1 func5 (abstract_0 v29, abstract_0 v30);
// definitions
/* method id 400 */ abstract_1 C0::func0 (abstract_0 v0) {
::func4(((abstract_1*) 0), *(((C1*) 0)));
v0 = v0;
return ::func2();

}
/* method id 401 */ abstract_1 C0::func0 (abstract_0 v1, abstract_0 v2, abstract_0 v3) {
::func4(new abstract_1 (), *((new C1 ())));
::func4(new abstract_1 (), *((new C1 ())));
return abstract_1();

}
/* method id 402 */ abstract_1 C0::func0 () {
return abstract_1();

}
/* method id 403 */ abstract_1 C0::func0 (abstract_0 v4, abstract_0 v5, abstract_2 v6, abstract_2 v7) {
delete (new C1 ());
return ::func5(v5, v5);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 405 */ abstract_1 C1::func0 () {
abstract_0 v8 = abstract_0();
abstract_0 v9 = abstract_0();
abstract_1* v10 = new abstract_1 ();
abstract_0 v11 = abstract_0();
::func4(v10, *(this));
::func4(v10, *(this));
::func4(v10, *(this));
::func4(v10, *(this));
return abstract_1();

}
/* method id 406 */ C1::C1 () {
abstract_2 v12 = abstract_2();
return;

}
/* method id 407 */ abstract_1 C1::func1 (abstract_0 v19) {
return abstract_1();

}
/* method id 408 */ C1::~C1 () {
abstract_1* v20 = ((abstract_1*) 0);
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_1 func2 () {

return abstract_1();

}
abstract_1 func3 (abstract_1* v21, abstract_2 v22, C1 v23, C1 v24) {
abstract_2 v25;

delete (new C1 ());
return ::func4(v21, *(((C1*) 0)));

}
abstract_1 func4 (abstract_1* v26, C1 v27) {
C1 v28;

return abstract_1();

}
abstract_1 func5 (abstract_0 v29, abstract_0 v30) {
abstract_1* v31;
C1 v32;
abstract_2 v33;

return abstract_1();

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
class C1    size(16)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | {vtordisp for vbase 0}
12   +---
12   +--- (virtual base class C0)
12   | {vfptr}
16   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 16;
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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
