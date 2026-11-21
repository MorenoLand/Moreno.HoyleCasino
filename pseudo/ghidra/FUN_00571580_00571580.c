// FUN_00571580  00571580

int __fastcall FUN_00571580(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005f3e50();
  iVar1 = abs(iVar1 - *(int *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x24) < iVar1) {
    uVar2 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(int *)(*(int *)(param_1 + 4) + 0x178) = *(int *)(*(int *)(param_1 + 4) + 0x178) + -1;
    if (*(int *)(*(int *)(param_1 + 4) + 0x178) < *(int *)(param_1 + 0x20)) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x178) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  iVar1 = FUN_005f3e50();
  iVar1 = abs(iVar1 - *(int *)(param_1 + 0x10));
  if (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x178)) {
    iVar1 = FUN_005eb220();
  }
  else {
    uVar2 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    iVar1 = FUN_005eb220();
    iVar1 = iVar1 + *(int *)(param_1 + 0xc);
  }
  return iVar1;
}

