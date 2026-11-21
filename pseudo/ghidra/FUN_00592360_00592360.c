// FUN_00592360  00592360

void FUN_00592360(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined4 local_28;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7112;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = CONCAT31((int3)((uint)ExceptionList >> 8),param_1 == 0);
  uVar2 = FUN_00597d30(uVar3,DAT_00781870 ^ (uint)&stack0xfffffffc);
  cVar1 = FUN_00598750(uVar2,uVar3);
  if (cVar1 == '\0') {
    if (param_1 == 1) {
      uVar3 = FUN_00597d30();
      puVar6 = local_18;
      FUN_00597d30(puVar6,uVar3);
      piVar4 = (int *)FUN_005cb880(puVar6,uVar3);
      if (*piVar4 == 0) {
        uVar3 = FUN_00630f40("SID_CASINO_BETTING",0);
        uVar3 = FUN_00630f40("SID_FOURCARDPOKER_INVALID_PLAY_BET",uVar3);
        FUN_0062ff10(uVar3);
        ExceptionList = local_10;
        return;
      }
    }
    FUN_00590fe0();
    pvVar5 = operator_new(0x24);
    local_8 = 0;
    if (pvVar5 == (void *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = CPrintDialog(param_1);
    }
    local_8 = 0xffffffff;
    FUN_005fc420(local_28);
  }
  ExceptionList = local_10;
  return;
}

