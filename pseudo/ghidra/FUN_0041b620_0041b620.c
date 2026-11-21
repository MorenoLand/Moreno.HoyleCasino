// FUN_0041b620  0041b620

void __thiscall FUN_0041b620(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005dcb00(param_2);
  *(undefined1 *)(iVar2 + 0x4a2) = 1;
  if (*(char *)(param_1 + 0x11b + param_2 * 0x118) != '\0') {
    FUN_0041bba0(param_2,1,1,2,1);
  }
  cVar1 = FUN_0041a830(param_2);
  if (cVar1 == '\0') {
    FUN_0041bba0(param_2,0,0,1,1);
    FUN_004191f0(param_2,0,0);
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4b0) = 1;
  }
  else {
    FUN_0041bba0(param_2,0,2,1,1);
    FUN_004191f0(param_2,0,2);
    iVar2 = FUN_005dcb00(param_2);
    *(undefined1 *)(iVar2 + 0x4b0) = 0;
  }
  return;
}

