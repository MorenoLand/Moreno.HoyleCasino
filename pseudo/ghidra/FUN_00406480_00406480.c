// FUN_00406480  00406480

void __fastcall FUN_00406480(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_00404200();
  }
  else if (param_1[5] == 500) {
    FUN_004079b0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\baccaratroom.cpp",0x1e3);
  }
  return;
}

