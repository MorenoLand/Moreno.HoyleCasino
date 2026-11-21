// FUN_0062d580  0062d580

undefined4 __thiscall FUN_0062d580(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  while (local_c < 0x40000) {
    local_10 = FUN_00685e50(param_1 + 8,&DAT_015eee20 + local_c,0x40000 - local_c,local_8,2,1,
                            local_14);
    if (0x40000 - local_c < local_10) {
      return 0;
    }
    if (local_10 < 1) {
      if (local_10 < 0) {
        return 0;
      }
      if ((*(char *)(param_1 + 0x2f0) == '\0') || (iVar2 = FUN_00685cc0(param_1 + 8), iVar2 != 0))
      break;
    }
    else {
      local_c = local_c + local_10;
    }
  }
  if (local_c == 0) {
    uVar3 = 0;
  }
  else {
    alBufferData(param_2,*(undefined4 *)(param_1 + 0x2ec),&DAT_015eee20,local_c,
                 *(undefined4 *)(*(int *)(param_1 + 0x2d8) + 8));
    cVar1 = FUN_0062d710();
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

