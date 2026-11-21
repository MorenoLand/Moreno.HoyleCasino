// FUN_00641f80  00641f80

void FUN_00641f80(int param_1,int param_2,undefined2 param_3)

{
  int local_8;
  
  for (local_8 = 0; (local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0));
      local_8 = local_8 + 1) {
  }
  if (local_8 == param_2) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x148);
  }
  else {
    *(undefined2 *)(param_1 + local_8 * 2) = param_3;
  }
  return;
}

