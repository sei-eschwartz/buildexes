// type for special constructors
struct special_constructor {};
struct C0;

struct C0  {
/* method id 400 */ virtual void* func0 ();
/* method id 401 */ C0 ();
C0 (special_constructor);
void**** v1;
void**** v2;
};
void*** func2 (void**** v3, void**** v4, void**** v5, void**** v6);
void*** func3 (void**** v10);
void* func4 ();
void*** func5 ();
// definitions
/* method id 400 */ void* C0::func0 () {
void**** v0 = new void*** ();
v1 = v0;
return ::func4();

}
/* method id 401 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

void*** func2 (void**** v3, void**** v4, void**** v5, void**** v6) {
void**** v7;
void**** v8;
void**** v9;

delete (new C0 ());
return ((void***) 0);

}
void*** func3 (void**** v10) {

return ::func5();

}
void* func4 () {
void**** v11;
void**** v12;
void**** v13;

(((C0*) 0))->C0::func0();
(((C0*) 0))->C0::func0();
(((C0*) 0))->C0::func0();
(((C0*) 0))->C0::func0();
return ((void*) 0);

}
void*** func5 () {

::func3(new void*** ());
::func3(new void*** ());
return new void** ();

}
#include <iostream>
void check_driver() {
/*
class C0    size(12)
0    +---
0    | {vfptr}
4    | var1: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
8    | var2: DeletablePtrType{PtrType{PtrType{PtrType{VoidType{}}}}}
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
