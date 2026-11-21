// FUN_005eb630  005eb630

undefined1 __thiscall FUN_005eb630(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 local_c;
  
  cVar1 = FUN_005f5640(param_2,param_3);
  if (cVar1 == '\0') {
LAB_005eb6ba:
    local_c = 0;
  }
  else {
    if ((*(int *)(param_1 + 0x174) != 0) && (*(char *)(param_1 + 0x16d) != '\0')) {
      cVar1 = FUN_00616ac0(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c),
                           param_2 - *(int *)(param_1 + 0x10),param_3 - *(int *)(param_1 + 0x14),
                           *(undefined1 *)(param_1 + 0x16e));
      if (cVar1 == '\0') goto LAB_005eb6ba;
    }
    local_c = 1;
  }
  return local_c;
}

