// FUN_00605e20  00605e20

void __thiscall FUN_00605e20(int *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  
  if (((char)param_1[0x7d] == '\0') || (param_1[0x7c] != param_2)) {
    param_1[0x7c] = param_2;
    if ((char)param_1[0x7d] != '\0') {
      FUN_005f2a60(param_2,0);
      uVar1 = FUN_00602b70();
      (**(code **)(*param_1 + 0xe0))(uVar1);
    }
    FUN_005f2840(param_1[0x7b]);
    if (param_3 != '\0') {
      (**(code **)(*param_1 + 0xf4))(param_1[0x7c]);
    }
  }
  else {
    FUN_005f2840(param_1[0x7b]);
  }
  return;
}

