// FUN_00615180  00615180

void __thiscall FUN_00615180(int *param_1,int param_2,char param_3)

{
  char cVar1;
  
  if ((param_1[0x1a] != param_2) && (param_1[0x1a] = param_2, -1 < param_1[0x1a])) {
    if (param_3 != '\0') {
      cVar1 = FUN_006152a0(param_1[0x1a]);
      if (cVar1 == '\0') {
        FUN_00615540(param_1[0x1a]);
      }
      cVar1 = FUN_006152a0(param_2);
      if (cVar1 == '\0') {
        FUN_006152f0(param_1[0x1a]);
        FUN_00615740();
      }
    }
    (**(code **)(*param_1 + 0xd0))();
    (**(code **)(*param_1 + 200))();
  }
  return;
}

