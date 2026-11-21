// FUN_005b3ce0  005b3ce0

void __thiscall FUN_005b3ce0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005dcb00(param_2,param_1);
  *(undefined1 *)(iVar2 + 0x4a2) = 1;
  cVar1 = FUN_005b6660(param_2);
  if (cVar1 != '\0') {
    FUN_005b67d0(param_2,1,1,2,1);
  }
  cVar1 = FUN_005b6040(param_2);
  if (cVar1 == '\0') {
    FUN_005b67d0(param_2,0,0,1,1);
    FUN_005b71a0(param_2,0,0);
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4b0) = 1;
  }
  else {
    FUN_005b67d0(param_2,0,2,1,1);
    FUN_005b71a0(param_2,0,2);
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4b0) = 0;
  }
  return;
}

