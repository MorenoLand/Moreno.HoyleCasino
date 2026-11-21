// FUN_005de620  005de620

void __thiscall FUN_005de620(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_548 [8];
  undefined8 local_540;
  undefined1 local_538 [8];
  undefined8 local_530;
  undefined1 local_528 [16];
  int local_518;
  undefined4 *local_514;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9585;
  local_10 = ExceptionList;
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005d4cf0(local_14,param_1);
  local_8 = 0;
  cVar1 = FUN_006368b0(param_2);
  if (cVar1 == '\0') {
    FUN_00635f30(param_2,local_528);
    cVar1 = FUN_0063ab10(local_528);
    if (cVar1 != '\0') {
      local_514 = (undefined4 *)FUN_0063aae0(8);
      local_518 = FUN_005d5a50();
      local_518 = local_518 - *param_3;
      local_540 = FUN_0064c8a0(local_518,0);
      puVar3 = (undefined4 *)FUN_0064c630(local_548,local_540);
      uVar2 = puVar3[1];
      *local_514 = *puVar3;
      local_514[1] = uVar2;
      FUN_005d5af0(*param_3,param_3[1]);
      FUN_0063b0a0();
    }
  }
  else {
    uVar5 = 8;
    uVar2 = FUN_006369b0(param_2);
    FUN_005dcb00(uVar2,uVar5);
    local_514 = (undefined4 *)FUN_0063aae0(uVar5);
    uVar2 = FUN_006369b0(param_2);
    FUN_005dcb00(uVar2);
    local_518 = FUN_005d5a50();
    local_518 = local_518 - *param_3;
    local_530 = FUN_0064c8a0(local_518,0);
    puVar3 = (undefined4 *)FUN_0064c630(local_538,local_530);
    uVar2 = puVar3[1];
    *local_514 = *puVar3;
    local_514[1] = uVar2;
    iVar6 = param_3[1];
    iVar4 = *param_3;
    uVar2 = FUN_006369b0(param_2);
    FUN_005dcb00(uVar2,iVar4,iVar6);
    FUN_005d5af0(iVar4,iVar6);
    uVar2 = FUN_006369b0(param_2);
    FUN_005dcb00(uVar2);
    FUN_0063b0a0();
  }
  local_8 = 0xffffffff;
  FUN_005d4f50();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

