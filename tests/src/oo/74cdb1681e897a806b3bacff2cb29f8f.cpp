// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 402 */ virtual C0 func2 (abstract_0*** v0, abstract_0*** v1);
/* method id 403 */ virtual ~C1 ();
/* method id 404 */ C1 ();
/* method id 405 */ virtual C0** func1 ();
C1 (special_constructor);
abstract_0*** v12;
};
struct C2  {
/* method id 406 */ virtual abstract_0*** func1 ();
/* method id 407 */ abstract_0* func1 (abstract_0*** v14);
/* method id 408 */ C2 ();
C2 (special_constructor);
abstract_0*** v15;
abstract_0*** v16;
abstract_0*** v17;
};
// definitions
/* method id 400 */ C0::~C0 () {
delete (new C1 ());
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C0 C1::func2 (abstract_0*** v0, abstract_0*** v1) {
abstract_0*** v2 = new abstract_0** ();
abstract_0*** v3 = new abstract_0** ();
abstract_0*** v4 = new abstract_0** ();
abstract_0*** v5 = new abstract_0** ();
delete (new C2 ());
return *(((C0*) 0));

}
/* method id 403 */ C1::~C1 () {
abstract_0*** v6 = new abstract_0** ();
abstract_0*** v7 = new abstract_0** ();
abstract_0*** v8 = new abstract_0** ();
(((C1*) 0))->C1::func2(v8, v8);
(((C1*) 0))->C1::func2(v8, v8);
(((C1*) 0))->C1::func2(v8, v8);
(((C1*) 0))->C1::func2(v8, v8);
return;

}
/* method id 404 */ C1::C1 () {
abstract_0*** v9 = new abstract_0** ();
delete (new C1 ());
return;

}
/* method id 405 */ C0** C1::func1 () {
abstract_0*** v10 = new abstract_0** ();
abstract_0*** v11 = new abstract_0** ();
return new C0* ();

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 406 */ abstract_0*** C2::func1 () {
abstract_0*** v13 = new abstract_0** ();
delete (new C1 ());
return v13;

}
/* method id 407 */ abstract_0* C2::func1 (abstract_0*** v14) {
return new abstract_0 ();

}
/* method id 408 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

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
8    | var12: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
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
/*
class C2    size(16)
0    +---
0    | {vfptr}
4    | var15: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
8    | var16: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
12   | var17: DeletablePtrType{PtrType{PtrType{AbstractType{0}}}}
16   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
