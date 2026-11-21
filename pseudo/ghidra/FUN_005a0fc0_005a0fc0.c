// FUN_005a0fc0  005a0fc0

void __thiscall FUN_005a0fc0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    cVar2 = (**(code **)(**(int **)(DAT_007935d0 + 8 + (param_2 * 3 + local_8) * 4) + 0xb4))
                      (param_1);
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)
               (*(int *)(DAT_007935d0 + 8 + (param_2 * 3 + local_8) * 4) + 0x48 + param_2 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      FUN_005dcb00(param_2,uVar3,uVar4);
      FUN_005d5cf0(uVar3,uVar4);
    }
    FUN_005cb9b0();
  }
  return;
}

