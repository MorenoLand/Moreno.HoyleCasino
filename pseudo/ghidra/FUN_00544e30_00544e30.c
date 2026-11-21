// FUN_00544e30  00544e30

void __fastcall FUN_00544e30(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (*(int *)(*(int *)(DAT_00793400 + 4) + 4) == 0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x74))();
    for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
      uVar1 = FUN_00544980(local_8);
      *(undefined1 *)(param_1 + local_8 + 0xc0) = uVar1;
      FUN_005448f0(local_8);
    }
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      uVar2 = FUN_005fb300(local_8);
      uVar1 = FUN_006026d0(param_1,uVar2);
      *(undefined1 *)(param_1 + local_8 + 0xc9) = uVar1;
      FUN_00544b30(local_8);
    }
    FUN_00544860(8);
  }
  return;
}

