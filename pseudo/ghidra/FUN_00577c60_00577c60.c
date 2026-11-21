// FUN_00577c60  00577c60

uint __fastcall FUN_00577c60(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_005f3e50();
  iVar1 = abs(iVar1 - *(int *)(param_1 + 0x10));
  if (iVar1 < *(int *)(*(int *)(param_1 + 4) + 0x178)) {
    uVar2 = FUN_005eb610();
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar3 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    uVar2 = FUN_005eb610();
    uVar2 = (uVar2 & 0xff) + *(int *)(param_1 + 0xc) * 0x10;
  }
  return uVar2;
}

