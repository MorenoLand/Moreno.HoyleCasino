// FUN_00437cd0  00437cd0

uint __fastcall FUN_00437cd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00434a90(0x13);
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4)) {
    return 1;
  }
  iVar1 = FUN_00434a90(0x14);
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5)) {
    return 1;
  }
  iVar1 = FUN_00434a90(0x15);
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) {
    return 1;
  }
  iVar1 = FUN_00434a90(0x16);
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8)) {
    return 1;
  }
  iVar1 = FUN_00434a90(0x17);
  if ((iVar1 == 1) && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9)) {
    return 1;
  }
  uVar2 = FUN_00434a90(0x18);
  if ((uVar2 == 1) && (uVar2 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), uVar2 == 10))
  {
    return 1;
  }
  return uVar2 & 0xffffff00;
}

