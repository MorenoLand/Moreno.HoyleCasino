// FUN_0056a070  0056a070

void __fastcall FUN_0056a070(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *local_40;
  short asStack_28 [6];
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a5caf;
  local_10 = ExceptionList;
  uVar4 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = uVar4;
  FUN_00561d40(1);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    uVar5 = FUN_0056b910(uVar4);
    FUN_0056a7a0(uVar5,1);
    FUN_0056a960();
    FUN_0056aa50();
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined1 *)(param_1 + 0x2f) = 0;
    FUN_005687b0();
    FUN_00569270();
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(undefined2 *)(param_1 + 0x24 + local_14 * 2) = 0;
    }
    FUN_005645c0(0);
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_0056b130();
    cVar1 = FUN_005df7b0(0xffffffff);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x30) != '\0')) {
      uVar2 = FUN_0056a380();
      *(undefined1 *)(param_1 + 0x30) = uVar2;
      if (*(char *)(param_1 + 0x30) == '\0') {
        FUN_00569270();
        FUN_00561e20();
        if (DAT_00793578 != 0) {
          FUN_0057c140();
        }
        goto LAB_0056a35b;
      }
    }
    FUN_005f2ba0(0x1391);
  }
  FUN_005623d0();
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    asStack_28[local_14] = *(short *)(param_1 + 0x24 + local_14 * 2);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    cVar1 = FUN_00568840(asStack_28[local_14]);
    if (cVar1 == '\0') {
      if (asStack_28[local_14] == 0) {
        local_18 = local_14;
      }
      else {
        local_18 = FUN_00562240(asStack_28[local_14]);
      }
      iVar6 = FUN_005692f0();
      if (iVar6 == 5) {
        FUN_00569460(CONCAT22(extraout_var_00,asStack_28[local_14]));
      }
      uVar3 = FUN_006436c0();
      FUN_00569340(CONCAT22(extraout_var,uVar3));
      *(undefined2 *)(*(int *)(DAT_00793440 + 8 + local_18 * 4) + 400) = uVar3;
      *(int *)(*(int *)(DAT_00793440 + 8 + local_18 * 4) + 0x1a0) = local_18;
      (**(code **)(**(int **)(DAT_00793440 + 8 + local_18 * 4) + 0x70))();
    }
  }
  FUN_00569270();
  local_40 = operator_new(0x20);
  local_8 = 0;
  if (local_40 == (undefined4 *)0x0) {
    local_40 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_40 = VPMultiDealScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_40);
LAB_0056a35b:
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

