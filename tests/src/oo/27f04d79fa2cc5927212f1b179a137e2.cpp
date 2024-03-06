// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C2;

struct C3;

struct C0  {
/* method id 400 */ ~C0 ();
/* method id 401 */ virtual void*** func0 (void**** v1);
/* method id 402 */ C0 ();
C0 (special_constructor);
};
struct C1  {
/* method id 403 */ C1 ();
/* method id 404 */ virtual void func1 (void**** v4);
C1 (special_constructor);
void**** v5;
void**** v6;
void**** v7;
void**** v8;
};
struct C2  {
/* method id 405 */ virtual ~C2 ();
/* method id 406 */ C2 ();
/* method id 407 */ virtual void*** func0 ();
C2 (special_constructor);
};
struct C3  {
/* method id 408 */ virtual void* func0 ();
/* method id 409 */ virtual ~C3 ();
/* method id 410 */ C3 ();
C3 (special_constructor);
void**** v12;
void**** v13;
void**** v14;
};
void*** func3 ();
void*** func4 ();
void* func5 (void**** v17, void**** v18, void**** v19, void**** v20);
// definitions
/* method id 400 */ C0::~C0 () {
void**** v0 = new void*** ();
return;

}
/* method id 401 */ void*** C0::func0 (void**** v1) {
void**** v2 = new void*** ();
return new void** ();

}
/* method id 402 */ C0::C0 () {

}
C0::C0 (special_constructor)  {}

/* method id 403 */ C1::C1 () {
void**** v3 = new void*** ();
v3 = v3;
v3 = v3;
return;

}
/* method id 404 */ void C1::func1 (void**** v4) {
return;

}
C1::C1 (special_constructor)  {}

/* method id 405 */ C2::~C2 () {
return;

}
/* method id 406 */ C2::C2 () {
return;

}
/* method id 407 */ void*** C2::func0 () {
void**** v9 = new void*** ();
delete (new C3 ());
return ((void***) 0);

}
C2::C2 (special_constructor)  {}

/* method id 408 */ void* C3::func0 () {
delete (new C2 ());
return ((void*) 0);

}
/* method id 409 */ C3::~C3 () {
void**** v10 = new void*** ();
void**** v11 = new void*** ();
return;

}
/* method id 410 */ C3::C3 () {

}
C3::C3 (special_constructor)  {}

void*** func3 () {
void**** v15;
void**** v16;

v16 = v16;
v16 = v16;
v16 = v16;
return new void** ();

}
void*** func4 () {

return ((void***) 0);

}
void* func5 (void**** v17, void**** v18, void**** v19, void**** v20) {

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
class C1    size(20)
0    +---
0    | {vfptr}
4    | var5: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | var6: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var7: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   | var8: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
20   +---
*/
{
 const C1* obj = new C1(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C1);
 const size_t layout_size = 20;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C1 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C1 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C2    size(4)
0    +---
0    | {vfptr}
4    +---
*/
{
 const C2* obj = new C2(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C2);
 const size_t layout_size = 4;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C2 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C2 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
/*
class C3    size(16)
0    +---
0    | {vfptr}
4    | var12: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
8    | var13: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
12   | var14: DeletablePtrType{PtrType{DeletablePtrType{PtrType{VoidType{}}}}}
16   +---
*/
{
 const C3* obj = new C3(special_constructor());
 // verify class size
 const size_t vc_size = sizeof(C3);
 const size_t layout_size = 16;
 if (vc_size == layout_size) {
  std::cerr << "CLASSSIZE CORRECT: C3 " << layout_size << std::endl;
 } else {
  std::cerr << "CLASSSIZE INCORRECT: C3 " << vc_size << " " << layout_size << std::endl;
 }
 // verify base offset
}
 std::cerr << "SUCCESS" << std::endl;
}
int main() { check_driver (); }
