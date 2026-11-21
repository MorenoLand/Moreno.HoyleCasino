// FUN_004c8210  004c8210

undefined4 __thiscall FUN_004c8210(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1d;
  int local_1c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a23ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00484300(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 1;
  if (*(int *)(param_1 + 8) != 0) {
    local_1c = 0;
    while( true ) {
      iVar1 = FUN_0060c9a0();
      if (iVar1 <= local_1c) break;
      uVar2 = FUN_004c7310(*(undefined4 *)(param_1 + 8),local_1c);
      uVar2 = FUN_004ddb10(&local_1d,uVar2);
      local_8._0_1_ = 2;
      FUN_00484830(uVar2);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00464210();
      local_1c = local_1c + 1;
    }
  }
  FUN_00484320(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00484470();
  ExceptionList = local_10;
  return param_2;
}

