// FUN_00425260  00425260

void __fastcall FUN_00425260(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_00422600();
  }
  else if (param_1[5] == 500) {
    FUN_00425fb0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\caribbeanstudroom.cpp",0x1f6);
  }
  return;
}

