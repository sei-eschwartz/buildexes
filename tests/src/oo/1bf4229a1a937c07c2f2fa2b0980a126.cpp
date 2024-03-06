// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public C0 {
/* method id 401 */ void func1 (void** v0);
/* method id 402 */ void func0 (void** v3, void** v4, void** v5, void** v6);
/* method id 403 */ C1 ();
C1 (special_constructor);
};
void* func3 ();
void* func4 (void** v13, void** v14, void** v15);
void func5 ();
void func6 (void** v16, void** v17, void** v18, void** v19);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (void** v0) {
void** v1 = new void* ();
void** v2 = new void* ();
return ::func6(new void* (), new void* (), new void* (), new void* ());

}
/* method id 402 */ void C1::func0 (void** v3, void** v4, void** v5, void** v6) {
void** v7 = new void* ();
void** v8 = new void* ();
void** v9 = new void* ();
void** v10 = new void* ();
return ::func5();

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

void* func3 () {
void** v11;
void** v12;

return ((void*) 0);

}
void* func4 (void** v13, void** v14, void** v15) {

return ((void*) 0);

}
void func5 () {

return ::func6(new void* (), new void* (), new void* (), new void* ());

}
void func6 (void** v16, void** v17, void** v18, void** v19) {
void** v20;
void** v21;
void** v22;
void** v23;

return ::func5();

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
class C1    size(0)
0    +---
0    | +--- (base class C0)
0    | +---
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
