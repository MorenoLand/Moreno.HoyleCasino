// FUN_00407e60  00407e60

void __thiscall FUN_00407e60(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_14;
  
  for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
    cVar2 = FUN_005cb7d0(param_2,0);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(param_1 + 4 + (param_2 * 3 + local_14) * 4) + 0xb4))();
      if (cVar2 != '\0') {
        puVar1 = (undefined4 *)
                 (*(int *)(param_1 + 4 + (param_2 * 3 + local_14) * 4) + 0x48 + param_2 * 0x20);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        FUN_005dcb00(param_2,uVar3,uVar4);
        FUN_005d5cf0(uVar3,uVar4);
      }
      FUN_005cb9b0();
    }
  }
  return;
}

