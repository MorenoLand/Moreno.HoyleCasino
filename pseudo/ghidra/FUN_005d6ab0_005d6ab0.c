// FUN_005d6ab0  005d6ab0

int __fastcall FUN_005d6ab0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005d6a50();
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    iVar2 = (int)*(short *)(iVar2 + 2);
  }
  else {
    cVar1 = FUN_005d6b40();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*DAT_007947e4 + 0x2c8))(*(undefined4 *)(param_1 + 4));
      if (cVar1 == '\0') {
        iVar2 = (int)*(short *)(iVar2 + 8);
      }
      else {
        iVar2 = (int)*(short *)(iVar2 + 6);
      }
    }
    else {
      iVar2 = (int)*(short *)(iVar2 + 4);
    }
  }
  return iVar2;
}

