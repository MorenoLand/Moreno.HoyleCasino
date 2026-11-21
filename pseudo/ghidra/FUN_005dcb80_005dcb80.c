// FUN_005dcb80  005dcb80

undefined4 * __fastcall FUN_005dcb80(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9509;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006316e0(0x280,0x1e0);
  local_8 = 0;
  *param_1 = CasinoShell::vftable;
  *(undefined1 *)(param_1 + 0x13ba) = 0;
  *(undefined1 *)((int)param_1 + 0x4ee9) = 0;
  *(undefined1 *)((int)param_1 + 0x4eea) = 0;
  *(undefined1 *)((int)param_1 + 0x4f05) = 0;
  param_1[0x13bb] = 0;
  param_1[0x13bc] = 0;
  param_1[0x13bd] = 2;
  param_1[0x13be] = 1;
  param_1[0x13bf] = 0xffffffff;
  param_1[0x13c0] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x13c1) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x13c2] = 100;
  param_1[0x13c3] = 5;
  param_1[0x13c4] = 1;
  param_1[0x13c9] = 0xffffffff;
  param_1[0x13ca] = 0xffffffff;
  param_1[0x13b9] = 200000;
  FUN_005de880(0);
  FUN_005de880(1);
  FUN_005de880(5);
  FUN_005de880(0x19);
  FUN_005de880(100);
  param_1[0x13c7] = param_1[8] + 200;
  FUN_005e0cc0();
  param_1[0x13cb] = 0;
  param_1[0x13cc] = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  pvVar1 = operator_new(4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (pvVar1 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_005e7450();
  }
  DAT_0079506c = local_20;
  *(undefined1 *)(param_1 + 0x13cd) = 0;
  ExceptionList = local_10;
  return param_1;
}

