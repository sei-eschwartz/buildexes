// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ virtual void func0 ();
/* method id 401 */ virtual ~C0 ();
/* method id 402 */ virtual void func1 (abstract_1 v6);
/* method id 403 */ C0 ();
C0 (special_constructor);
void* v10;
abstract_0 v11;
abstract_0 v12;
abstract_1 v13;
};
// definitions
/* method id 400 */ void C0::func0 () {
void* v0 = ((void*) 0);
void* v1 = ((void*) 0);
v12 = abstract_0();
v12 = abstract_0();
v12 = abstract_0();
v12 = abstract_0();
return;

}
/* method id 401 */ C0::~C0 () {
void* v2 = ((void*) 0);
abstract_0 v3 = abstract_0();
abstract_0 v4 = abstract_0();
abstract_1 v5 = abstract_1();
v5 = v13;
v5 = v13;
(((C0*) 0))->C0::func1(abstract_1());
return;

}
/* method id 402 */ void C0::func1 (abstract_1 v6) {
abstract_1 v7 = abstract_1();
delete (new C0 ());
return;

}
/* method id 403 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

#include <iostream>
void check_driver() {
/*
class C0    size(20)
0    +---
0    | {vfptr}
4    | var10: PtrType{VoidType{}}
8    | var11: AbstractType{0}
12   | var12: AbstractType{0}
16   | var13: AbstractType{1}
20   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C0 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C0 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
