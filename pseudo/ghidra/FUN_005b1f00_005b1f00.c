// FUN_005b1f00  005b1f00

void __fastcall FUN_005b1f00(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_005af1b0();
  }
  else if (param_1[5] == 500) {
    FUN_005b6a60();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\royalmatchroom.cpp",0x2ed);
  }
  return;
}

