// FUN_00465000  00465000

undefined4 __fastcall FUN_00465000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  int local_c;
  int local_8;
  
  if (*(int *)param_1[2] == -1) {
    for (local_8 = 0; local_8 < param_1[1]; local_8 = local_8 + 1) {
      *(int *)(param_1[2] + local_8 * 4) = local_8;
    }
    uVar2 = 1;
  }
  else {
    local_14 = param_1[1] + -1;
    local_c = *param_1;
    do {
      if (*(int *)(param_1[2] + local_14 * 4) + 1 != local_c) {
        iVar1 = *(int *)(param_1[2] + local_14 * 4);
        for (iVar3 = local_14; iVar3 < param_1[1]; iVar3 = iVar3 + 1) {
          *(int *)(param_1[2] + iVar3 * 4) = (iVar3 - local_14) + iVar1 + 1;
          if (*param_1 <= *(int *)(param_1[2] + iVar3 * 4)) {
            FUN_005e9f20("plIndices[lIndex]<lObjectsAvailable","..\\Casino\\PokerCombinations.cpp",
                         0x38);
          }
        }
        return 1;
      }
      local_c = *(int *)(param_1[2] + local_14 * 4);
      local_14 = local_14 + -1;
    } while (-1 < local_14);
    uVar2 = 0;
  }
  return uVar2;
}

