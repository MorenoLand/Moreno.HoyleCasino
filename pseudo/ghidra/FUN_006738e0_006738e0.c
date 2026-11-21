// FUN_006738e0  006738e0

void __fastcall FUN_006738e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    piVar1 = (int *)FUN_005fb720(0);
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (iVar2 == 0) {
      uVar3 = FUN_00630f40("SID_GENERIC_RESTORE",0);
      uVar3 = FUN_00630f40("SID_SHELL_NOSAVEDGAMES",uVar3);
      FUN_0062ff10(uVar3);
      FUN_0064f030();
      return;
    }
  }
  FUN_005f85d0();
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x1bc) + 0x74))();
  }
  return;
}

