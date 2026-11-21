// FUN_0045eb00  0045eb00

void __fastcall FUN_0045eb00(int *param_1)

{
  if (param_1[5] == 1) {
    FUN_0045b300();
  }
  else if (param_1[5] == 500) {
    FUN_0045ffe0();
    (**(code **)(*param_1 + 4))(1);
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    FUN_005e9f20("false","..\\Casino\\paigowroom.cpp",0x23c);
  }
  return;
}

