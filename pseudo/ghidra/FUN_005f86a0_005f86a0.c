// FUN_005f86a0  005f86a0

undefined4 __thiscall FUN_005f86a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_c;
  
  cVar1 = FUN_005f8910();
  iVar2 = 0;
  if ((((cVar1 == '\0') || (iVar2 = *(int *)(param_2 + 8), iVar2 < *(int *)(param_1 + 0x108))) ||
      (iVar2 = *(int *)(param_2 + 8), *(int *)(param_1 + 0x110) < iVar2)) ||
     ((iVar2 = *(int *)(param_2 + 0xc), iVar2 < *(int *)(param_1 + 0x104) ||
      (iVar2 = *(int *)(param_2 + 0xc), *(int *)(param_1 + 0x10c) < iVar2)))) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),local_c);
}

