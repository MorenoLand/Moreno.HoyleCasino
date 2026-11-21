// FUN_00600540  00600540

bool __fastcall FUN_00600540(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_005f3e50();
  iVar2 = abs(iVar2 - *(int *)(param_1 + 0x10));
  bVar1 = *(int *)(*(int *)(param_1 + 4) + 0x178) <= iVar2;
  if (bVar1) {
    uVar3 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x10) = uVar3;
  }
  return bVar1;
}

