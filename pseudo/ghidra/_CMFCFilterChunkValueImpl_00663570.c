// ~CMFCFilterChunkValueImpl  00663570

/* Library Function - Single Match
    public: virtual __thiscall CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006acb31;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = FaceSettings::vftable;
  local_8 = 1;
  FUN_006635e0(uVar1);
  local_8 = local_8 & 0xffffff00;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

