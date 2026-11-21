// FUN_0053fba0  0053fba0

void __fastcall FUN_0053fba0(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_0053d3c0();
  }
  else if (param_1[5] == 500) {
    FUN_005408b0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\threecardpokerroom.cpp",0x1b5);
  }
  return;
}

