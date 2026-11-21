// FUN_00642090  00642090

void FUN_00642090(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  while (((local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0)) &&
         (cVar1 = FUN_00642c20(CONCAT22((short)((uint)local_8 >> 0x10),param_3),
                               *(undefined2 *)(param_1 + local_8 * 2)), cVar1 == '\0'))) {
    local_8 = local_8 + 1;
  }
  if (local_8 == param_2) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x16c);
  }
  else {
    FUN_00642130(param_1,param_2,param_3,local_8);
  }
  return;
}

