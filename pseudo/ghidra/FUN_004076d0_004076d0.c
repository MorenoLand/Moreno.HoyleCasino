// FUN_004076d0  004076d0

void __fastcall FUN_004076d0(undefined4 *param_1)

{
  uint uVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0069d916;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = BaccaratState::vftable;
  local_8 = 1;
  if ((undefined4 *)param_1[0x436] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x436])(1,uVar1);
  }
  for (local_14 = 0; local_14 < 0xc; local_14 = local_14 + 1) {
    if ((undefined4 *)param_1[local_14 + 1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[local_14 + 1])(1);
    }
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x2f,0x338,5,FUN_004073a0);
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  return;
}

