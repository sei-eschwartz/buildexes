// type for special constructors
struct special_constructor {};
struct abstract_3 { int x; };
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 402 */ virtual void func1 (void** v0, void** v1, void** v2, void** v3);
/* method id 403 */ void func1 (void** v7, void** v8, void** v9);
/* method id 404 */ void func2 (void** v11, void** v12);
/* method id 405 */ virtual void func1 (void** v14);
/* method id 406 */ C1 ();
C1 (special_constructor);
abstract_0 v16;
};
struct C2  {
/* method id 407 */ C2 ();
/* method id 408 */ virtual ~C2 ();
/* method id 409 */ virtual void func3 (abstract_0 v89, abstract_0 v90);
/* method id 410 */ virtual void func3 ();
C2 (special_constructor);
abstract_2 v254;
abstract_0 v255;
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ void C1::func1 (void** v0, void** v1, void** v2, void** v3) {
void** v4 = new void* ();
void** v5 = new void* ();
void** v6 = new void* ();
delete (new C0 ());
return;

}
/* method id 403 */ void C1::func1 (void** v7, void** v8, void** v9) {
void** v10 = new void* ();
return (((C1*) 0))->C1::func2(new void* (), new void* ());

}
/* method id 404 */ void C1::func2 (void** v11, void** v12) {
abstract_0 v13 = abstract_0();
return;

}
/* method id 405 */ void C1::func1 (void** v14) {
abstract_0 v15 = abstract_0();
delete (new C2 ());
return (((C1*) 0))->C1::func2(v14, v14);

}
/* method id 406 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

/* method id 407 */ C2::C2 () {
abstract_0 v17 = abstract_0();
abstract_0 v18 = abstract_0();
abstract_0 v19 = abstract_0();
abstract_0 v20 = abstract_0();
v19 = abstract_0();
v19 = abstract_0();
return;

}
/* method id 408 */ C2::~C2 () {
abstract_0 v21 = abstract_0();
abstract_0 v22 = abstract_0();
abstract_0 v23 = abstract_0();
abstract_0 v24 = abstract_0();
delete (new C2 ());
return;

}
/* method id 409 */ void C2::func3 (abstract_0 v89, abstract_0 v90) {
abstract_1 v91 = abstract_1();
abstract_0 v92 = abstract_0();
abstract_0 v93 = abstract_0();
abstract_0 v94 = abstract_0();
delete (new C2 ());
return;

}
/* method id 410 */ void C2::func3 () {
abstract_0 v252 = abstract_0();
abstract_2 v253 = abstract_2();
delete (new C1 ());
return;

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
class C1    size(8)
0    +---
0    | +--- (base class C0)
0    | | {vfptr}
4    | +---
4    | var16: AbstractType{0}
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
class C2    size(12)
0    +---
0    | {vfptr}
4    | var254: AbstractType{2}
8    | var255: AbstractType{0}
12   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 12;
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
