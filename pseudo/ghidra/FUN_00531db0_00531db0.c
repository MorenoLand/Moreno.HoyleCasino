// FUN_00531db0  00531db0

bool __fastcall FUN_00531db0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_005f3e50();
  iVar2 = abs(iVar2 - *(int *)(param_1 + 0x19c));
  bVar1 = *(int *)(param_1 + 0x178) <= iVar2;
  if (bVar1) {
    uVar3 = FUN_005f3e50();
    *(undefined4 *)(param_1 + 0x19c) = uVar3;
  }
  return bVar1;
}

