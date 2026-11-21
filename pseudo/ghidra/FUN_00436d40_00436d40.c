// FUN_00436d40  00436d40

uint __fastcall FUN_00436d40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(*(int *)(param_1 + 0xac4) != 0);
  if ((uVar2 != 0) || (uVar2 = FUN_00434410(), (uVar2 & 0xff) != 0)) {
    return uVar2 & 0xffffff00;
  }
  cVar1 = FUN_00436a00(0x19);
  if (((cVar1 != '\0') || (cVar1 = FUN_00436a00(0x25), cVar1 != '\0')) &&
     ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4 ||
      (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7)))) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x1a);
  if (((cVar1 != '\0') || (cVar1 = FUN_00436a00(0x26), cVar1 != '\0')) &&
     ((iVar3 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), iVar3 == 5 ||
      (iVar3 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), iVar3 == 7)))) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  cVar1 = FUN_00436a00(0x1b);
  if (((cVar1 != '\0') || (cVar1 = FUN_00436a00(0x27), cVar1 != '\0')) &&
     ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6 ||
      (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7)))) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x1c);
  if (((cVar1 != '\0') || (cVar1 = FUN_00436a00(0x28), cVar1 != '\0')) &&
     ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8 ||
      (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7)))) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x1d);
  if (((cVar1 != '\0') || (cVar1 = FUN_00436a00(0x29), cVar1 != '\0')) &&
     ((iVar3 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), iVar3 == 9 ||
      (iVar3 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0), iVar3 == 7)))) {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  cVar1 = FUN_00436a00(0x1e);
  if (((cVar1 != '\0') || (uVar2 = FUN_00436a00(0x2a), (uVar2 & 0xff) != 0)) &&
     ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10 ||
      (uVar2 = 0, *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7)))) {
    return 1;
  }
  return uVar2 & 0xffffff00;
}

