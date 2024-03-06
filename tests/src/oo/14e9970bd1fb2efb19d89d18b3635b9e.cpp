// type for special constructors
struct special_constructor {};
struct C0;

struct C1;

struct C0  {
/* method id 400 */ C0 ();
C0 (special_constructor);
};
struct C1 : public virtual C0 {
/* method id 401 */ void func1 (C0 v0);
/* method id 402 */ virtual void func0 (C0 v1);
/* method id 403 */ C1 ();
C1 (special_constructor);
C0 v2;
C0 v3;
C0 v4;
C0 v5;
};
void func3 (C0 v6);
void func4 (C0 v10, C0 v11, C0 v12, C0 v13);
void func5 (C0 v18, C0 v19, C0 v20, C0 v21);
void func6 (C0 v26);
// definitions
/* method id 400 */ C0::C0 () {
return;

}
C0::C0 (special_constructor)  {}

/* method id 401 */ void C1::func1 (C0 v0) {
delete (new C1 ());
return ::func4(v3, v3, v3, v3);

}
/* method id 402 */ void C1::func0 (C0 v1) {
v3 = v3;
v3 = v3;
return ::func3(v3);

}
/* method id 403 */ C1::C1 () {

}
C1::C1 (special_constructor) : C0(special_constructor ()) {}

void func3 (C0 v6) {
C0 v7;
C0 v8;
C0 v9;

delete (new C1 ());
return;

}
void func4 (C0 v10, C0 v11, C0 v12, C0 v13) {
C0 v14;
C0 v15;
C0 v16;
C0 v17;

return;

}
void func5 (C0 v18, C0 v19, C0 v20, C0 v21) {
C0 v22;
C0 v23;
C0 v24;
C0 v25;

delete (new C1 ());
return ::func4(v19, v19, v19, v19);

}
void func6 (C0 v26) {
C0 v27;
C0 v28;
C0 v29;
C0 v30;

return ::func4(v29, v29, v29, v29);

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
0    | {vfptr}
4    | {vbptr}
8    | var2: ClassType{0}
9    | var3: ClassType{0}
10   | var4: ClassType{0}
11   | var5: ClassType{0}
12   +---
12   +--- (virtual base class C0)
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
 {
 const C0* baseobj = (C0*) obj;
 const size_t computed_offset = (uintptr_t)baseobj - (uintptr_t)obj;
 const size_t model_offset = 12;
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
