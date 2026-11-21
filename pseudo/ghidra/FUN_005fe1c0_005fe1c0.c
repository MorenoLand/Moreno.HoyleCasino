// FUN_005fe1c0  005fe1c0

undefined4 FUN_005fe1c0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    local_8 = param_3;
    for (local_c = 0; *(int *)(param_1 + local_c * 0x10) != -1; local_c = local_c + 1) {
      cVar1 = FUN_005fe290(local_c * 0x10 + param_1,param_2,local_8,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      local_8 = *(undefined4 *)(param_1 + local_c * 0x10);
    }
    uVar2 = 1;
  }
  return uVar2;
}

