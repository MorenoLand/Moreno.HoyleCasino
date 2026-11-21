// FUN_00558ca0  00558ca0

void __fastcall FUN_00558ca0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined4 *local_3c;
  short asStack_28 [6];
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a57a4;
  local_10 = ExceptionList;
  local_1c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005f2b20(0x30f342,1);
  FUN_005f2b20(0x30f343,1);
  FUN_005f2b20(0x30f344,1);
  FUN_005f2b20(0x30f345,1);
  FUN_005f2b20(0x30f346,1);
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    FUN_00557310();
    FUN_00557dc0();
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(undefined2 *)(param_1 + 0x22 + local_14 * 2) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    cVar1 = FUN_005df7b0(0xffffffff);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x2e) != '\0')) {
      uVar2 = FUN_00558fa0();
      *(undefined1 *)(param_1 + 0x2e) = uVar2;
      if (*(char *)(param_1 + 0x2e) == '\0') {
        FUN_00557dc0();
        FUN_00554950();
        if (DAT_00793578 != 0) {
          FUN_0057c140();
        }
        goto LAB_00558f7b;
      }
    }
    FUN_005f2ba0(0x1391);
  }
  FUN_005551a0();
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    asStack_28[local_14] = *(short *)(param_1 + 0x22 + local_14 * 2);
  }
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    cVar1 = FUN_005573a0(asStack_28[local_14]);
    if (cVar1 == '\0') {
      if (asStack_28[local_14] == 0) {
        local_18 = local_14;
      }
      else {
        local_18 = FUN_00555020(asStack_28[local_14]);
      }
      iVar4 = FUN_00557e40();
      if (iVar4 == 5) {
        FUN_00557fb0(CONCAT22(extraout_var_00,asStack_28[local_14]));
      }
      uVar3 = FUN_006436c0();
      FUN_00557e90(CONCAT22(extraout_var,uVar3));
      *(undefined2 *)(*(int *)(DAT_00793424 + 4 + local_18 * 4) + 400) = uVar3;
      *(int *)(*(int *)(DAT_00793424 + 4 + local_18 * 4) + 0x1a0) = local_18;
      (**(code **)(**(int **)(DAT_00793424 + 4 + local_18 * 4) + 0x70))();
    }
  }
  FUN_00557dc0();
  local_3c = operator_new(0x20);
  local_8 = 0;
  if (local_3c == (undefined4 *)0x0) {
    local_3c = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_3c = VideoPokerDealScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_3c);
LAB_00558f7b:
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

