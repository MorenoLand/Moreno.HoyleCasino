// FUN_00575b20  00575b20

void __fastcall FUN_00575b20(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_10 [8];
  short local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 0x44 + local_8 * 4) + 0xcc))();
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0xd0))();
  }
  puVar3 = local_10;
  FUN_005dcb00(0,puVar3);
  puVar1 = (undefined4 *)FUN_005d5a90(puVar3);
  iVar2 = FUN_00574ed0(*puVar1,puVar1[1]);
  if (((iVar2 == 0) && (*(int *)(param_1 + 0x70) == 0)) && (*(int *)(param_1 + 0x74) == 0)) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0xd0))();
    (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))();
    (**(code **)(**(int **)(param_1 + 0x4c) + 0xd0))();
  }
  return;
}

