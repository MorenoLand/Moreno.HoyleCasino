// FUN_00432950  00432950

void __thiscall FUN_00432950(undefined4 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(DAT_007906d4 + 0xad8);
  if (iVar1 == -1) {
    FUN_005e9f20("p != -1","..\\Casino\\crapsroom.cpp",0x11d,param_1);
  }
  FUN_0042a270();
  if (*(int *)(DAT_007906d4 + 0xac4) == 0) {
    FUN_0042a2b0(0);
    FUN_0042a2b0(2);
    return;
  }
  if (param_2 != '\0') {
    cVar2 = FUN_004369a0(iVar1,4);
    if (cVar2 != '\0') goto LAB_00432a4a;
    cVar2 = FUN_00435d40(iVar1);
    if (cVar2 != '\0') goto LAB_00432a4a;
    cVar2 = FUN_004369a0(iVar1,5);
    if (cVar2 != '\0') goto LAB_00432a4a;
    cVar2 = FUN_00435de0(iVar1);
    if (cVar2 != '\0') goto LAB_00432a4a;
  }
  FUN_0042a2b0(4);
  FUN_0042a2b0(5);
LAB_00432a4a:
  FUN_00435ee0(iVar1,1,param_2 == '\0');
  FUN_00435fd0(iVar1,1,param_2 == '\0');
  cVar2 = FUN_004369a0(iVar1,0);
  if ((cVar2 == '\0') && (cVar2 = FUN_004369a0(iVar1,2), cVar2 == '\0')) {
    FUN_0042a2b0(0);
    FUN_0042a2b0(2);
    return;
  }
  if ((param_2 != '\0') &&
     ((cVar2 = FUN_004369a0(iVar1,0), cVar2 == '\0' ||
      (cVar2 = FUN_004369a0(iVar1,1), cVar2 != '\0')))) {
    if (param_2 != '\0') {
      cVar2 = FUN_004369a0(iVar1,2);
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = FUN_004369a0(iVar1,3);
      if (cVar2 != '\0') {
        return;
      }
    }
    FUN_0042a310(3);
    return;
  }
  FUN_0042a310(1);
  return;
}

