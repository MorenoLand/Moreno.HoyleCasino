// FUN_005a11a0  005a11a0

void __fastcall FUN_005a11a0(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_0059fa00();
  }
  else if (param_1[5] == 500) {
    FUN_005a3880();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\bigraiseroom.cpp",0x199);
  }
  return;
}

