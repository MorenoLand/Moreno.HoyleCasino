// FUN_005da8e0  005da8e0

int FUN_005da8e0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005da8a0();
  iVar2 = FUN_005da8c0();
  if (iVar1 == iVar2 || iVar1 - iVar2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005da8a0();
    iVar1 = FUN_005da8c0();
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

