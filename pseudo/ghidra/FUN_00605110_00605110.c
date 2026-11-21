// FUN_00605110  00605110

void __thiscall FUN_00605110(int *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006051d0();
  if (param_2 == iVar1) {
    if (param_3 != '\0') {
      FUN_00605400();
    }
  }
  else {
    if (param_2 < param_1[0x14]) {
      param_1[0x16] = param_1[0x14];
    }
    else if (param_1[0x15] < param_2) {
      param_1[0x16] = param_1[0x15];
    }
    else {
      param_1[0x16] = param_2;
    }
    if (param_3 != '\0') {
      FUN_00605400();
    }
    if (param_1[1] != 0) {
      uVar2 = FUN_005f5400();
      (**(code **)(*(int *)param_1[1] + 0x30))(uVar2);
    }
    (**(code **)(*param_1 + 0xb8))();
  }
  return;
}

