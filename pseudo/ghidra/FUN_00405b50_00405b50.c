// FUN_00405b50  00405b50

void __fastcall FUN_00405b50(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = FUN_00407de0(*(undefined4 *)(DAT_007902f0 + 0x10dc));
  if (cVar1 == '\0') {
    iVar2 = FUN_00407bb0();
    *(undefined1 *)(iVar2 + 0x4a1) = 1;
  }
  else {
    iVar2 = FUN_00407bb0();
    *(undefined1 *)(iVar2 + 0x4a0) = 1;
  }
  piVar3 = (int *)FUN_00407bb0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_005db890();
  (**(code **)(**(int **)(param_1 + 4) + 8))(1,0);
  return;
}

