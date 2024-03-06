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
struct C1 : public C0 {
/* method id 402 */ C1 ();
/* method id 403 */ virtual void*** func2 (void*** v1, void*** v2, void*** v3);
/* method id 404 */ virtual void*** func3 (void*** v7);
/* method id 405 */ void*** func4 (void*** v12);
C1 (special_constructor);
};
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 402 */ C1::C1 () {
void*** v0 = new void** ();
delete (new C0 ());
return;

}
/* method id 403 */ void*** C1::func2 (void*** v1, void*** v2, void*** v3) {
void*** v4 = new void** ();
void*** v5 = new void** ();
void*** v6 = new void** ();
return new void** ();

}
/* method id 404 */ void*** C1::func3 (void*** v7) {
void*** v8 = new void** ();
void*** v9 = new void** ();
abstract_0 v10 = abstract_0();
abstract_0 v11 = abstract_0();
return v8;

}
/* method id 405 */ void*** C1::func4 (void*** v12) {
void*** v13 = ((void***) 0);
void*** v14 = new void** ();
abstract_0 v15 = abstract_0();
abstract_1 v16 = abstract_1();
v15 = v15;
v13 = v12;
return v14;

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
