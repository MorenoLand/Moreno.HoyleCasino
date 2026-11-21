// FUN_005fb930  005fb930

void FUN_005fb930(int *param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0060c9a0();
    if (iVar1 <= local_8) {
      return;
    }
    piVar2 = (int *)FUN_0060ca40(local_8);
    if ((piVar2 == param_1) || ((param_2 != -1 && (iVar1 = FUN_005f5400(), iVar1 == param_2))))
    break;
    local_8 = local_8 + 1;
  }
  FUN_0060c890(piVar2);
  if (param_4 == '\0') {
    return;
  }
  (**(code **)(*piVar2 + 0x70))();
  if (piVar2 == (int *)0x0) {
    return;
  }
  (**(code **)*piVar2)(1);
  return;
}

