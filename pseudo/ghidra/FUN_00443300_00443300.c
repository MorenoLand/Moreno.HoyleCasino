// FUN_00443300  00443300

void __fastcall FUN_00443300(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_8;
  
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x70))();
  (**(code **)(**(int **)(param_1 + 0xac) + 0x70))();
  iVar1 = FUN_005fb300(2);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005fb300(2);
    (**(code **)(*piVar2 + 0x70))();
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    (**(code **)(**(int **)(param_1 + 4 + local_8 * 4) + 0x70))();
    (**(code **)(**(int **)(param_1 + 0xb4 + local_8 * 4) + 0x70))();
  }
  return;
}

