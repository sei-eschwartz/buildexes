// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C0  {
/* method id 400 */ void func0 (void* v0);
/* method id 401 */ virtual void func0 ();
/* method id 402 */ C0 ();
C0 (special_constructor);
};
void func2 (abstract_0 v6, abstract_0 v7, abstract_0 v8, C0 v9);
// definitions
/* method id 400 */ void C0::func0 (void* v0) {
void* v1 = ((void*) 0);
return;

}
/* method id 401 */ void C0::func0 () {
void* v2 = ((void*) 0);
void* v3 = ((void*) 0);
void* v4 = ((void*) 0);
void* v5 = ((void*) 0);
return;

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

void func2 (abstract_0 v6, abstract_0 v7, abstract_0 v8, C0 v9) {
abstract_0 v10;

((new C0 ()))->C0::func0(((void*) 0));
((new C0 ()))->C0::func0();
((new C0 ()))->C0::func0(((void*) 0));
((new C0 ()))->C0::func0(((void*) 0));
return;

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
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
