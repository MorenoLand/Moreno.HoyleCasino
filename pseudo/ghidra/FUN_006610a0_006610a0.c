// FUN_006610a0  006610a0

void __thiscall FUN_006610a0(int *param_1,int param_2)

{
  char cVar1;
  
  if ((param_1[3] == 0) && (*(int *)(param_2 + 0x18) == 1)) {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (((cVar1 != '\0') &&
        (((*(char *)(param_2 + 4) == '\0' && ((*(uint *)(param_2 + 0x1c) & 4) != 0)) &&
         ((*(uint *)(param_2 + 0x1c) & 2) != 0)))) &&
       ((((*(uint *)(param_2 + 0x1c) & 1) != 0 && (*(int *)(DAT_016306b0 + 0x1bc) != 0)) &&
        (*(char *)(DAT_016306b0 + 0x1c1) != '\0')))) {
      DAT_00795fbe = 1;
    }
  }
  FUN_005f4d00(param_2);
  return;
}

