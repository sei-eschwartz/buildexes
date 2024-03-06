// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

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
C0 v4;
};
struct C2 : public C1 {
/* method id 403 */ virtual void func0 ();
/* method id 404 */ C2 ();
C2 (special_constructor);
C0 v7;
C0 v8;
};
void* func1 (void* v9);
void func2 (void* v11, void* v12, void* v13);
// definitions
/* method id 400 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func0 () {
return;

}
/* method id 402 */ C1::C1 () {
C0 v0 = *(((C0*) 0));
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
v4 = *(((C0*) 0));
return;

}
C1::C1 (special_constructor)  {}

/* method id 403 */ void C2::func0 () {
return ::func2(((void*) 0), ((void*) 0), v1);

}
/* method id 404 */ C2::C2 () {
void* v5 = ((void*) 0);
void* v6 = ((void*) 0);
return;

}
C2::C2 (special_constructor) : C1(special_constructor ()) {}

void* func1 (void* v9) {
void* v10;

(&(*((new C1 ()))))->C1::func0();
(&(*((new C1 ()))))->C1::func0();
(&(*((new C1 ()))))->C1::func0();
(&(*((new C1 ()))))->C1::func0();
return ((void*) 0);

}
void func2 (void* v11, void* v12, void* v13) {
void* v14;
void* v15;

delete (new C2 ());
return;

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
class C1    size(12)
0    +---
0    | var1: PtrType{VoidType{}}
4    | var2: PtrType{VoidType{}}
8    | var3: ClassType{0}
9    | var4: ClassType{0}
10   | alignment: 
12   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 12;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(20)
0    +---
0    | {vfptr}
4    | +--- (base class C1)
4    | | var1: PtrType{VoidType{}}
8    | | var2: PtrType{VoidType{}}
12   | | var3: ClassType{0}
13   | | var4: ClassType{0}
14   | | alignment: 
16   | +---
16   | var7: ClassType{0}
17   | var8: ClassType{0}
18   | alignment: 
20   +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
 {
 const C1* baseobj = (C1*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 4;
 if (computed_offset == model_offset) {
  std::cerr << "BASEOFFSET CORRECT: C2 C1 " << computed_offset << std::endl;
 } else {
  const size_t vc_base_size = sizeof(C1);
  if (vc_base_size == 0 || vc_base_size == 1) std::cerr << "BASEOFFSET WEIRD: C2 C1 ";
  else std::cerr << "BASEOFFSET INCORRECT: C2 C1 ";
  std::cerr << computed_offset << " " << model_offset << std::endl;
 }}}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
