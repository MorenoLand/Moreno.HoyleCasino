// FUN_005202d0  005202d0

void __thiscall FUN_005202d0(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 == '\0') {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      piVar3 = (int *)FUN_005fb300(local_8);
      cVar1 = (**(code **)(*piVar3 + 0x84))(param_2);
      if (cVar1 != '\0') {
        return;
      }
    }
    FUN_0051f6e0();
  }
  else {
    uVar2 = FUN_005f5400();
    FUN_0051f790(uVar2);
  }
  FUN_005f4d00(param_2);
  return;
}

