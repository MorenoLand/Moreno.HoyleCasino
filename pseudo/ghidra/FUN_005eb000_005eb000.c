// FUN_005eb000  005eb000

void __thiscall FUN_005eb000(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x59] != param_2) {
    if (param_1[10] != 0) {
      iVar1 = FUN_005eb130();
      if (iVar1 < param_2) {
        param_2 = FUN_005eb130();
      }
      if (param_2 < 0) {
        param_2 = 0;
      }
    }
    if (param_1[0x59] == param_2) {
      param_1[0x59] = param_2;
    }
    else {
      (**(code **)(*param_1 + 0xac))();
      param_1[0x59] = param_2;
      if (param_1[0x5d] != 0) {
        iVar1 = FUN_006163e0(param_1[0x59]);
        param_1[0x58] = iVar1 + -1;
      }
      (**(code **)(*param_1 + 0xb0))(param_1[0x57]);
      uVar2 = (**(code **)(*param_1 + 0x54))();
      uVar2 = (**(code **)(*param_1 + 0x4c))(uVar2);
      (**(code **)(*param_1 + 0x44))(uVar2);
      (**(code **)(*param_1 + 0xac))();
    }
  }
  return;
}

