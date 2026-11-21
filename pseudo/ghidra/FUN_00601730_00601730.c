// FUN_00601730  00601730

void __fastcall FUN_00601730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005f3e50();
  iVar1 = abs(iVar1 - *(int *)(param_1 + 0x10));
  if (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x178)) {
    FUN_005eb220();
  }
  else {
    uVar2 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    FUN_0062fbf0(*(int *)(param_1 + 0x14) + 1);
  }
  return;
}

