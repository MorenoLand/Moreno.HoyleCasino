// FUN_00677d10  00677d10

void FUN_00677d10(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_10;
  
  if (0x301140 < param_1) {
    switch(param_1) {
    case 0x301144:
    case 0x301148:
    case 0x30114c:
    case 0x301150:
      goto LAB_00677da8;
    default:
      return;
    }
  }
  if (param_1 != 0x301140) {
    if (param_1 < 3) {
      if (param_1 == 2) {
        FUN_00677ec0();
        return;
      }
      if (param_1 == 0) {
        FUN_00677ec0();
      }
      else if (param_1 != 1) {
        return;
      }
      FUN_0064f920();
      return;
    }
    if (param_1 != 0x30113c) {
      return;
    }
  }
LAB_00677da8:
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x1c8))();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = param_1;
  FUN_005fb2b0(1);
  FUN_005eaf00(iVar2);
  cVar1 = (**(code **)(*DAT_0162ee84 + 0x1bc))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_005fb2b0(1);
  iVar2 = FUN_005eb240();
  if (iVar2 < 0x34) {
    FUN_005fb2b0(1);
    local_10 = FUN_005eb240();
  }
  else {
    local_10 = 0x33;
  }
  piVar3 = (int *)FUN_005fb2b0(1);
  (**(code **)(*piVar3 + 0xb0))(local_10);
  return;
}

