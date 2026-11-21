// FUN_00625d40  00625d40

void __fastcall FUN_00625d40(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
  FUN_006001b0();
  if (*(int *)(param_1 + 0x210) != 0) {
    if (*(char *)(param_1 + 0x21c) == '\0') {
      for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
        piVar2 = (int *)FUN_0060ca40(local_8);
        (**(code **)(*piVar2 + 0x70))();
      }
    }
    else {
      for (local_8 = 0; iVar1 = FUN_0060c9a0(), local_8 < iVar1; local_8 = local_8 + 1) {
        uVar3 = 1;
        FUN_0060ca40(local_8);
        FUN_005f5620(uVar3);
      }
    }
  }
  return;
}

