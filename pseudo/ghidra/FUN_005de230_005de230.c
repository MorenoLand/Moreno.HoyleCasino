// FUN_005de230  005de230

void __thiscall FUN_005de230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_520 [1292];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9552;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005d4cf0(local_14,param_1);
  local_8 = 0;
  cVar1 = FUN_006368b0(param_2);
  if (cVar1 == '\0') {
    FUN_00635f30(param_2,local_520);
    FUN_0063ab10(local_520);
    FUN_005d5ac0(param_3);
  }
  else {
    uVar2 = FUN_006369b0(param_2);
    FUN_005dcb00(uVar2,param_3);
    FUN_005d5ac0(param_3);
  }
  local_8 = 0xffffffff;
  FUN_005d4f50();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

