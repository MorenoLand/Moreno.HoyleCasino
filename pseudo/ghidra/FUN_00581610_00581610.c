// FUN_00581610  00581610

void __thiscall FUN_00581610(int *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 4)) {
    if (param_1[param_2 + 0x101a] == 0) {
      FUN_005eaf00(0x30dfe9);
    }
    else {
      FUN_005eaf00(0x30dfe8);
    }
    (**(code **)(*param_1 + 0x74))();
    param_1[0x101f] = param_2;
  }
  return;
}

