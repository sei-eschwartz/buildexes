// type for special constructors
struct special_constructor {};
struct C0;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ C0 ();
/* method id 402 */ void* func2 ();
/* method id 403 */ virtual void* func1 (void* v2);
C0 (special_constructor);
};
void* func3 (void* v3, void* v4, void* v5, void* v6);
// definitions
/* method id 400 */ C0::~C0 () {
return;

}
/* method id 401 */ C0::C0 () {
void* v0 = ((void*) 0);
return;

}
/* method id 402 */ void* C0::func2 () {
void* v1 = ((void*) 0);
return v1;

}
/* method id 403 */ void* C0::func1 (void* v2) {
return ::func3(v2, v2, v2, v2);

}
C0::C0 (special_constructor)  {}

void* func3 (void* v3, void* v4, void* v5, void* v6) {
void* v7;
void* v8;

((new C0 ()))->C0::func1(v4);
((new C0 ()))->C0::func1(v4);
return v3;

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
