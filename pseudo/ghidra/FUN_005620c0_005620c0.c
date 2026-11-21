// FUN_005620c0  005620c0

void __thiscall FUN_005620c0(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_005eaf00(0x312257);
    FUN_005664c0(0);
    FUN_00566310();
  }
  else {
    FUN_005eaf00(0x31225a);
    FUN_005664c0(param_2);
    FUN_00566210();
  }
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x74))();
  FUN_00562010(0);
  return;
}

