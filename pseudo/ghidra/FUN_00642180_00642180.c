// FUN_00642180  00642180

void FUN_00642180(int param_1,int param_2,undefined2 param_3,short param_4)

{
  int local_8;
  
  local_8 = 0;
  do {
    if (param_2 <= local_8) {
LAB_006421cd:
      if (local_8 == param_2) {
        FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x188);
      }
      else {
        FUN_00642130(param_1,param_2,param_3,local_8);
      }
      return;
    }
    if (*(short *)(param_1 + local_8 * 2) == param_4) {
      local_8 = local_8 + 1;
      goto LAB_006421cd;
    }
    if (*(short *)(param_1 + local_8 * 2) == 0) goto LAB_006421cd;
    local_8 = local_8 + 1;
  } while( true );
}

