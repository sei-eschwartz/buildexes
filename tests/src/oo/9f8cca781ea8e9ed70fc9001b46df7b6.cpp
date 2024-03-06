// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct abstract_1 { int x; };
struct C0;

struct C0  {
/* method id 400 */ abstract_0 func0 ();
/* method id 401 */ abstract_0 func0 (abstract_1 v0);
/* method id 402 */ virtual void func1 ();
/* method id 403 */ void* func2 ();
/* method id 404 */ C0 ();
C0 (special_constructor);
void** v1;
abstract_1 v2;
};
void func4 (C0 v3);
// definitions
/* method id 400 */ abstract_0 C0::func0 () {
delete (new C0 ());
return abstract_0();

}
/* method id 401 */ abstract_0 C0::func0 (abstract_1 v0) {
delete (new C0 ());
return abstract_0();

}
/* method id 402 */ void C0::func1 () {
delete (new C0 ());
return ::func4(*(&(*(this))));

}
/* method id 403 */ void* C0::func2 () {
::func4(*((new C0 ())));
::func4(*((new C0 ())));
v1 = v1;
return ((void*) 0);

}
/* method id 404 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

void func4 (C0 v3) {
abstract_1 v4;
abstract_1 v5;

(&(v3))->C0::func1();
v3 = v3;
(&(v3))->C0::func1();
v3 = v3;
return;

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var1: PtrType{PtrType{VoidType{}}}
8    | var2: AbstractType{1}
12   +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 12;
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
