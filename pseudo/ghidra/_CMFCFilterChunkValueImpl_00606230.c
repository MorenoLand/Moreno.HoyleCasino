// ~CMFCFilterChunkValueImpl  00606230

/* Library Function - Single Match
    public: virtual __thiscall CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl(CMFCFilterChunkValueImpl *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006aabe6;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = sciRadioButtonGroup::vftable;
  local_8 = 1;
  FUN_00606850(uVar1);
  local_8 = local_8 & 0xffffff00;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_005f4ad0();
  ExceptionList = local_10;
  return;
}

