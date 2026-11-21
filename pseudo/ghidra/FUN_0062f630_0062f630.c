// FUN_0062f630  0062f630

undefined4 __thiscall FUN_0062f630(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_1[8] != 0) {
      FUN_005e9f20("!m_Start","..\\scilib\\platform\\StringManagerBase.cpp",0x18c);
    }
    iVar2 = (**(code **)(*param_1 + 0xc))(param_2);
    param_1[8] = iVar2;
    if (param_1[8] == 0) {
      (**(code **)(*param_1 + 8))(param_2);
      uVar1 = 0;
    }
    else {
      param_1[9] = param_1[8];
      iVar2 = (**(code **)(*param_1 + 0x10))(param_2);
      param_1[10] = iVar2;
      (**(code **)(*param_1 + 0x44))();
      (**(code **)(*param_1 + 8))(param_2);
      (**(code **)(*param_1 + 0x48))();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}

