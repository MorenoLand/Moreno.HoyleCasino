// FUN_004375b0  004375b0

int __fastcall FUN_004375b0(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) ||
     (((iVar1 == 9 || (iVar1 == 10)) || ((iVar1 == 0xb || (iVar1 == 0xc)))))) {
    iVar1 = CONCAT31(uVar2,1);
  }
  else {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}

