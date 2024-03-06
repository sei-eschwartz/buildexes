// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual abstract_0** func2 (C0* v0, C0* v1);
/* method id 403 */ C1 ();
/* method id 404 */ virtual abstract_0** func3 (C0* v10, abstract_0* v11);
/* method id 405 */ ~C1 ();
C1 (special_constructor);
abstract_0* v18;
abstract_1 v19;
abstract_1 v20;
C0* v21;
};
abstract_0** func5 (abstract_1 v22, C0* v23);
// definitions
/* method id 400 */ C0::~C0 () {
((new C1 ()))->C1::func3(this, ((abstract_0*) 0));
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ abstract_0** C1::func2 (C0* v0, C0* v1) {
C0* v2 = &(*(((C0*) 0)));
C0* v3 = &(*(((C0*) 0)));
C0* v4 = &(*(((C0*) 0)));
C0* v5 = &(*(((C0*) 0)));
delete (new C0 ());
return new abstract_0* ();

}
/* method id 403 */ C1::C1 () {
C0* v6 = (new C0 ());
C0* v7 = ((C0*) 0);
C0* v8 = &(*(&(*(((C0*) 0)))));
C0* v9 = ((C0*) 0);
((new C1 ()))->C1::func2(v9, v9);
return;

}
/* method id 404 */ abstract_0** C1::func3 (C0* v10, abstract_0* v11) {
abstract_0* v12 = new abstract_0 ();
abstract_0* v13 = new abstract_0 ();
return new abstract_0* ();

}
/* method id 405 */ C1::~C1 () {
abstract_0* v14 = ((abstract_0*) 0);
abstract_0* v15 = new abstract_0 ();
abstract_0* v16 = ((abstract_0*) 0);
C0* v17 = &(*(((C0*) 0)));
v14 = v18;
v14 = v18;
return;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

abstract_0** func5 (abstract_1 v22, C0* v23) {
C0* v24;
abstract_1 v25;
C0* v26;
abstract_0* v27;

delete (new C1 ());
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
class C1    size(28)
0    +---
0    | {vfptr}
4    | {vbptr}
8    | var18: PtrType{AbstractType{0}}
12   | var19: AbstractType{1}
16   | var20: AbstractType{1}
20   | var21: PtrType{ClassType{0}}
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
