// FUN_00424920  00424920

void FUN_00424920(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 uVar5;
  int local_8;
  
  cVar2 = FUN_004272e0(param_1);
  uVar5 = extraout_var;
  if (cVar2 != '\0') {
    FUN_0041fac0(param_1);
    FUN_00426910(param_1);
  }
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    cVar2 = (**(code **)(**(int **)(DAT_00790358 + 8 + (local_8 + param_1 * 2) * 4) + 0xb4))(uVar5);
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)
               (*(int *)(DAT_00790358 + 8 + (local_8 + param_1 * 2) * 4) + 0x48 + param_1 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      FUN_005dcb00(param_1,uVar3,uVar4);
      FUN_005d5cf0(uVar3,uVar4);
    }
    FUN_005cb9b0();
  }
  return;
}

