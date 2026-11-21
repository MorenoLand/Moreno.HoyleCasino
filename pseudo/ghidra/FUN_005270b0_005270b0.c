// FUN_005270b0  005270b0

void __fastcall FUN_005270b0(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_00524500();
  }
  else if (param_1[5] == 500) {
    FUN_00527e50();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\rouletteroom.cpp",0x213);
  }
  return;
}

