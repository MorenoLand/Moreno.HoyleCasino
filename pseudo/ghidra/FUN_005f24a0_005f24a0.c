// FUN_005f24a0  005f24a0

void FUN_005f24a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_8;
  
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0060ca40(0);
    for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
      puVar3 = (undefined4 *)FUN_0060ca40(local_8);
      if (puVar2 == puVar3) {
        FUN_0060c890(puVar2);
      }
    }
    FUN_0060c890(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}

