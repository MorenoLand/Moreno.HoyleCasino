// FUN_005199c0  005199c0

void __thiscall FUN_005199c0(int param_1,int *param_2,char param_3)

{
  param_2[1] = param_1;
  (**(code **)(*param_2 + 0x6c))(10);
  (**(code **)(*param_2 + 0x40))();
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x70))();
  }
  else {
    (**(code **)(*param_2 + 0x74))();
  }
  return;
}

