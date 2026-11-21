// FUN_0063db60  0063db60

void __thiscall
FUN_0063db60(int *param_1,undefined4 param_2,char param_3,char param_4,char *param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  
  if (*(int *)(*(int *)(param_1[0x6f] + param_1[0x71] * 4) + 0x20) != 0) {
    FUN_0063d570(*(undefined4 *)(*(int *)(param_1[0x6f] + param_1[0x71] * 4) + 0x20),4);
    puVar1 = *(undefined4 **)(*(int *)(param_1[0x6f] + param_1[0x71] * 4) + 0x20);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(*(int *)(param_1[0x6f] + param_1[0x71] * 4) + 0x20) = 0;
  }
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 0) {
    FUN_0063d7c0(param_1[0x71]);
  }
  FUN_0063ab10(param_2);
  piVar3 = (int *)FUN_0063aac0();
  *piVar3 = (int)param_3;
  iVar4 = FUN_0063aac0();
  *(int *)(iVar4 + 0x54) = (int)param_4;
  pcVar6 = param_5;
  iVar4 = FUN_0063aac0();
  strcpy((char *)(iVar4 + 0x38),pcVar6);
  FUN_0063b0a0();
  (**(code **)(*param_1 + 0x48))(param_1[0x71]);
  for (local_8 = 0; iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_8 < iVar4;
      local_8 = local_8 + 1) {
    if (local_8 != param_1[0x71]) {
      piVar3 = (int *)FUN_0063aac0();
      if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        iVar4 = FUN_0063aac0();
        iVar5 = FUN_0063aac0();
        iVar4 = strcmp((char *)(iVar5 + 4),(char *)(iVar4 + 4));
        if (iVar4 == 0) {
          piVar3 = (int *)FUN_0063aac0();
          *piVar3 = (int)param_3;
          iVar4 = FUN_0063aac0();
          *(int *)(iVar4 + 0x54) = (int)param_4;
          pcVar6 = param_5;
          iVar4 = FUN_0063aac0();
          strcpy((char *)(iVar4 + 0x38),pcVar6);
        }
      }
    }
  }
  param_1[0x71] = -1;
  FUN_0063c620();
  return;
}

