// FUN_00562e40  00562e40

bool __fastcall FUN_00562e40(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(DAT_007947e0 + 0x4f14);
  if (iVar1 == 0) {
    bVar2 = 4 < *(int *)(param_1 + 0x14);
  }
  else if (iVar1 == 5) {
    bVar2 = 4 < *(int *)(param_1 + 0x14);
  }
  else if (iVar1 == 10) {
    bVar2 = 5 < *(int *)(param_1 + 0x14);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

