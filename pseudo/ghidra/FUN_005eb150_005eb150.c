// FUN_005eb150  005eb150

void __thiscall FUN_005eb150(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x57] != param_2) {
    if (param_1[10] == 0) {
      param_1[0x57] = param_2;
    }
    else {
      iVar1 = FUN_005eb240();
      if (iVar1 < param_2) {
        param_2 = FUN_005eb240();
      }
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (param_1[0x57] != param_2) {
        (**(code **)(*param_1 + 0xac))();
        param_1[0x57] = param_2;
        uVar2 = (**(code **)(*param_1 + 0x54))();
        uVar2 = (**(code **)(*param_1 + 0x4c))(uVar2);
        (**(code **)(*param_1 + 0x44))(uVar2);
        (**(code **)(*param_1 + 0xac))();
      }
    }
  }
  return;
}

