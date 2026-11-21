// FUN_00641ff0  00641ff0

void FUN_00641ff0(int param_1,int param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int local_8;
  
  local_8 = 0;
  while (((local_8 < param_2 && (*(short *)(param_1 + local_8 * 2) != 0)) &&
         (uVar2 = (undefined2)((uint)local_8 >> 0x10),
         cVar1 = FUN_00642c20(CONCAT22(uVar2,*(undefined2 *)(param_1 + local_8 * 2)),
                              CONCAT22(uVar2,param_3)), cVar1 == '\0'))) {
    local_8 = local_8 + 1;
  }
  if (local_8 == param_2) {
    FUN_005e9f20("false","..\\casinoShell\\card.cpp",0x15a);
  }
  else {
    FUN_00642130(param_1,param_2,param_3,local_8);
  }
  return;
}

