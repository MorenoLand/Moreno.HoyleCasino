// FUN_00417620  00417620

void __fastcall FUN_00417620(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_004123c0();
  }
  else if (param_1[5] == 500) {
    FUN_004189a0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\blackjackroom.cpp",0x316);
  }
  return;
}

