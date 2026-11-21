// FUN_0065cc90  0065cc90

void __fastcall FUN_0065cc90(undefined4 *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006ac7d0;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = FacePictureScroll::vftable;
  local_8 = 1;
  if (param_1[0x1c] != 0) {
    if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1c])(1,uVar1);
    }
    param_1[0x1c] = 0;
  }
  local_8 = local_8 & 0xffffff00;
  CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl((CMFCFilterChunkValueImpl *)(param_1 + 0x1d));
  local_8 = 0xffffffff;
  FUN_00614a10();
  ExceptionList = local_10;
  return;
}

