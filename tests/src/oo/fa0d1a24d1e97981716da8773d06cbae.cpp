// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct abstract_2 { int x; };
struct abstract_3 { int x; };
struct C0;

struct C1;

struct C2;

struct C0  {
/* method id 400 */ virtual ~C0 ();
/* method id 401 */ void**** func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ C1 ();
C1 (special_constructor);
};
struct C2  {
/* method id 404 */ C2 ();
C2 (special_constructor);
void*** v20;
void*** v21;
void*** v22;
};
void*** func3 (void*** v23);
void* func4 (abstract_2 v25, abstract_3 v26, abstract_1 v27, abstract_0**** v28);
// definitions
/* method id 400 */ C0::~C0 () {
abstract_0**** v0 = new abstract_0*** ();
abstract_0**** v1 = new abstract_0*** ();
abstract_0**** v2 = new abstract_0*** ();
return;

}
/* method id 401 */ void**** C0::func0 () {
abstract_0**** v3 = new abstract_0*** ();
abstract_1 v4 = abstract_1();
return new void*** ();

}
/* method id 402 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
abstract_1 v16 = abstract_1();
abstract_0**** v17 = new abstract_0*** ();
abstract_2 v18 = abstract_2();
abstract_2 v19 = abstract_2();
return;

}
C1::C1 (special_constructor)  {}

/* method id 404 */ C2::C2 () {

}
C2::C2 (special_constructor)  {}

void*** func3 (void*** v23) {
void*** v24;

return v23;

}
void* func4 (abstract_2 v25, abstract_3 v26, abstract_1 v27, abstract_0**** v28) {

return ((void*) 0);

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
class C1    size(0)
0    +---
0    +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 1;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(12)
0    +---
0    | var20: PtrType{PtrType{PtrType{VoidType{}}}}
4    | var21: PtrType{PtrType{PtrType{VoidType{}}}}
8    | var22: PtrType{PtrType{PtrType{VoidType{}}}}
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
