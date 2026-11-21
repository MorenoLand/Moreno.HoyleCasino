// FUN_0059cc90  0059cc90

void __thiscall FUN_0059cc90(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 4) != '\0') {
    return;
  }
  cVar1 = FUN_005f88f0();
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(param_2 + 0x18) == 4) {
    iVar2 = tolower((int)*(char *)(param_2 + 0x14));
    if (iVar2 == 0x74) {
      FUN_005db240();
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else {
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar2 == 0x62) {
        FUN_005f2a60(0x315104,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(1);
          *(undefined1 *)(param_2 + 4) = 1;
          goto LAB_0059cdf1;
        }
      }
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if ((iVar2 == 99) || (iVar2 = tolower((int)*(char *)(param_2 + 0x14)), iVar2 == 0x70)) {
        FUN_005f2a60(0x315103,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(0);
          *(undefined1 *)(param_2 + 4) = 1;
          goto LAB_0059cdf1;
        }
      }
      iVar2 = tolower((int)*(char *)(param_2 + 0x14));
      if (iVar2 == 0x61) {
        FUN_005f2a60(0x315105,0);
        cVar1 = FUN_006026d0();
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x18))(2);
          *(undefined1 *)(param_2 + 4) = 1;
        }
      }
    }
  }
LAB_0059cdf1:
  FUN_005f72f0(param_2);
  return;
}

