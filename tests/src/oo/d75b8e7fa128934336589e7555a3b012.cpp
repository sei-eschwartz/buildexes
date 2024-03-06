// type for special constructors
struct special_constructor {};
struct abstract_0 { int x; };
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 401 */ void func0 ();
/* method id 402 */ C1 ();
C1 (special_constructor);
void* v1;
void* v2;
C0 v3;
void* v4;
};
void func1 (void* v5, void* v6);
abstract_0 func2 (C1 v11, void* v12, C1 v13, void* v14);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
delete (new C1 ());
return ::func1(((void*) 0), ((void*) 0));

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
delete (new C0 ());
return;

}
C1::C1 (special_constructor)  {}

void func1 (void* v5, void* v6) {
C0 v7;
void* v8;
void* v9;
C1 v10;

(&(v10))->C1::func0();
return (((C1*) 0))->C1::func0();

}
abstract_0 func2 (C1 v11, void* v12, C1 v13, void* v14) {

return abstract_0();

}
#include <iostream>
void check_driver() {
/*
class C0    size(0)
0    +---
0    +---
*/
{
 const C0* obj = new C0(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C0);
 const size_t layout_size = 1;
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
0    | var1: PtrType{VoidType{}}
4    | var2: PtrType{VoidType{}}
8    | var3: ClassType{0}
9    | alignment: 
12   | var4: PtrType{VoidType{}}
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
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
