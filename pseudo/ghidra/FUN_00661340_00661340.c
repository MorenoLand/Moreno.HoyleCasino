// FUN_00661340  00661340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00661340(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x194) == 3) && (param_2 == 1)) {
    if (*(int *)(param_1 + 0x1fc) != 0) {
      (**(code **)(*DAT_015e55e8 + 0x80))
                (*(undefined4 *)(param_1 + 0x1fc),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  else if ((*(int *)(param_1 + 0x194) == 0) && (param_2 == 3)) {
    if (DAT_00795fbf == '\0') {
      if (*(int *)(param_1 + 0x200) != 0) {
        (**(code **)(*DAT_015e55e8 + 0x80))
                  (*(undefined4 *)(param_1 + 0x200),0,0,5,1,0x3f800000,_DAT_006b3654,0);
      }
    }
    else if (*(int *)(param_1 + 0x204) != 0) {
      (**(code **)(*DAT_015e55e8 + 0x80))
                (*(undefined4 *)(param_1 + 0x204),0,0,5,1,0x3f800000,_DAT_006b3654,0);
    }
  }
  FUN_006031d0(param_2);
  return;
}

