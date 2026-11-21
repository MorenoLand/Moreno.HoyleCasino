// FUN_005f5640  005f5640

undefined1 __thiscall FUN_005f5640(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 local_c;
  
  cVar1 = FUN_005f54a0();
  if ((((cVar1 == '\0') || (param_2 < *(int *)(param_1 + 0x10))) ||
      (*(int *)(param_1 + 0x18) < param_2)) ||
     ((param_3 < *(int *)(param_1 + 0x14) || (*(int *)(param_1 + 0x1c) < param_3)))) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

