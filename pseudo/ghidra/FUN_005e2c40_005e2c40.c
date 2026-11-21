// FUN_005e2c40  005e2c40

void FUN_005e2c40(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_530;
  undefined4 local_52c;
  undefined1 local_524 [16];
  int local_514;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9642;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005d4cf0(local_14);
  local_8 = 0;
  cVar1 = FUN_006368b0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00635f30(param_1,local_524);
    if (cVar1 != '\0') {
      FUN_0063ab10(local_524);
      local_514 = FUN_005d52e0();
      puVar4 = (undefined4 *)(local_514 + 0x60 + param_3 * 0x24);
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_2;
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 1;
      }
      *(int *)(local_514 + 0x2c) = *(int *)(local_514 + 0x2c) + param_4;
      if (*(int *)(local_514 + 0x2c) < 1000000000) {
        local_530 = *(undefined4 *)(local_514 + 0x2c);
      }
      else {
        local_530 = 1000000000;
      }
      *(undefined4 *)(local_514 + 0x2c) = local_530;
      FUN_0063b0a0();
    }
  }
  else {
    uVar2 = FUN_006369b0(param_1);
    FUN_005dcb00(uVar2);
    local_514 = FUN_005d52e0();
    puVar4 = (undefined4 *)(local_514 + 0x60 + param_3 * 0x24);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(int *)(local_514 + 0x2c) = *(int *)(local_514 + 0x2c) + param_4;
    if (*(int *)(local_514 + 0x2c) < 1000000000) {
      local_52c = *(undefined4 *)(local_514 + 0x2c);
    }
    else {
      local_52c = 1000000000;
    }
    *(undefined4 *)(local_514 + 0x2c) = local_52c;
    uVar2 = FUN_006369b0(param_1);
    FUN_005dcb00(uVar2);
    FUN_0063b0a0();
  }
  local_8 = 0xffffffff;
  FUN_005d4f50();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

