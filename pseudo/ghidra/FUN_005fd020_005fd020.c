// FUN_005fd020  005fd020

void __fastcall FUN_005fd020(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = FUN_005f5400();
  if (iVar3 != -2) {
    FUN_00602f60();
    iVar3 = *(int *)(param_1 + 0x194);
    if (iVar3 == 0) {
      cVar2 = FUN_006026d0();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 500) != 0) {
          (**(code **)(**(int **)(param_1 + 500) + 0xb0))(0);
        }
        if (*(int *)(param_1 + 0x1f8) != 0) {
          (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb0))(0);
        }
        if (*(int *)(param_1 + 0x200) != 0) {
          uVar1 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x60);
          FUN_005ecd00(uVar1,0xffffffff,
                       CONCAT13((char)((uint)uVar1 >> 0x18),CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
        }
      }
      FUN_005f5df0(0);
    }
    else if (iVar3 == 2) {
      if (*(int *)(param_1 + 0x200) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x60);
        FUN_005ecd00(uVar1,0xffffffff,
                     CONCAT13((char)((uint)uVar1 >> 0x18),CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      }
    }
    else if (((iVar3 == 3) && (iVar3 = FUN_005f5400(), iVar3 != -2)) &&
            (cVar2 = FUN_006026d0(), cVar2 != '\0')) {
      if (*(int *)(param_1 + 500) != 0) {
        (**(code **)(**(int **)(param_1 + 500) + 0xb0))(1);
      }
      if (*(int *)(param_1 + 0x1f8) != 0) {
        (**(code **)(**(int **)(param_1 + 0x1f8) + 0xb0))(1);
      }
      if (*(int *)(param_1 + 0x200) != 0) {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x60);
        FUN_005ecd00(uVar1,0xffffffff,
                     CONCAT13((char)((uint)uVar1 >> 0x18),CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
      }
    }
  }
  return;
}

